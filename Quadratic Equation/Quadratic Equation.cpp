#include <iostream>
#include<cmath>
using namespace std;
int main()
{
	double a, b, c, x1, x2, delta;
	cout << " enter the coefficients of the equation to find the roots! " << endl;
	cout << " a = "; cin >> a;
	cout << " b = "; cin >> b;
	cout << " c = "; cin >> c;
	delta = ((b * b) - (4 * a * c));
	if (a==0) cout << " root is x = " << -c / b << endl;
	else if (delta < 0) cout << " delta is negative. unable to process. " << endl;
	else
	{
		x1 = (-b + sqrt(delta)) /( 2 * a);
		x2 = (-b - sqrt(delta)) / (2 * a);
		cout << " the equation's roots are : " << x1 << " and " << x2 << endl;
		cout << " check : " << endl;
		cout << (x1 * x1 * a) + (b * x1) + (c) << " = " << 0<< " , ";
		cout << (x2 * x2 * a) + (b * x2) + (c) << " = " << 0;
	}
	return 0;
}