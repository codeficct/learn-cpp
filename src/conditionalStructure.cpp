#include <iostream>

using namespace std;

void conditionalStructure()
{
  string movie;
  float price;
  // Console output
  cout << "Favorite movie: ";
  // Console input
  cin >> movie;

  if (movie == "StarWars")
    cout << "My favorite movie is: " << movie << endl;

  cout << "Precio de la prenda: ";
  cin >> price; // Set price of the cloth
  string isCheapOrExpensive = (price > 10) ? "cara" : "barata";
  cout << "[conditionalStructure] La prenda es " << isCheapOrExpensive;
}