#pragma once
#include <string>
#include <cstdint>
enum class ProductType:uint16_t
{
	PersonalHygiene, 
	SmallAppliences, 
	Clothing

};

ProductType CovertStringToProductType(const std::string& type);

