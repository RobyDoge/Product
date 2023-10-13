#include "PerishableProduct.h"

PerishableProduct::PerishableProduct(uint32_t id, const std::string& name, float price, const std::string& date)
	:Product(id,name,price),
	m_date(date)
{
}

float PerishableProduct::GetVATPrice() const
{
	return m_price + m_price * GetVAT() / 100;
}

uint16_t PerishableProduct::GetVAT() const
{
	return PerishableProduct::kVAT;
}
