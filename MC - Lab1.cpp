#include <iostream>
#include "iPriceable.h"
#include "Product.h"
#include "PerishableProduct.h"
#include <fstream>
#include <vector>

int main()
{
    std::vector<iPriceable*> products;
	std::ifstream f("product.prodb");
	uint32_t id;
	uint16_t vat;
	std::string name;
	float price;
	std::string typeOrDate;

	//for(std::ifstream f("product.prodb"); !f.eof();) e corect si asa , chiar si mai bine

	while (!f.eof())
	{
		f >> id >> name >> price >> vat >> typeOrDate;
		iPriceable *product = new PerishableProduct(id,name,price,typeOrDate);
		products.push_back(product);
	}
	f.close();
}
