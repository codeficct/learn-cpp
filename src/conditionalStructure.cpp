#include <iostream>
#include <string>
#include "header.h"

using namespace std;

void conditionalStructure() {
  string movie;
  // Console output
  cout << "Favorite movie: ";
  // Console input
  cin >> movie;
  if (movie == "StarWars") cout << "My favorite movie is: " << movie << endl;

  float price;
  cout << "Precio de la prenda: ";
  cin >> price;
  string isCheapOrExpensive = (price > 10) ? "cara" : "barata";
  cout << "La prenda es " << isCheapOrExpensive;
}