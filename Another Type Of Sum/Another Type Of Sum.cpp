#include <iostream>
using namespace std;
int main()
{
	//just playing with control variable to get more mastery on for iteration.
	int n;
	long sum = 0;
	cout << " enter a number : ";
	cin >> n;
	for (int i = 1; i < (n / 2); i++)
	{
		sum += i;
	}
	for (int i = (n / 2) ; i <= n; i++)
	{
		sum += i;
	}
	cout << " the sum of " << n << " integers is: " << sum << endl;
	return 0;
}