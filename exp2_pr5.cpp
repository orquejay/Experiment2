#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
	int n, fibo, first, second, temp;

	first = 0;
	second = 1;

	cout << "The first 20 numbers in Fibonacci are: \n";

	for (fibo = 0; fibo < 21; fibo++)
	{
		if (fibo <= 1)
		{
			temp = fibo;
		}
		else
		{
			temp = first + second;
			first = second;
			second = temp;
		}

		cout << temp << ", ";
	}

		_getch();
		return 0;
}
