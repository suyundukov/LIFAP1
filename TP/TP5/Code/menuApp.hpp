#pragma once

#include <cstring>
#include <iostream>

const int MAX = 100;

void saisieChaine(char c[])
{
  std::cout << "Saisie une chaîne de caractère : " << std::flush;
  std::cin >> c;
  std::cout << std::endl;
}


void afficheChaine()
{
  char c[MAX] = "";
  
  saisieChaine(c);
  
  std::cout << c << std::endl;
}

void mirroirChaine()
{
  char c[MAX] = "";
  char temp;
  
  saisieChaine(c);
  
  for (int i = 0; i < (strlen(c) / 2); ++i) { // Longueur / 2 - 1
    temp = c[i];
    c[i] = c[(strlen(c) - 1) - i];
    c[(strlen(c) - 1) - i] = temp;
  }
  
  std::cout << c << std::endl;
}

void concatChaine()
{
  char c[MAX] = "";
  char c1[MAX] = "";
  long i;
  int j;
  
  saisieChaine(c);
  saisieChaine(c1);
  
  i = strlen(c);
  j = 0;
  
  c[i] = ' ';
  i += 1;
  
  while (c[j] != '\0') {
    c[i] = c1[j];
    ++i;
    ++j;
  }
  
  c[i] = '\0';
  
  std::cout << c << std::endl;
}

void compareChaine()
{
  bool n;
  char c[MAX] = "";
  char c1[MAX] = "";
  int i;
  
  n = true;
  i = 0;
  
  saisieChaine(c);
  saisieChaine(c1);
  
  while (n != false && i < (strlen(c) - 1)) {
    if (c1[i] != c[i])
      n = false;
    else
      n = true;

    ++i;
  }
  
  if (n)
    std::cout << "Elles sont égaux" << std::endl;
  else
    std::cout << "Elles sont diffèrent" << std::endl;
}

int menu()
{
  char choix;
  
  std::cout << "Choisissez parmi les possibilités suivant :" << std::endl;
  std::cout << "1. Saisir et afficher une chaîne de caractères" << std::endl;
  std::cout << "2. Modifier une chaîne de caractères en son mirroir" << std::endl;
  std::cout << "3. Concatèner deux chaîne de caractères" << std::endl;
  std::cout << "4. Comparer deux chaîne de caractère" << std::endl;
  std::cout << "5. Quitter" << std::endl;
  std::cin >> choix;
  
  std::cout << std::endl;
  return choix;
}
