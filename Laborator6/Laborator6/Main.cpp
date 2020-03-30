#include "Domain.h"
#include "Repository.h"
#include "Tests.h"
#include <iostream>
#include <set>

using namespace std;

void show_menu()
{
	cout << "---MENIU---" << "\n";
	cout << endl;
	cout << "0. Inchidere" << "\n";
	cout << "1. Citire produse" << "\n";
	cout << "2. Afisare produse" << "\n";
	cout << "\n";
}
/*
void reading(Repository& repository)
{
	//Store store;
	//cout << "Dati produsul:" << endl;
	
	cout << "Dati numele: ";
	char* name = new char[10];
	cin>> name;
	cout << "Dati pretul: ";
	int price;
	cin >> price;
	cout << "Dati numarul de exemplare disponibile:";
	int number;
	cin >> number;

	//cin >> store;
	Store store(name, price, number);
	repository.addElem(store);
	cout << endl << "Produsul a fost adaugat cu succes!" << endl;
}

void display(Repository& repository)
{
	set<Store> store = repository.getAll();
	for (Store stores : store)
		cout << stores;
}

int run()
{
	int op = -1;
	do
	{
		show_menu();
		int op;
		cout << "Dati optiunea: ";
		cin >> op;
		switch (op)
		{
		case 0:
		{
			exit(1);
			break;
		}
		case 1:
		{
			Repository repository;
			reading(repository);
			cout << "\n";
			break;
		}
		case 2:
		{
			Repository repository;
			display(repository);
			cout << "\n";
			break;
		}
		default:
		{
			cout << "Comanda imposibila!";
			cout << "\n";
		}
		}
	} while (op != 0);
}
*/
int main()
{
	TestRepository test;
	test.runTests();

	//run();
	
	return 0;
}