#include "Product.h"

Product::Product(uint32_t id, const std::string& name, float price)
	:m_id(id),
	m_name(name),
	m_price(price)
{
}

std::string Product::GetName() const
{
	return m_name;
}

std::ostream& operator<<(std::ostream& out, const Product& product)
{
	return out << product.m_id << " "
		<< product.m_name << " "
		<< product.m_price << " "
		<< product.GetVAT() << std::endl;
}
