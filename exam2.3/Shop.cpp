#include "Shop.h"

Shop::Shop()
{
}

void Shop::addOvercoat(const Overcoat& item)
{
    shop.push_back(item);
}

void Shop::removeOvercoat(int index)
{
    if (index >= 0 && index < shop.size()) {
        shop.erase(shop.begin() + index);
    }
}

void Shop::changeSize(int index, bool increase)
{
    if (index >= 0 && index < shop.size()) {
        if (increase) {
            ++shop[index];
        }
        else {
            --shop[index];
        }
    }
}

void Shop::searchByType(const string type) const
{
    for (int i = 0; i < shop.size(); i++) {
        if (shop[i].getType() == type) {
            shop[i].show();
        }
    }
}

void Shop::sortByPrice()
{
    for (int i = 0; i < shop.size(); i++) {
        for (int j = 0; j < shop.size() - 1; j++) {
            if (shop[j] > shop[j + 1]) {
                Overcoat temp = shop[j];
                shop[j] = shop[j + 1];
                shop[j + 1] = temp;
            }
        }
    }
}

void Shop::show() const
{
    for (int i = 0; i < shop.size(); i++) {
        shop[i].show();
    }
}