#include "Domain.h"
#include <string.h>
#include <sstream>
using namespace std;

Store::Store()
{
	name = NULL;
	price = 0;
	number = 0;
}

Store::Store(const char* name, int price, int number)
{
	this->name = new char[strlen(name) + 1];
	strcpy_s(this->name, strlen(name) + 1, name);

	this->price = price;
	this->number = number;
}

Store::Store(const Store& store)
{
	this->name = new char[strlen(store.name) + 1];
	strcpy_s(this->name, strlen(store.name) + 1, store.name);

	this->price = store.price;
	this->number = store.number;
}

Store::~Store()
{
	if (name)
		delete[]name;
	name = NULL;

	price = -1;
	number = -1;
}

Store& Store::operator=(const Store& store)
{
	if (this == &store)
		return *this;

	if (name)
		delete[] name;
	name = new char[strlen(store.name) + 1];
	strcpy_s(name, strlen(store.name) + 1, store.name);

	price = store.price;

	number = store.number;

	return *this;
}

bool Store::operator==(const Store& store)
{
	return (strcmp(name, store.name) == 0) and (price == store.price) and (number == store.number);
}

bool Store::operator<(const Store& store)
{
	return (strcmp(name, store.name) < 0);

}

char* Store::getName()
{
	return name;
}

int Store::getPrice()
{
	return price;
}

int Store::getNumber()
{
	return number;
}


void Store::setName(const char* name)
{
	if (this->name)
		delete[] this->name;
	this->name = new char[strlen(name) + 1];
	strcpy_s(this->name, strlen(name) + 1, name);
}

void Store::setPrice(int price)
{
	this->price = price;
}

void Store::setNumber(int number)
{
	this->number = number;
}

/*Store::Store(string line)
{
	std::istringstream iss(line);
	string tok1, tok2, tok3;
	iss >> tok1 >> tok2 >> tok3;

	name = new char[tok1.length() + 1];
	strcpy_s(name, tok1.length() + 1, tok1.c_str());

	price = stoi(tok2);
	number = stoi(tok3);
}


/*istream& operator>>(istream& is, Store& store)
{
	cout << "Dati numele: ";
	char* name = new char[10];
	is >> name;
	cout << "Dati pretul: ";
	int price;
	is >> price;
	cout << "Dati numarul de exemplare disponibile:";
	int number;
	is >> number;

	store.setName(name);
	store.setPrice(price);
	store.setNumber(number);

	delete[] name;

	return is;
}

ostream& operator<<(ostream& os, Store store)
{
	os << store.name << " " << store.price << " " <<store.number << endl;
	return os;
}

*/