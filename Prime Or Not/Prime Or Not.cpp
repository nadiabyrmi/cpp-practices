#include<iostream>
using namespace std;
int main()
{
	int n;
	bool prime = true;
	cout << " enter a positive integer to find out if it's a prime number or not: ";
	cin >> n;
	while (n != 0)
	{
		prime = true;
		if (n == 0 || n == 1) cout << n << " is not prime . " << endl;
		else if (n == 2) cout << n << " is prime ." << endl;
		else if (n % 2 == 0) cout << n << " is not prime ." << endl;
		else
		{
			for (int d = 3; d <= (n / 2); d += 2)
			{
				if (n % d == 0)
				{
					prime = false;
					break;
				}
				else prime = true;
			}
			if (prime == false) cout << n << " is not prime ." << endl;
			else if (prime == true) cout << n << " is prime ." << endl;

		}
		cout << " enter an integer to find out if it's a prime number or enter zero(0) to exit the program: ";
		cin >> n;
	}
	return 0;
}