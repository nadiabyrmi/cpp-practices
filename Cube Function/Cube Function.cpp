#include<iostream>
using namespace std;

double cube(double x)
{
	if (x == 0)
	{
		return 0;
	}
	return x * x * x;
	
}
int main()
{
	double n;
	cout << " enter any number to find it's cube: ";
	cin >> n;
	while (true)
	{
		char stop;
		cout << " the cube of " << n << " is " << cube(n) << endl;
		cout << "do you want to quit?(y/n) ";
		cin >> stop;
		if (stop == 'y')
		{
			cout << " good bye." << endl;
			break;
		}
		else cout << " then enter another number to continue: ";
		cin >> n;
	}
	return 0;
}