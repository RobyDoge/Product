#pragma once
#include <string>
#include "ProductType.h"
class Product
{
public:
	Product(uint32_t id, uint16_t vat, const std::string& name, float price, ProductType type);
	Product(uint32_t id, uint16_t vat, const std::string& name, float price, const std::string& date);

private:
	uint32_t m_id;
	uint16_t m_vat;
	std::string m_name;
	float m_price;
	
	std::string m_date;
	ProductType m_type;


};

