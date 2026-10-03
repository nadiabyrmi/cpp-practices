#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int x;
	cout << " please enter an positive integer to find it's root: ";
	cin >> x;
	while (x != 0 && x>0)
	{
		cout << " your number is: " << x << " , and it's square root is: " << sqrt(x) << endl;
		cout << " enter another number if you want (or zero to end the program) : " << endl;
		cin >> x;
	}
	if (x < 0)?
	{
		cout << " square root of a negative number can't be calculated, try again." << endl;
	}
	else if (x == 0)
	{
		cout << " Good Bye " << endl;
	}
	return 0;
}