#include "Overcoat.h"

int Overcoat::counter = 0;

Overcoat::Overcoat()
{
    name = "NN";
    type = "None";
    size = 0;
    price = 0.0;
    num = 0;
}

Overcoat::Overcoat(string name, string type, int size, float price, int num)
{
    this->name = name;
    this->type = type;
    this->size = size;
    this->price = price;
    this->num = num;

    
    
}

string Overcoat::getName() const
{
    return name;
}

string Overcoat::getType() const
{
    return type;
}

int Overcoat::getSize() const
{
    return size;
}

float Overcoat::getPrice() const
{
    return price;
}

int Overcoat::getNum() const
{
    return num;
}

void Overcoat::setName(string name)
{
    this->name = name;
}

void Overcoat::setType(string type)
{
    this->type = type;

}

void Overcoat::setSize(int size)
{
    this->size = size;
}

void Overcoat::setPrice(float price)
{
    this->price = price;
}

void Overcoat::setNum(int num)
{
    this->num = num;
}

void Overcoat::show() const
{
    cout << "Name: " << name << endl
        << "Type: " << type << endl
        << "Size: " << size << endl
        << "Price: " << price << endl
        << "Id: " << num << endl;
}

bool Overcoat::operator==(const Overcoat& other) const
{
    return this->type == other.type;
}

bool Overcoat::operator!=(const Overcoat& other) const
{
    return !(*this == other);
}

bool Overcoat::operator>(const Overcoat& other) const
{
    return this->price > other.price;

}

bool Overcoat::operator>=(const Overcoat& other) const
{
    return this->price >= other.price;
}

bool Overcoat::operator<(const Overcoat& other) const
{
    return this->price < other.price;
}

bool Overcoat::operator<=(const Overcoat& other) const
{
    return this->price <= other.price;
}

Overcoat& Overcoat::operator++()
{
    ++size;
    return *this;
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
