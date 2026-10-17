#include <vector>
#include <algorithm>
#include "Overcoat.h"

class Shop {
private:
    vector<Overcoat> shop;

public:
    Shop();

    void addOvercoat(const Overcoat& item);
    void removeOvercoat(int index);
    void changeSize(int index, bool increase);

    void searchByType(const string type) const;
    void sortByPrice();
    void show() const;

};