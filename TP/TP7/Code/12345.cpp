#include <Grapic.h>

using namespace grapic;

const int DIMW = 512;
const int MAX_X = 512;
const int MAX_Y = 512;
const int MASQUE = 9;
const int MAXCHAR = 128;

struct Data {
  int tX;
  int tY;
  unsigned char pix[MAX_X][MAX_Y];
};

void draw(Data d) {
  for (int i = 0; i < d.tX; ++i)
    for (int j = 0 ; j < d.tY ; ++j)
      put_pixel(i, j, d.pix[i][j], d.pix[i][j], d.pix[i][j]);
}

void init(Data& d, Image lena) {
  d.tX = DIMW;
  d.tY = DIMW;

  for (int i = 0; i < d.tX; ++i)
    for (int j = 0 ; j < d.tY; ++j)
      d.pix[i][j] = int(image_get(lena, i, j, 0));
}

void drawInit(Data& d) {
  for (int i = 0; i < d.tX; ++i)
    for (int j = 0; j < d.tY; ++j)
      put_pixel(i, j, d.pix[i][j], d.pix[i][j], d.pix[i][j]);
}

void seuillage(Data& d) {
  for (int i = 0; i < d.tX; ++i)
    for (int j = 0; j < d.tY; ++j) {
      if (d.pix[i][j] >= 128)
        d.pix[i][j] = 255;
      else
        d.pix[i][j] = 0;
    }
}

void miroir(Data& d) {
  int temp;

  for (int i = 0; i < d.tX / 2; ++i)
    for (int j = 0; j < d.tY; ++j) {
      temp = d.pix[i][j];
      d.pix[i][j] = d.pix[d.tX - i - 1][j];
      d.pix[d.tX - i - 1][j] = temp;
    }
}

void contours(Data& d) {
  int k;
  int l;
  Data d2 = d;

  for (int i = 1; i<d.tX - 1; ++i)
    for (int j = 1; j < d.tY - 1; ++j) {
      k = -d.pix[i - 1][j - 1] - d.pix[i][j - 1] - d.pix[i + 1][j - 1]
          + d.pix[i - 1][j + 1] + d.pix[i][j + 1] + d.pix[i + 1][j + 1];
      l = d.pix[i - 1][j - 1] + d.pix[i - 1][j] + d.pix[i - 1][j + 1]
          - d.pix[i + 1][j - 1] - d.pix[i + 1][j] - d.pix[i + 1][j + 1];
      d2.pix[i][j] = sqrt(k * k + l * l);
      if (d2.pix[i][j] > 255)
        d2.pix[i][j] = 255;
    }
  d = d2;
}

void floutage(Data& d) {
  float ng;
  Data d2 = d;

  for (int i = MASQUE / 2; i < d.tX - MASQUE / 2; ++i)
    for (int j = MASQUE / 2; j < d.tY - MASQUE / 2; ++j) {
      ng = 0;
      for (int k = i - MASQUE / 2; k <= i + MASQUE / 2; ++k)
        for (int l = j - MASQUE / 2; l <= j + MASQUE / 2; ++l)
          ng += d.pix[k][l];
      d2.pix[i][j] = ng / (MASQUE * MASQUE);
    }
  d = d2;
}

void warhol(Data& d) {
  float ng;
  Data d2 = d;
  for (int i = 1; i < d.tX - 1; ++i)
    for (int j = 1; j < d.tY - 1; ++j) {
      if (d.pix[i][j] <= 150)
        put_pixel(i, j, 255, 0, 255);
      else
        put_pixel(i, j, 255, 255, 0);
    }
  d = d2;
}

void drawHistogramme(int xmin, int ymin, int xmax, int ymax,
                     int nb[256], char titre[MAXCHAR]) {
  line(xmin, ymin, xmax, ymin);
  line(xmin, ymin, xmin, ymax);
  fontSize(32);
  print(150, 450, titre);
  for (int i = 0; i < 256; ++i)
    line(2 * i + xmin, ymin, 2 * i + xmin, ymin +
         ((ymax - ymin) * nb[i] * 64) / (DIMW * DIMW));
}

void histogramme (Data &d, int nb[256]) {
  for (int i = 0; i < 256; ++i)
    nb[i]=0;
  for (int i = 0; i < d.tX; ++i)
    for (int j = 0; j < d.tY; ++j)
      nb[d.pix[i][j]]++;
}


int main(int, char**) {
  Data d;
  Menu m;
  int gris[256] = {0};
  bool stop;

  stop = false;

  winInit("Traitement images", DIMW, DIMW);
  Image lena = image("data/structure/barbara.jpg");

  init(d, lena);

  menu_add(m, "Initiale");
  menu_add(m, "Seuillage");
  menu_add(m, "Miroir");
  menu_add(m, "Contours");
  menu_add(m, "Floutage");
  menu_add(m, "Warhol");
  menu_add(m, "Histogramme");

  while (!stop) {
    winClear();
    switch(menu_select(m)) {
      case 0 :
        init(d, lena);
        drawInit(d);
        break;
      case 1 :
        init(d, lena);
        seuillage(d);
        draw(d);
        break;
      case 2 :
        init(d, lena);
        miroir(d);
        draw(d);
        break;
      case 3 :
        init(d, lena);
        contours(d);
        draw(d);
        break;
      case 4 :
        init(d, lena);
        floutage(d);
        draw(d);
        break;
      case 5 :
        init(d, lena);
        warhol(d);
        break;
      case 6 :
        init(d, lena);
        histogramme(d, gris);
        drawHistogramme(10, 10, 512, 512, gris, "HISTOGRAMME");
        break;
      default:
        drawInit(d);
        break;
    }
    menu_draw(m, 5, 5, 100, 102);
    stop = winDisplay();
  }
  winQuit();
  return 0;
}
