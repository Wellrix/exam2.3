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
}

void Shop::changeSize(int index, bool increase)
{
}

void Shop::searchByType(const string type) const
{
}

void Shop::sortByPrice()
{
}

void Shop::show() const
{
}
