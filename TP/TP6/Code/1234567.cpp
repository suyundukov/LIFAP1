/*=============================================================================
  1.           -> Définir une constante CHMAX
  2.           -> Définir les structures FLEUR et LISTE_FLEUR
  3. Fonction  -> Saisir toutes les infos relatives à une FLEUR
  4. Fonction  -> Saisir toutes les infos relatives à une LISTE_FLEUR
  5. Procédure -> Extraire la somme de toutes les fleaurs chez 3 commerçant
  6. Procédure -> Afficher les noms des fleurs qui ont une couleur rouge
  7. Programme principal -> Remplir un tableau avec 5 fleurs,
                          -> Afficher le nomde toutes les fleurs rouges,
                          -> Afficher le numèro de commerçant le moins cher
=============================================================================*/
#include <cstring>
#include <iostream>

// Définition d'une constante
const int CHMAX = 50;

// Définition de la structure FLEUR
struct Fleur {
  char nom[CHMAX];
  char couleur[CHMAX] ;
  float prix[3];
};

// Définition de la structure ListeFleurs
struct ListeFleurs {
  int nombre;
  Fleur tab[CHMAX];
};

/* Fonction 1 */

void saisirFleur(Fleur &fl)
{ 
  std::cout << "Donne moi le nom d'une fleur : " << std::flush;
  std::cin >> fl.nom;
  std::cout << "Donne moi la couleur de cette fleur : " << std::flush;
  std::cin >> fl.couleur;
  
  for (int i = 0; i < 3; ++i)
    do {
      std::cout << "Donne moi le prix de " << i + 1 << " commerçant : " << std::flush;
      std::cin >> fl.prix[i];
    } while (fl.prix[i] < 0);
}

/* Fonction 2 */

void saisirListe(ListeFleurs &li)
{ 
  std::cout << "Donne moi le nombre de fleur : " << std::flush;
  std::cin >> li.nombre;

  for (int i = 0; i < li.nombre; ++i)
    saisirFleur(li.tab[i]);
}

/* Procédure 1 */

void prixListeFleurs(ListeFleurs li, float &p1, float &p2, float &p3)
{
  p1 = 0;
  p2 = 0;
  p3 = 0;
  
  for (int i = 0; i < li.nombre; ++i) {
    p1 += li.tab[i].prix[0];
    p2 += li.tab[i].prix[1];
    p3 += li.tab[i].prix[2];
  }
}

/* Procédure 2 */

void affFleursRouges(ListeFleurs li)
{
  char c[CHMAX] = "rouge";

  std::cout << "Les fleurs rouges sont : " << std::flush;

  for (int i = 0; i < li.nombre; ++i)
    if (strcmp(li.tab[i].couleur, c) == 0)
      std::cout << li.tab[i].nom << " " << std::flush;

  std::cout << std::endl;
}

/* Utilisation / Programme principal */

int main()
{
  float p1;
  float p2;
  float p3;
  ListeFleurs li;
  
  saisirListe(li);
  prixListeFleurs(li, p1, p2, p3);
  affFleursRouges(li);
  
  if ((p1 < p2) && (p1 < p3))
    std::cout << "Le moins cher chez premier commerçant." << std::endl;
  else if ((p2 < p1) && (p2 < p3))
    std::cout << "Le moins cher chez deuxième commerçant." << std::endl;
  else
    std::cout << "Le moins cher chez troisième commerçant." << std::endl;

  return 0;
}
