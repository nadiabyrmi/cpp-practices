#include<iostream>
using namespace std;    // every inch is 2.52 cm
int main()
{
	double x;
	cout << "enter the lenght in inch to convert in cm: " << endl;
	cin >> x;
	cout << x << " inch";
	x *= 2.52;
	cout << " is equal to :" << x << endl;
	return 0;
}