#include "Repository.h"
#include <string>
using namespace std;


Repository::Repository()
{

}

Repository::~Repository()
{

}

void Repository::addElem(Store store)
{
	stores.insert(store);
}

/*
int Repository::findElem(Store store)
{
	set<Store>::iterator it;
	it = find(stores.begin(), stores.end(), store);
	if (it != stores.end())
	{
		return distance(stores.begin(), it);
	}
	return -1;
}

void Repository::updateElem(Store store, const char* name, int price, int number)
{
	set<Store>::iterator it;
	it = find(stores.begin(), stores.end(), store);
	if (it != stores.end())
	{
		(*it).setName(name);
		(*it).setPrice(price);
		(*it).setNumber(number);
	}

}

int Repository::delElem(Store store)
{
	set<Store>::iterator it;
	it = find(stores.begin(), stores.end(), store);
	if (it != stores.end())
	{
		stores.erase(it);
		return 0;
	}
	return -1;

}

Store Repository::elemAtPosition(int i)
{
	if (i < 0 or i >= stores.size())
		return Store("  ", -1, -1);
	return stores[i];
}
*/

set<Store> Repository::getAll()
{
	return stores;
}

int Repository::getSize()
{
	return stores.size();
}



