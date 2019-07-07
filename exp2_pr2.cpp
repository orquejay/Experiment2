#include <iostream>
#include <conio.h>
#include <iomanip>

using namespace std;

int main()
{
	float previous, recent, gallonsUsed, gallons, waterBill, unpaidBalance;
	cout << fixed << showpoint << setprecision(2);

	cout << "This program computes a customer's water bill." << endl;

	cout << "\nEnter last month's gallon meter reading: ";
	cin >> previous;
	cout << "\nEnter this month's gallon meter reading: ";
	cin >> recent;
	cout << "\nEnter unpaid balance: Php ";
	cin >> unpaidBalance;

	gallonsUsed = (recent - previous);
	gallons = gallonsUsed * 1.10;
	waterBill = gallons + 35;

	if (unpaidBalance > 0)
	{
		waterBill = gallons + 35 + 20;
		cout << "\nWater Bill : Php " << waterBill;
	}
	else
	{
		cout << "\nWater Bill : Php " << waterBill;
	}

	_getch();
	return 0;
}