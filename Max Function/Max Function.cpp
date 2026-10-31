#include<iostream>
using namespace std;
double Max(double x, double y)
{
	double z;
	z = (x > y ? x : y);
	return z;
}
int main()
{
	double m, n;
	cout << " enter two number to find the maximum of them: ";
	cin >> n >> m;
	cout << " maximum amount between " << m << " and " << n << " is: " << max(m, n) << endl;
	return 0;
}
