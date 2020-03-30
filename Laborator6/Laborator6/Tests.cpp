#include "Tests.h"
#include "Domain.h"
#include <cassert>
#include <set>

using namespace std;

TestRepository::TestRepository()
{
	assert(repository.getSize() == 0);
}

TestRepository::~TestRepository()
{

}

void TestRepository::testAddElem()
{
	repository.addElem(Store("Ciocolata", 25, 4));

	assert(repository.getSize()== 1);
}

/*
void TestRepository::testFindElem()
{
	assert(repository.findElem(Store("Lapte", 6, 1)) == -1);
}

void TestRepository::testDelElem()
{
	repository.delElem(Store("Ciocolata", 25, 4));

	assert(repository.getSize()== 0);
}

void TestRepository::testUpdateElem()
{
	repository.addElem(Store("Ciocolata", 25, 4));
	repository.updateElem(Store("Ciocolata", 25, 4), "Lapte", 6, 1);

	assert(repository.findElem(Store("Lapte", 6, 1)) == 1);
}

void TestRepository::testElemAtPosition()
{
	assert(repository.elemAtPosition(1) == Store("Lapte", 6, 1));
}
*/

void TestRepository::testGetAll()
{
	set<Store> result = repository.getAll();

	assert(result.size() == 1);
}

void TestRepository::testSize()
{
	assert(repository.getSize()== 1);
}


void TestRepository::runTests()
{
	//void testAddElem();
	//void testFindElem();
	//void testUpdateElem();
	//void testDelElem();
	void testGetAll();
	//void testElemAtPosition();
	void testSize();
}