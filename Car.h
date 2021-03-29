#pragma once
#include <iostream>
#include <sstream>
#include <string>

using namespace std;
class Car
{
private:
	string Brand;
	int Number_of_cylinders;
	int  Power;

public:
	void SetBrand(string Brand);
	void SetNumber_of_cylinders(int  Number_of_cylinders);
	void SetPower(int  Power);

	string GetBrand() const;
	int  GetNumber_of_cylinders() const;
	int  GetPower() const;

	Car operator ++ (int);

	void  Re_assignment_Power();
	void  Change_Power();
	void  Re_assignment_Brand();
	void  Change_Brand();

	Car();
};

