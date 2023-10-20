#include <iostream>
#include "iPriceable.h"
#include "Product.h"
#include "PerishableProduct.h"
#include "NonPerishableProduct.h"
#include <fstream>
#include <vector>
#include <regex>

int main()
{
	std::vector<IPriceable*> products;
	std::ifstream f("product.prodb");
	uint32_t id;
	uint16_t vat;
	std::string name;
	float price;
	std::string typeOrDate;

	//for(std::ifstream f("product.prodb"); !f.eof();)
	while (!f.eof())
	{
		f >> id >> name >> price >> vat >> typeOrDate;

		if (std::regex_match(typeOrDate, std::regex(R"(\d\d\d\d-\d\d-\d\d)")))
		{
			IPriceable* product;
			products.emplace_back(new PerishableProduct(id, name, price, typeOrDate));
		}
		else
		{
			ProductType productType = CovertStringToProductType(typeOrDate);
			IPriceable* product;
			products.emplace_back(new NonPerishableProduct(id, name, price, productType));
		}
	}
	f.close();
	std::sort(products.begin(), products.end(),
		[](IPriceable* first, IPriceable* second) {return first->GetVATPrice() < second->GetVATPrice(); });
	for (auto product : products)
	{
		Product* productC = dynamic_cast<Product*>(product);
		std::cout << *productC;
	}

}
#include <iostream>
#include "iPriceable.h"
#include "Product.h"
#include "PerishableProduct.h"
#include "NonPerishableProduct.h"
#include <fstream>
#include <vector>
#include <regex>

int main()
{
	std::vector<IPriceable*> products;
	std::ifstream f("product.prodb");
	uint32_t id;
	uint16_t vat;
	std::string name;
	float price;
	std::string typeOrDate;

	//for(std::ifstream f("product.prodb"); !f.eof();)
	while (!f.eof())
	{
		f >> id >> name >> price >> vat >> typeOrDate;

		if (std::regex_match(typeOrDate, std::regex(R"(\d\d\d\d-\d\d-\d\d)")))
		{
			IPriceable* product;
			products.emplace_back(new PerishableProduct(id, name, price, typeOrDate));
		}
		else
		{
			ProductType productType = CovertStringToProductType(typeOrDate);
			IPriceable* product;
			products.emplace_back(new NonPerishableProduct(id, name, price, productType));
		}
	}
	f.close();
	std::sort(products.begin(), products.end(),
		[](IPriceable* first, IPriceable* second) {return first->GetVATPrice() < second->GetVATPrice(); });
	for (auto product : products)
	{
		Product* productC = dynamic_cast<Product*>(product);
		std::cout << *productC;
	}

}
