#include "Overcoat.h"

Overcoat::Overcoat()
{
}

Overcoat::Overcoat(string name, string type, string size, float price, int num)
{
}

string Overcoat::getName() const
{
    return string();
}

string Overcoat::getType() const
{
    return string();
}

string Overcoat::getSize() const
{
    return string();
}

float Overcoat::getPrice() const
{
    return 0.0f;
}

int Overcoat::getNum() const
{
    return 0;
}

void Overcoat::setName(string name)
{
}

void Overcoat::setType(string type)
{
}

void Overcoat::setSize(string size)
{
}

void Overcoat::setPrice(float price)
{
}

void Overcoat::setNum(int num)
{
}

void Overcoat::show() const
{
}

bool Overcoat::operator==(const Overcoat& other) const
{
    return false;
}

bool Overcoat::operator!=(const Overcoat& other) const
{
    return false;
}

bool Overcoat::operator>(const Overcoat& other) const
{
    return false;
}

bool Overcoat::operator>=(const Overcoat& other) const
{
    return false;
}

bool Overcoat::operator<(const Overcoat& other) const
{
    return false;
}

bool Overcoat::operator<=(const Overcoat& other) const
{
    return false;
}

Overcoat& Overcoat::operator++()
{
    // TODO: insert return statement here
}

Overcoat& Overcoat::operator--()
{
    // TODO: insert return statement here
}

Overcoat Overcoat::operator++(int)
{
    return Overcoat();
}

Overcoat Overcoat::operator--(int)
{
    return Overcoat();
}

ostream& operator<<(ostream& os, const Overcoat& item)
{
    // TODO: insert return statement here
}

istream& operator>>(istream& is, Overcoat& item)
{
    // TODO: insert return statement here
}
