#include <iostream>
#include "Bus.h"

int main()
{
    Bus A;

    cout << "\nBus" << endl;
    cin >> A;
    cout << A;

    cout << "\nRe_assignment:" << endl;
    A.Re_assignment_Brand();
    A.Re_assignment_Number_of_passenger_seats();
    A.Re_assignment_Power();

   cout << A;

    cout << "\nChange:" << endl;
    A.Change_Brand();
    A.Change_Number_of_passenger_seats();
    A.Change_Power();

    cout << A;

    return 0;
}