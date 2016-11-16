/**
 * 1.           -> Définir les structure de données nécessaires
 * 2. Procédure -> Saisir les données de structure VOYAGE
 * 3. Procédure -> Ajouter un voyage dans le tableau
 * 4. Procédure -> Revoyer la moyenne des notes par continent
 * 5. Procédure -> Renvoyer l'indice du meilleur et pire continent
 * 6. Programme principal
 */
#include <iostream>

const short MAX = 20;

struct Voyage {
  char dest[20];
  short cont;
  short dur;
  short note;
};

struct TousLesVoyages {
  short nmbr;
  Voyage tab[MAX];
};

void remplirVoyage(Voyage& voy)
{
  std::cout << "Donne moi la destination : " << std::flush;
  std::cin >> voy.dest;
  do {
    std::cout << "Choisi parmi les possibilités suivants : " << std::endl;
    std::cout << "1. Afrique\n" << "2. Amérique\n" << "3. Asie\n" << "4. Europe\n"
         << "5. Océanie" << std::endl;
    std::cin >> voy.cont;
  } while (voy.cont < 1 && voy.cont > 5);
  std::cout << "Donne moi la durée : " << std::flush;
  std::cin >> voy.dur;
  std::cout << "Donne moi la note : " << std::flush;
  std::cin >> voy.note;
  
  // Pour faciliter le travail avec le tableau d'après
  voy.cont -= 1;
}

void ajouteVoyage(TousLesVoyages& tVoy)
{
  remplirVoyage(tVoy.tab[tVoy.nmbr]);
  tVoy.nmbr += 1;
}

void moyenneParContinent(TousLesVoyages& tVoy, double tabMoy[5] = 0)
{
  int tabInd[5] = {0};
  
  //FIXME: Réécrire le code
  for (int i = 0; i < tVoy.nmbr; ++i) {
    switch (tVoy.tab[i].cont) {
      case 0:
        tabInd[0] += 1;
        tabMoy[0] += tVoy.tab[i].note;
        break;
      case 1:
        tabInd[1] += 1;
        tabMoy[1] += tVoy.tab[i].note;
        break;
      case 2:
        tabInd[2] += 1;
        tabMoy[2] += tVoy.tab[i].note;
        break;
      case 3:
        tabInd[3] += 1;
        tabMoy[3] += tVoy.tab[i].note;
        break;
      case 4:
        tabInd[4] += 1;
        tabMoy[4] += tVoy.tab[i].note;
        break;
      default:
        break;
    }
  }
  
  for (int i = 0; i < 5; ++i)
    tabMoy[i] /= tabInd[i];
}

void leMieuxEtLePire(TousLesVoyages tVoy, int& mieux, int& pire)
{
  double tabMoy[5];
  int good;
  int bad;
  
  good = 0;
  bad = 20;
  
  moyenneParContinent(tVoy, tabMoy);
  
  for (int i = 0; i < 5; ++i) {
    if (tabMoy[i] > good) {
      good = tabMoy[i];
      mieux = i;
    }
    if (tabMoy[i] < bad) {
      bad = tabMoy[i];
      pire = i;
    }
  }
}

int main()
{
  TousLesVoyages tVoy;
  int mieux;
  int pire;

  do {
    char c;
    ajouteVoyage(tVoy);
    std::cout << "On continue (y/n) : " << std::endl;
    std::cin >> c;
    if (c == 'n')
      break;
  } while (true);
  
  leMieuxEtLePire(tVoy, mieux, pire);
  
  //FIXME: Réécrire le code
  std::cout << "Le continent préféré est : " << std::flush;
  switch (mieux) {
    case 0:
      std::cout << "Afrique" << std::endl;
      break;
    case 1:
      std::cout << "Amérique" << std::endl;
      break;
    case 2:
      std::cout << "Asie" << std::endl;
      break;
    case 3:
      std::cout << "Europe" << std::endl;
      break;
    case 4:
      std::cout << "Océanie" << std::endl;
      break;
      
    default:
      break;
  }
  
  //FIXME: Réécrire le code
  std::cout << "Le continent moins aimé : " << std::flush;
  switch (pire) {
    case 0:
      std::cout << "Afrique" << std::endl;
      break;
    case 1:
      std::cout << "Amérique" << std::endl;
      break;
    case 2:
      std::cout << "Asie" << std::endl;
      break;
    case 3:
      std::cout << "Europe" << std::endl;
      break;
    case 4:
      std::cout << "Océanie" << std::endl;
      break;
      
    default:
      break;
  }
  
  return 0;
}
