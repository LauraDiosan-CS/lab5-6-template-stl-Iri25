#pragma once
#include "Repository.h"

class TestRepository
{
private:
	Repository repository;

	void testAddElem();
	void testFindElem();
	void testUpdateElem();
	void testDelElem();
	void testGetAll();
	void testElemAtPosition();
	void testSize();
public:
	TestRepository();
	~TestRepository();
	
	void runTests();

};

