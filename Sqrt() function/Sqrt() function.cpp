#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	float a, b, c;
	cout << "Enter The Coeficients Of a Quadratic Equation:\n";
	cout << "\ta = ";
	cin >> a;
	cout << "\tb = ";
	cin >> b;
	cout << "\tc = ";
	cin >> c;
	cout << "the equation is: " << a << "x*x+" << b << "x+" << c << "=0\n";
	float delta = b * b - 4 * a * c;
	float x1 = ( - b + sqrt(delta))/ (2 * a);
	float x2 = (-b - sqrt(delta)) / (2 * a);
	cout << "the solution's are: \n" << "\tx1= " << x1 << "\tx2= " << x2 << endl;
	cout << "check:\n";
	cout << "\ta * x1 * x1 + b * x1 + c=" << a * x1 * x1 + b * x1 + c << endl;
	cout << "\ta * x2 * x2 + b * x2 + c=" << a * x2 * x2 + b * x2 + c << endl;
	return 0;
}

