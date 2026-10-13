#include<iostream>
using namespace std;
int main()
{
	int n;
	cout << " enter a positive integer to find out if it's a prime number or not: ";
	cin >> n;
	while (n != 0)
	{
		int prime = 1;
		if (n < 2) cout << n << " IS NOT PRIME ." << endl;
		else if (n == 2 || n == 3) cout << n << " IS PRIME ." << endl;
		else if (n % 2 == 0) cout << n << " IS NOT PRIME ." << endl;
		else if (n == 5) cout << n << " IS PRIME ." << endl;
		else
		{
			for (int p = 3; p <= (n / 2); p += 2) // division on odd numbers only
			{
				if (n % p == 0)
				{
					prime *= 0;
				}
				else if (n % p != 0)
				{
					prime *= 1;
				}
			}
			if (prime == true) cout << n << " IS PRIME . " << endl;
			else cout << n << " IS NOT PRIME" << endl;
		}
		cout << " enter a number or zero(0) if you want to quit :";
		cin >> n;
	}
	return 0;
}