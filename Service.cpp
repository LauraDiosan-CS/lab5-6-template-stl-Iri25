#include"Service.h"
#include <algorithm>
#include <iostream>
using namespace std;

Service::Service()
{

}

Service::Service(const RepositoryFile<Product>& repository)
{
	this->repository = repository;
}

Service::~Service()
{

}

void Service::setRepository(const RepositoryFile<Product>& repository)
{
	this->repository = repository;
}

void Service::addElem(const Product& product)
{
	repository.addElem(product);
}

void Service::updateElem(const Product& product1, const Product& product2)
{
	repository.updateElem(product1, product2);
}

void Service::delElem(const Product& product)
{
	return repository.delElem(product);
}

set<Product>& Service::getAll()
{
	return repository.getAll();
}

int Service::getSize()
{
	return repository.getSize();
}

void Service::buyElem(int& n, Product products[], int& lenght, Product results[], int ok_product[], int ok_name[], int ok_number[])
{
	int i, j;
	for (i = 0; i < n; i++)
	{
		Product p = products[i];
		int price = 0;
		int ok = 0;
		for (j = 0; j < getSize(); j++)
		{
			Product crtProduct = repository.elemAtPosition(j);
			if ((strcmp(crtProduct.getName(), p.getName()) == 0) && (crtProduct.getNumber() >= p.getNumber()))
			{
				ok_product[i] = 1;
				ok_name[i] = 1;
				ok_number[i] = 1;
				price = crtProduct.getPrice();
				ok = 1;
				crtProduct.setNumber(crtProduct.getNumber() - p.getNumber());
				Product newProduct(crtProduct.getName(), crtProduct.getPrice(), crtProduct.getNumber());
				updateElem(crtProduct, newProduct);
				break;
			}

			if ((strcmp(crtProduct.getName(), p.getName()) == 0) && (crtProduct.getNumber() < p.getNumber()))
			{
				ok_product[i] = 1;
				ok_name[i] = 1;
				ok_number[i] = 0;
				price = 0;
				ok = -1;
				break;
			}
		}
		if (ok == 1)
		{
			Product yesProduct(p.getName(), price, p.getNumber());
			results[lenght++] = yesProduct;
		}

		if(ok == -1)
		{
			Product notProduct(p.getName(), 0, p.getNumber());
			results[lenght++] = notProduct;
		}

		if (ok == 0)
		{
			Product notProduct(p.getName(), 0, p.getNumber());
			results[lenght++] = notProduct;
			ok_product[i] = 0;
			ok_name[i]= 0;
			ok_number[i] = 0;
		}
	}
}

void Service::returnElem(int& n, Product products[], int& lenght, Product results[], int ok_product[], int ok_name[])
{
	int i, j;
	for (i = 0; i < n; i++)
	{
		Product curentProduct = products[i];
		int price = 0;
		bool ok = 0;
		for (j = 0; j < getSize(); j++)
		{
			Product crtProduct = repository.elemAtPosition(j);

			if ((strcmp(crtProduct.getName(), curentProduct.getName()) == 0))
			{
				ok_product[i] = 1;
				ok_name[i] = 1;
				price = crtProduct.getPrice();
				ok = 1;
				crtProduct.setNumber(crtProduct.getNumber() + curentProduct.getNumber());
				Product newProduct(crtProduct.getName(), crtProduct.getPrice(), crtProduct.getNumber());
				updateElem(crtProduct, newProduct);
				break;
			}
		}

		if (ok == 1)
		{

			Product yesProduct(curentProduct.getName(), price, curentProduct.getNumber());
			results[lenght++] = yesProduct;
		}

		if (ok == 0)
		{
			Product notProduct(curentProduct.getName(), 0, curentProduct.getNumber());
			results[lenght++] = notProduct;
			ok_product[i] = 0;
			ok_name[i] = 0;
		}
	}
}