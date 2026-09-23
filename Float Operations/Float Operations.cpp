#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	//testing how operators work on float variables
	float a = 12.24, b = 32.987;
	cout << " a= " << a << " b= " << b << "\n";
	cout << "a+b= " << a + b << "\t a-b= " << a - b << endl;
	cout << "a*b= " << a * b << "\t a/b= " << a / b << endl;
	cout << "\ta%b= " << fmodf(a, b) << endl; // in floating point variables % won't work, instead we're using fmodf(a,b) from cmath header.
	return 0;
}