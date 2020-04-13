#pragma once
#include "Domain.h"

class TestDomain
{
private:
	Product product;

	void testConstructor();
	void testOperator();

	void testGetName();
	void testGetPrice();
	void testGetNumber();

	void testSetName();
	void testSetPrice();
	void testSetNumber();
public:
	void runTestDomain();
};

