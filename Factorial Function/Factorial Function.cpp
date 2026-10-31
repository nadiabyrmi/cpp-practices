#include<iostream>
using namespace std;
int factorial(int);
int main()
{
	int x;
	cout << " enter any number to find the factoriel's up untill it: ";
	cin >> x;
	for (int i=0; i <= x; i++)
	{
		cout << factorial(i) << " . ";
	}
	return 0;
}

int factorial(int n)
{
	int f=1;
	if (n == 0) return 0;
	else if (n == 1) return 1;
	else if (n < 0) return 0;
	else
	{
		while (n > 1)
		{
			f *= n--;
		}
	}
	return f;
}