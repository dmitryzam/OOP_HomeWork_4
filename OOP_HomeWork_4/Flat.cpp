#include "Flat.hpp"

Flat::Flat() : Flat(0, 1, 1, 0.0) {}
Flat::Flat(int number, int rooms, size_t area, double price)
	: number(number), rooms(rooms), area(area), price(price){}
Flat::Flat(const Flat& oP)
	: number(oP.number), rooms(oP.rooms), area(oP.area), price(oP.price){}

bool Flat::operator==(const Flat oP) const{
	return area == oP.area;
}

const Flat& Flat::operator=(const Flat& oP) {
	this->number = oP.number;
	this->rooms = oP.rooms;
	this->area = oP.area;
	this->price = oP.price;
	return *this;
}

bool Flat::operator>(const Flat oP) const{
	return price > oP.price;
}

void Flat::SetFlatNum(int num){
	number = num;
}

void Flat::print() const{
	std::cout << "Квартира - #" << number << ", в которой " << rooms <<
		" комнаты, плащадью - " << area << " м2, стоимостью - " << price << " млн. руб.\n";
}



