#pragma once
#include <cstring>
#include <iostream>

using namespace std;

const int MAX_SIZE = 100;

void saisieChaine(char c[])
{
  cout << "Saisie une chaîne de caractère : ";
  cin >> c;
  cout << endl;
}


void afficheChaine()
{
  char c[MAX_SIZE] = "";
  
  saisieChaine(c);
  
  cout << c << endl;
}

void mirroirChaine()
{
  char c[MAX_SIZE] = "";
  char temp;
  
  saisieChaine(c);
  
  for (int i = 0; i < (strlen(c) / 2); ++i) { // Longueur / 2 - 1
    temp = c[i];
    c[i] = c[(strlen(c) - 1) - i];
    c[(strlen(c) - 1) - i] = temp;
  }
  
  cout << c << endl;
}

void concatChaine()
{
  char c[MAX_SIZE] = "";
  char c1[MAX_SIZE] = "";
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
  
  cout << c << endl;
}

void compareChaine()
{
  bool n;
  char c[MAX_SIZE] = "";
  char c1[MAX_SIZE] = "";
  int i;
  
  n = true;
  i = 0;
  
  saisieChaine(c);
  saisieChaine(c1);
  
  while (n != false && i < (strlen(c) - 1)) {
    if (c1[i] != c[i]) {
      n = false;
    } else {
      n = true;
    }
    ++i;
  }
  
  if (n)
    cout << "Elles sont égaux" << endl;
  else
    cout << "Elles sont diffèrent" << endl;
}

int menu()
{
  char choix;
  
  cout << "Choisissez parmi les possibilités suivant :\n";
  cout << "1. Saisir et afficher une chaîne de caractères\n";
  cout << "2. Modifier une chaîne de caractères en son mirroir\n";
  cout << "3. Concatèner deux chaîne de caractères\n";
  cout << "4. Comparer deux chaîne de caractère\n";
  cout << "5. Quitter\n";
  cin >> choix;
  
  cout << endl;
  return choix;
}
