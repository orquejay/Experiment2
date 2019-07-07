#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
	bool program = false;
	do
	{	
		int n, sum, i;
		sum = 0;
		
		cout << "\nEnter a number: ";
		cin >> n;

		if (n == 0)
		{
			cout << "Thank You." << endl;
			break;
		}

		else
		{
			for (i = 1; i <= n; i++)
			{
				sum += i;
			}
			cout << "Sum of whole numbers from 1 to " << n << " is " << sum << endl;
			continue;
		}
	} while (!program);
	

	
	
	
	
	_getch();
	return 0;
}