#include "Bus.h"

Bus::Bus()
{
	Car::SetBrand("");
	Car::SetNumber_of_cylinders(0);
	Car::SetPower(0);
}

Bus::Bus(int)
{
	SetNumber_of_passenger_seats(0);
}

int  Bus::GetNumber_of_passenger_seats() const { return Number_of_passenger_seats; }
void Bus::SetNumber_of_passenger_seats(int  value) { Number_of_passenger_seats = value; }

void Bus::Re_assignment_Number_of_passenger_seats()
{
	int n;
	cout << "re-enter Number_of_passenger_seats" << endl;
	cin >> n;
	Number_of_passenger_seats = n;
}

void Bus::Change_Number_of_passenger_seats()
{
	cout << "Change_Number_of_passenger_seats" << endl;
	cin >> Number_of_passenger_seats;
}

Bus::operator string() const
{
	stringstream ss;
	cout << "\nBus:" << endl;
	cout << "Brand = " << GetBrand() << endl;
	cout << "Number of cylinders = " << GetNumber_of_cylinders() << endl;
	cout << "Power = " << GetPower() << endl;
	cout << "Number of passengers seats = " << GetNumber_of_passenger_seats() << endl;
	return ss.str();
}

ostream& operator<<(ostream& out, const Bus& A)
{
	out << string(A);
	return out;
}

istream& operator>>(istream& in, Bus& A)
{
	string Brand;
	int Number_of_cylinders, Power;
	cout << "Enter a Brand "; in >> Brand;
	cout << "Enter a Number of passenger seats "; in >> Number_of_cylinders;
	cout << "Enter a Power "; in >> Power;
	cout << "Enter a Number of passenger seats "; in >> A.Number_of_passenger_seats;
	A.SetBrand(Brand);
	A.SetNumber_of_cylinders(Number_of_cylinders);
	A.SetPower(Power);
	return in;
}
