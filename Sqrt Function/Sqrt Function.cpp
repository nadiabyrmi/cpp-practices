#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;
int main()
{
	int x;
	double y;
	cout << " enter a positive integer to find it's root : ";
	cin >> x;
	y = sqrt(x);
	cout << " root of number " << x << " is " <<fixed<<setprecision(8)<< y << endl;
	return 0;
}