#include<iostream>
using namespace std;
int main()
{
	int limit;
	long factorial = 1;
	cout << " please enter an integer to find all factorial's before it: ";
	cin >> limit;
	for (int i = 1; i <= limit; i++)
	{
		factorial *= i;
	}
	cout << " the factorial of numbers before " << limit << " is : " << factorial;
	return 0;
}