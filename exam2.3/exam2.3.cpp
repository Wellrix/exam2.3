#include <iostream>
#include "Shop.h"

using namespace std;

int main()
{
    Shop myShop;

    Overcoat c1("Jacket", "Male", 48, 150.0);
    Overcoat c2("Coat", "Female", 42, 220.0);
    Overcoat c3("Parka", "Male", 50, 180.0);

    myShop.addOvercoat(c1);
    myShop.addOvercoat(c2);
    myShop.addOvercoat(c3);

    cout << "=== Catalog ===" << endl;
    myShop.show();

    cout << "\n=== Search Male ===" << endl;
    myShop.searchByType("Male");

    cout << "\n=== Inc size for first item ===" << endl;
    myShop.changeSize(0, true);

    cout << "\n=== Sorted by price ===" << endl;
    myShop.sortByPrice();
    myShop.show();

    return 0;
}