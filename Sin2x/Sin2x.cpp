#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;
int main()
{
	//trying to proove sin2x=2sinxcosx
	for (float x =0; x<6; x += 0.1)
	{
		cout << "x is = " <<fixed<<setprecision(8)<<x<< "\t\tSin2x = " << sin(2 * x) << "\t\t2sinxcosx = " << 2 * sin(x) * cos(x) << endl;
	}
	return 0;
}