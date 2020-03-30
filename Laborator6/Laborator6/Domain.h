#pragma once
#include <iostream>
#include <string>
using namespace std;

class Store
{
private:
	char* name;
	int price;
	int number;
public:
	Store();
	Store(const char*, int, int);
	Store(const Store&);
	~Store();

	Store& operator=(const Store&);
	bool operator==(const Store&);
	bool operator<(const Store&);

	char* getName();
	int getPrice();
	int getNumber();

	void setName(const char*);
	void setPrice(int);
	void setNumber(int);

	//Store(string line);

	//friend istream& operator>>(istream&, Store&);
	//friend ostream& operator<<(ostream& os, Store student);

};

