#pragma once
#include<iostream>

class Flat {
public:
	Flat();
	Flat(int nimber, int rooms, size_t area, double price);
	Flat(const Flat& oP);
	// Перегрузка оператора сравнения площадей в квартирах:
	bool operator==(const Flat oP)const;
	// Перегрузка оператора присваивания:
	const Flat& operator=(const Flat& oP);
	// Перегрузка оператора сравнения >:
	bool operator>(const Flat oP)const;
	void SetFlatNum(int num);
	void print()const;


private:
	int number;
	int rooms;
	size_t area;
	double price;
};
