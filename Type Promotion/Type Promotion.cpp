#include <iostream>
#include <iomanip>  /*for printing floating point numbers in desired numbers*/
using namespace std;
int main()
{
	//trying to test type promotion and find out its differnces with type casting
	int a = 20, n;
	double PI = 3.1415161718191020304050;
	PI += a;
	cout << " number a is: " << a << " ,number PI is: " << fixed << setprecision(22) << PI<<'\n';
	//now im gonna try type casting again
	n = int(PI);
	cout << "after type casting double PI, variable n will be: " << n << endl;

}