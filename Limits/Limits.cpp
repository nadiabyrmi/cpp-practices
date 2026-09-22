#include <iostream>
#include <limits>
using namespace std;
int main()
{
	//clearifies range of integer data type in c++ using <limits> header
	cout << "minimum short is " << SHRT_MIN << "\t        maximum short is  " << SHRT_MAX << endl;
	cout << "minimum int is   " << INT_MIN << "\tmaximum int is    " << INT_MAX << endl;
	cout << "minimum long is  " << LONG_MIN << "\tmaximum long is   " << LONG_MAX << endl;
	cout << "minimum unsigned short is " << 0 << "\t maximum unsigned short is " << USHRT_MAX << endl;
	cout << "minimum unsigned int is " << 0 << "\t maximum unsigned int is " << UINT_MAX << endl;
	cout << "minimum unsigned long is " << 0 << "\t maximum insigned long is " << ULONG_MAX << endl;
	return 0;
	
}