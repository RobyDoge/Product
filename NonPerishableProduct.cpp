#include "NonPerishableProduct.h"

NonPerishableProduct::NonPerishableProduct(uint32_t id, const std::string& name, float price, ProductType type)
	:Product(id, name, price),
	m_type(type)
{
}

uint16_t NonPerishableProduct::GetVAT() const
{
	return NonPerishableProduct::kVAT;
}

float NonPerishableProduct::GetVATPrice() const
{
	return m_price+m_price*GetVAT()/100;
}
