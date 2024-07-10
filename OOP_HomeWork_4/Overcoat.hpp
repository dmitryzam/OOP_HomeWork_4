#pragma once
#include<iostream>
#include<string>

class Overcoad {	// класс Верхняя одежда
public:
	Overcoad();
	Overcoad(std::string name, std::string type_clothing, double price);
	Overcoad(const Overcoad& oP);
	void Price(double price_);
	// Перегрузка оператора равенства типов одежды:
	bool operator==(const Overcoad other)const;
	// Перегрузка оператора присваивания:
	void operator=(const Overcoad& oP);
	// Перегрузка операторов сравнения:
	bool operator>(const Overcoad& oP)const;
	void Print()const;
private:
	std::string name;
	std::string type_clothing;
	double price;
};