#include <iostream>
using namespace std;
int main()
{
  // simulating round off error
	double x = 1000 / 3.0; // type promoting 1000 to  double
	cout << " x = " << x << endl; // x=333.3333333...
	double y = x - 333.0;
	cout << " y = " << y << endl; // y=0.3333333...
	double z = 3 * y - 1.0; //type promoting 3 to double: 3.0
	cout << " z = " << z << endl; // z will not be equal to 0
	if (z == 0) cout << "z==0.\n";
	else cout << "z does not equal 0.\n";
	return 0;
}

