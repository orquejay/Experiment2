#include <iostream>
#include <conio.h>
#include <iomanip>

using namespace std;

int main()
{
	char package;;
	float totalAmountDue, hours;

	cout << fixed << showpoint << setprecision(2);

	cout << "This program calculates a customer's monthly bill." << endl;

	cout << "\n\nEnter package purchased: ";
	cin >> package;

	switch (package)
	{
		case 'a':
		case 'A':
		{
			cout << "\nEnter hours used: ";
			cin >> hours;

			if (hours >= 0 && hours <= 10)
			{
				totalAmountDue = 995;
				cout << "\n\nTotal Amount Due: Php " << totalAmountDue;
			}
			if (hours > 10)
			{
				totalAmountDue = 995 + ((hours - 10) * 20);
				cout << "\n\nTotal Amount Due: Php " << totalAmountDue;
			}
		} break;

		case 'b':
		case 'B':
		{
			cout << "\nEnter hours used: ";
			cin >> hours;

			if (hours >= 0 && hours <= 20)
			{
				totalAmountDue = 1495;
				cout << "\n\nTotal Amount Due: Php " << totalAmountDue;
			}
			if (hours > 10)
			{
				totalAmountDue = 1495 + ((hours - 20) * 10);
				cout << "\n\nTotal Amount Due: Php " << totalAmountDue;
			}
		} break;

		case 'c':
		case 'C':
		{
			totalAmountDue = 1995;
			cout << "\n\nTotal Amount Due: Php " << totalAmountDue;
		} break;

		default:
		{
			cout << "\n\nInvalid Input.";
		} break;
	}

	_getch();
	return 0;
}