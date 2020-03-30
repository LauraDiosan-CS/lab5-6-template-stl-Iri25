#pragma once
#include "Domain.h"
#include <set>
using namespace std;

class Repository
{
private:
	set<Store> stores;
	//const char* fis;
public:
	Repository();
	~Repository();

	void addElem(Store);
	int findElem(Store);
	void updateElem(Store, const char*, int, int);
	int delElem(Store);
	Store elemAtPosition(int);
	set<Store> getAll();
	int getSize();



};



