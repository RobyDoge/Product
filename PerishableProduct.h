#pragma once
#include "Product.h"
class PerishableProduct : public Product
{
public:
	PerishableProduct(uint32_t id, const std::string& name, float price, const std::string& date);
	uint16_t GetVAT()const override;
	float GetVATPrice() const;

private:
	static const uint16_t kVAT = 9;
	std::string m_date;
};

