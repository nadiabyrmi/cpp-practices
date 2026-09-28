#include <iostream>
using namespace std;
int main()
{ 
	int a, b, c;
	cout << "enter three integers to find the middle number : " << endl;
	cin >> a >> b >> c;
	if (a == b || b == c|| a==c)
	{
		cout << " some numbers you entered are equal ." << endl;
	}
	else
	{	if (b> a && b < c||b>c && b<a)
		{
			cout << " the mid number is : " << b<< endl;
		}
		if (c> a && c< b|| c>b && c<a)
		{
		cout << " the mid number is : " << c<< endl;
		}
		if (a> b && a< c|| a>c && a<b)
		{
			cout << " the mid number is : " << a<< endl;
		}
	}
	return 0;
} 
