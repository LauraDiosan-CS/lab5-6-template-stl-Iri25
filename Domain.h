#pragma once
#include <ostream>
using namespace std;

class Product 
{
private:
	char* name;
	int price;
	int number;
public:
	Product();
	Product(char* name, int price, int number);
	Product(const Product& product);
	Product(string line);
	~Product();

	Product& operator=(const Product& product);
	bool operator==(const Product& product) const;
	bool operator!=(const Product& product) const;
	bool operator<(const Product& product) const;
	bool operator<=(const Product& product) const;
	bool operator>(const Product& product) const;
	bool operator>=(const Product& product) const;

	char* getName();
	int getPrice();
	int getNumber();

	void setPrice(int nr);
	void setName(char* nume);
	void setNumber(int loc);
	
	friend std::istream& operator>>(std::istream& is, Product& product);
	friend std::ostream& operator<<(std::ostream& os, Product& product);
};
