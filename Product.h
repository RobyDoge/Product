#pragma once
#include <string>
#include <iostream>
#include "iPriceable.h"

class Product : public IPriceable
{
public:
	Product(uint32_t id, const std::string& name, float price);
	std::string GetName() const override;
	virtual float GetVATPrice() const=0;
	virtual uint16_t GetVAT()const = 0;
	friend std::ostream& operator<<(std::ostream& out, const Product& product);

protected:
	uint32_t m_id;
	std::string m_name;
	float m_price;

};

