#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
	int number;

	cout << "\nCounting..." << endl;

	for (number = 1; number <= 30; number++)
	{
		cout << number << ", ";

		if (number > 9 && number < 31)
		{
			number++;
		}
	}

	_getch();
	return 0;
}