#include <iostream>
#include "Product.h"
#include <fstream>
#include <vector>

int main()
{
    std::vector<Product> products;
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
		//Product product = product(id, );
		products.push_back(product);
	}
	file.close();
}
