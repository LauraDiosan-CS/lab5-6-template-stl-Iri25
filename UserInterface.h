#pragma once
#include "Service.h"
using namespace std;

class UserInterface
{
private:
	Service service;
	
	void readElem();
	void showAll();
	void updateElem();
	void delElem();

	void buyElem();
	void returnElem();

	void showMenu();
public:
	UserInterface();
	UserInterface(Service& service);
	~UserInterface();

	void initService();

	void run();
};

