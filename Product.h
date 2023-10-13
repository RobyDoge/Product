#pragma once
#include <string>
#include "iPriceable.h"

class Product : public iPriceable
{
public:
	Product(uint32_t id, const std::string& name, float price);
	std::string GetName() const override;
	virtual float GetVATPrice() const=0;
	virtual uint16_t GetVAT()const = 0;

protected:
	uint32_t m_id;
	std::string m_name;
	float m_price;

};

