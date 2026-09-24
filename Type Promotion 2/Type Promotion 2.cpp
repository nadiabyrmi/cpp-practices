#include <iostream>
using namespace std;
int main()
{
	// print promoted values of 65 from char to double
	char c = 'A';
	cout << " character c= " << c << endl;
	short k = c; //this is where type promotion works, promoting character in short variable
	cout << " short k= " << k << endl;
	int m = k;
	cout << " int m= " << m << endl;
	long n = m;
	cout << " long n= " << n << endl;
	float x = n;
	cout << " float x= " << n << endl;
	double y = x;
	cout << " double y= " << y << endl;
	return 0;
}