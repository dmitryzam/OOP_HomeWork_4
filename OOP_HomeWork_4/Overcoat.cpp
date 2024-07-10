#include "Overcoat.hpp"

Overcoad::Overcoad() : Overcoad("no_name", "no_clothes", 0.0){}
Overcoad::Overcoad(std::string name, std::string type_clothing, double price)
	: name(name), type_clothing(type_clothing), price(price){}
Overcoad::Overcoad(const Overcoad& oP)
	: name(oP.name), type_clothing(oP.type_clothing), price(oP.price){}

void Overcoad::Price(double price_){
	price = price_;
}

bool Overcoad::operator==(const Overcoad other) const{
	return name == other.name;
}

void Overcoad::operator=(const Overcoad& oP){
	name = oP.name;
	type_clothing = oP.type_clothing;
	price = oP.price;
}

bool Overcoad::operator>(const Overcoad& oP) const{
	return price > oP.price;
}

void Overcoad::Print() const{
	std::cout << "Верхняя одежда - " << type_clothing << ", фирмы " << name <<
		", стоимостью " << price << " руб.\n";
}


