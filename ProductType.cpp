#include "ProductType.h"

ProductType CovertStringToProductType(const std::string& type)
{
	if (type == "PersonalHygiene")
		return ProductType::PersonalHygiene;
	if (type == "SmallAppliences")
		return ProductType::SmallAppliences;
	if (type == "Clothing")
		return ProductType::Clothing;
	//throw("ProductType Invalid");
	throw std::exception("ProductType Invalid");
}
