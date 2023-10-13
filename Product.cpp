#include "Product.h"

Product::Product(uint32_t id, uint16_t vat, const std::string& name, float price, ProductType type)
	:m_id(id),
	m_vat(vat),
	m_name(name),
	m_price(price),
	m_type(type)
{
}

Product::Product(uint32_t id, uint16_t vat, const std::string& name, float price, const std::string& date)
	:m_id(id),
	m_vat(vat),
	m_name(name),
	m_price(price),
	m_date(date)
{
}
