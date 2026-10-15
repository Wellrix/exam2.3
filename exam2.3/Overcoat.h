#pragma once
#include <iostream>
#include <string>
using namespace std;

class Overcoat
{
	string name;
	string type;
	string size;
	float price;
	int num;

	static int counter;

public:
	Overcoat();
	Overcoat(string name,string type,string size,float price,int num);

	string getName()const;
	string getType()const;
	string getSize()const;
	float getPrice()const;
	int getNum()const;

	void setName(string name);
	void setType(string type);
	void setSize(string size);
	void setPrice(float price);
	void setNum(int num);

	void show() const;

	





};

