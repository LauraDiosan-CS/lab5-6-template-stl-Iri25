#include"TestDomain.h"
#include<iostream>
#include<cassert>



void TestDomain::testConstructor()
{
	char name1[7] = "Jeans";
	char name2[8] = "Jacket";
	char name3[10] = "Dress";

	Product product1;
	Product product2(name2, 150, 40);
	Product product3(name2, 150, 40);
}

void TestDomain::testOperator()
{
	char name1[7] = "Jeans";
	char name2[8] = "Jacket";
	char name3[10] = "Dress";

	Product product1(name1, 60, 20);
	Product product2(name2, 150, 40);
	Product product3(name2, 150, 40);

	product1 = product3;
	assert(product1 == product3);
}

void TestDomain::testGetName()
{
	char name1[7] = "Jeans";
	char name2[8] = "Jacket";
	char name3[10] = "Dress";

	Product product1(name1, 60, 20);
	Product product2(name2, 150, 40);
	Product product3(name2, 150, 40);
	assert(product1.getName() == "Jeans");
	assert(product2.getName() == "Jacket");
	assert(product3.getName() == "Dress");
}

void TestDomain::testGetPrice()
{
	char name1[7] = "Jeans";
	char name2[8] = "Jacket";
	char name3[10] = "Dress";

	Product product1(name1, 60, 20);
	Product product2(name2, 150, 40);
	Product product3(name3, 150, 40);

	assert(product1.getPrice() == 60);
	assert(product2.getPrice() == 150);
	assert(product3.getPrice() == 130);
}

void TestDomain::testGetNumber()
{
	char name1[7] = "Jeans";
	char name2[8] = "Jacket";
	char name3[10] = "Dress";

	Product product1(name1, 60, 20);
	Product product2(name2, 150, 40);
	Product product3(name2, 150, 40);

	assert(product1.getNumber() == 20);
	assert(product2.getNumber() == 40);
	assert(product3.getNumber() == 35);
}

void TestDomain::testSetName()
{
	char name1[6] = "Skirt";
	Product product1(name1, 60, 20);
	product1.setName(name1);

	assert(product1.getName() == "Skirt");
}

void TestDomain::testSetPrice()
{
	char name1[7] = "Jeans";
	Product product1(name1, 60, 20);
	product1.setPrice(85);

	assert(product1.getPrice() ==85);
}

void TestDomain::testSetNumber()
{
	char name1[7] = "Jeans";
	Product product1(name1, 60, 20);
	product1.setNumber(50);

	assert(product1.getNumber() == 50);
}

void TestDomain::runTestDomain()
{
	void testConstructor();

	void testOperator();

	void testGetName();
	void testGetPrice();
	void testGetNumber();

	void testSetName();
	void testSetPrice();
	void testSetNumber();
}


