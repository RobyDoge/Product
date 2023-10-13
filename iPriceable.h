#pragma once
#include <string>

class iPriceable
{
public:
	virtual std::string GetName() const = 0;
	virtual float GetVATPrice() const = 0;
};