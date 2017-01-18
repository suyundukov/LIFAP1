/**
 * Idée principal -> Simuler le jeu de mémory
 */
#include <Grapic.h>
#include <cstdlib>
#include <cstring>
#include <ctime>

using namespace grapic;
using namespace std;

const short DIMW = 500;
const short MAX_X = 10;
const short MAX_Y = 10;
const short MAX_IMAGES = 18;
const short MAXCHAR = 35;

struct CaseGrille {
  Image imCase;
  char nomImage[MAXCHAR];
  bool visible;
};

struct Jeu {
  short dx;
  short dy;
  CaseGrille tab[MAX_X][MAX_Y];
  int indImage[MAX_IMAGES];
  Image imVide;
};

void nomDuFichier(Jeu& game, char temp[MAXCHAR]) {
  char num[3];
  short randX;

  do {
    randX = rand() % MAX_IMAGES + 1;
  } while (game.indImage[randX - 1] != 0);

  game.indImage[randX - 1] = 1;

  strcpy(temp, "data/memory/Image_Memory_");

  if (randX < 10) {
    strcat(temp, "0");
    num[0] = '0' + randX;
    num[1] = '\0';
  } else {
    num[0] = '1';
    num[1] = randX % 10 + '0';
    num[2] = '\0';
  }
  strcat(temp, num);
  strcat(temp, ".jpg");
}

void initImages(Jeu& game) {
  char temp[MAXCHAR];
  short randX;
  short randY;

  srand(static_cast<unsigned int>(time(NULL)));

  for (int i = 0; i < (game.dx * game.dy / 2); ++i) {
    nomDuFichier(game, temp);
    for (int j = 0; j < 2; ++j) {
      do {
        randX = rand() % game.dx;
        randY = rand() % game.dy;
      } while (strcmp(game.tab[randX][randY].nomImage,
                      "data/memory/vide.jpg") != 0);
      strcpy(game.tab[randX][randY].nomImage, temp);
      game.tab[randX][randY].imCase = image(temp);
    }
  }
}

void initGrille(Jeu& game) {
  game.dx = 4;
  game.dy = 4;

  for (int i = 0; i < MAX_IMAGES; ++i)
    game.indImage[i] = 0;

  for (int i = 0; i < game.dx; ++i) {
    for (int j = 0; j < game.dy; ++j) {
      game.tab[i][j].imCase = image("data/memory/vide.jpg");
      game.tab[i][j].visible = false;
      strcpy(game.tab[i][j].nomImage, "data/memory/vide.jpg");
    }
  }

  game.imVide = image("data/memory/vide.jpg");
  initImages(game);
}

void afficherGrille(Jeu game) {
  for (int i = 0; i < game.dx; ++i) {
    for (int j = 0; j < game.dy; ++j) {
      if (game.tab[i][j].visible)
        image_draw(game.tab[i][j].imCase, i * DIMW / game.dx,
                   j * DIMW / game.dy, DIMW / game.dx, DIMW / game.dy);
      else
        image_draw(game.imVide, i * DIMW / game.dx, j * DIMW / game.dy,
                   DIMW / game.dx, DIMW / game.dy);
    }
  }
}

void choisirCase(Jeu game, int& l1, int& c1) {
  int l;
  int c;
  bool b;

  l1 = -1;

  while (l1==-1) {
    if (isMousePressed(SDL_BUTTON_LEFT)) {
      int x;
      int y;
      mousePos(x, y);
      l = x / (DIMW / game.dx);
      c = y / (DIMW / game.dy);
      if (!game.tab[l][c].visible) {
        l1 = l;
        c1 = c;
      }
    }
    winDisplay();
  }
}

int areSame(Jeu& game) {
  int l1;
  int c1;
  int l2;
  int c2;

  choisirCase(game, l1, c1);
  game.tab[l1][c1].visible = true;
  afficherGrille(game);
  winDisplay();

  choisirCase(game, l2, c2);
  game.tab[l2][c2].visible = true;
  afficherGrille(game);
  winDisplay();

  if (strcmp(game.tab[l1][c1].nomImage, game.tab[l2][c2].nomImage) == 0) {
    return 1;
  } else {
    delay(2000);
    game.tab[l2][c2].visible = false;
    game.tab[l1][c1].visible = false;
    return 0;
  }
}

int main(int , char**) {
  Jeu game;
  bool stop;
  int score;
  int echec;
  int c;
  int l;
  int c1;
  int l1;
  char temp[MAXCHAR];

  score = 0;
  echec = 0;
  stop = false;

  srand(static_cast<unsigned int>(time(NULL)));

  winInit("Memory", DIMW, DIMW);
  winClear();
  initGrille(game);
  afficherGrille(game);
  stop = winDisplay();

  while (!stop && (score != (game.dx * game.dy) / 2)) {
    if (areSame(game)) {
      score += 1;
    } else {
      echec += 1;
    }
    afficherGrille(game);
    stop = winDisplay();
  }

  color(255,0,0);
  fontSize(48);
  print(150,250,"GAGNE!!!");
  fontSize(28);
  print(200,150,echec);
  print(250,150,"erreurs");
  color(0,0,0);
  fontSize(12);
  winDisplay();
  pressSpace();
  winQuit();

  return 0;
}
