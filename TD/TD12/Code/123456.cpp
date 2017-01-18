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
const short NB_CONT = 6;

enum Continent {
  Afrique = 0,
  Amerique = 1,
  Asie = 2,
  Europe = 3,
  Oceanie = 4,
  Antartique = 5
};

char *libelle[] = {
  "Afrique",
  "Asie",
  "Amerique",
  "Europe",
  "Oceanie",
  "Antartique"
};

struct Voyage {
  char dest[20];
  Continent cont;
  short dur;
  short note;
};

struct TousLesVoyages {
  short nmbr;
  Voyage tab[MAX];
};

Continent saisieContinent() {
  int ind;

  std::cout << "Choix du continent : " << std::endl;

  for (int i = 0; i < NB_CONT; i++)
    std::cout << i + 1 << ". " << libelle[i] << std::endl;

  do {
    std::cout << "Faut choisir (entre 1 et " << NB_CONT << ") ?"
    << std::endl;
    std::cin >> ind;
  } while (ind <= 0 || ind > NB_CONT);

  ind -= 1;

  return (Continent) ind ;
}

void remplirVoyage(Voyage& voy) {
  std::cout << "Donne moi la destination : " << std::flush;
  std::cin >> voy.dest;
  voy.cont = saisieContinent();
  std::cout << "Donne moi la durée : " << std::flush;
  std::cin >> voy.dur;
  std::cout << "Donne moi la note : " << std::flush;
  std::cin >> voy.note;
}

void ajouteVoyage(TousLesVoyages& tVoy) {
  if (tVoy.nmbr >= MAX - 1) {
    std::cout << "Plus possible d'ajouter un voyage-quota de l'annee epuise"
    << std::endl;
    return ;
  }
  remplirVoyage(tVoy.tab[tVoy.nmbr]);
  tVoy.nmbr += 1;
}

void moyenneParContinent(TousLesVoyages tVoy, float tabMoy[NB_CONT]) {
  int ind;
  int tabInd[NB_CONT] = {0};

  for (int i = 0; i < tVoy.nmbr; ++i) {
    ind = tVoy.tab[i].cont;
    tabMoy[ind] += tVoy.tab[i].note;
    tabInd[ind] += 1;
  }
  for (int i = 0; i < NB_CONT; ++i) {
    if (tabInd[i] == 0) {
      tabMoy[i] = -1 ;
    } else {
      tabMoy[i] /= tabInd[i];
    }
  }
}

void leMieuxEtLePire(float tabMoy[NB_CONT], int& mieux, int& pire) {
  int good;
  int bad;

  good = 0;
  bad = 20;

  for (int i = 0; i < NB_CONT; ++i) {
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

void initTousLesVoyages(TousLesVoyages& tVoy) {
  tVoy.nmbr = 0;
}

int main() {
  TousLesVoyages tVoy;
  char c;
  float tabMoy[NB_CONT];
  int mieux;
  int pire;

  initTousLesVoyages(tVoy);

  do {
    ajouteVoyage(tVoy);
    std::cout << "On continue (y/n) : " << std::endl;
    std::cin >> c;
  } while (c == 'y' && tVoy.nmbr < MAX);

  moyenneParContinent(tVoy, tabMoy);
  leMieuxEtLePire(tabMoy, mieux, pire);

  std::cout << "Le continent préféré est : " << libelle[mieux] << std::endl;
  std::cout << "Le continent moins aimé : " << libelle[pire] << std::endl;

  return 0;
}
