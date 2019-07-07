#include <iostream>
#include <conio.h>
#include <iomanip>
#include <cmath>

using namespace std;

int main()
{
	int x, y;
	double V;
	const float z = 2.5;
	cout << fixed << showpoint << setprecision(2);

	cout << "This program calculates the value of V." << endl;

	cout << "\nEnter the value of x: ";
	cin >> x;
	cout << "\nEnter the value of y: ";
	cin >> y;

	switch (x)
	{
		case 1:
		if (y >= 1 && y <= 5)
		{
			V = x * y * z;
			cout << "\nThe value of V is: " << V;
		}
		if (y >= 5)
		{
			V = x + y / z;
			cout << "\nThe value of V is: " << V;
		}break;

		case 2:
		if (y <= 5)
		{
			V = abs(x - y) / z;
			cout << "\nThe value of V is: " << V;
		}
		if (y > 5)
		{
			V = x - sqrt(y + z);
			cout << "\nThe value of V is: " << V;
		}break;

		default:
		{
			V = x + y + z;
			cout << "\nThe value of V is: " << V;
		}break;
	}

	_getch();
	return 0;
}