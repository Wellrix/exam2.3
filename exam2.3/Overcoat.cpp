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
    if (size > 0) --size;
    return *this;
}

Overcoat Overcoat::operator++(int)
{
    Overcoat temp = *this;
    ++size;
    return temp;
}

Overcoat Overcoat::operator--(int)
{
    Overcoat temp = *this;
    if (size > 0) --size;
    return temp;
}

ostream& operator<<(ostream& os, const Overcoat& item)
{
    os << "ID: " << item.num
        << " | Name: " << item.name
        << " | Type: " << item.type
        << " | Size: " << item.size
        << " | Price: " << item.price;
    return os;
}

istream& operator>>(istream& is, Overcoat& item)
{
    is >> item.name >> item.type >> item.size >> item.price;
    return is;
}
