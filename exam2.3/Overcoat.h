#pragma once
#include <iostream>
#include <string>
using namespace std;

class Overcoat
{
	string name;
	string type;
	int size;
	float price;
	int num;

	static int counter;

public:
	Overcoat();
	Overcoat(string name,string type,int size,float price,int num);

	string getName()const;
	string getType()const;
	int getSize()const;
	float getPrice()const;
	int getNum()const;

	void setName(string name);
	void setType(string type);
	void setSize(int size);
	void setPrice(float price);
	void setNum(int num);

	void show() const;

	bool operator == (const Overcoat& other) const;
	bool operator != (const Overcoat& other) const;
	bool operator > (const Overcoat& other) const;
	bool operator >= (const Overcoat& other) const;
	bool operator < (const Overcoat& other) const;
	bool operator <= (const Overcoat& other) const;

	Overcoat& operator++();
	Overcoat& operator--();

	Overcoat operator++(int);
	Overcoat operator--(int);

	friend ostream& operator<<(ostream& os, const Overcoat& item);
	friend istream& operator>>(istream& is, Overcoat& item);



	





};

