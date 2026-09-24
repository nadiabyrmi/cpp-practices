#include <iostream>
using namespace std;
int main()
{
	//printing x until it overflows
	float x = 1000.0;
	cout << " x = " << x << endl;
	x *= x;
	cout << " x = " << x << endl;
	x *= x;
	cout << " x = " << x << endl;
	x *= x;
	cout << " x = " << x << endl;
	x *= x;
	cout << " x = " << x << endl;
	return 0;
}