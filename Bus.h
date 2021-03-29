#pragma once
#include "Car.h"
class Bus : public Car
{
private:
	double Number_of_passenger_seats;
public:
	Bus();
	Bus(int);
	int GetNumber_of_passenger_seats() const;
	void SetNumber_of_passenger_seats(int value);

	void  Re_assignment_Number_of_passenger_seats();
	void  Change_Number_of_passenger_seats();

	friend ostream& operator << (ostream& out, const Bus& A);
	friend istream& operator >> (istream& in, Bus& A);
	operator string() const;
};

