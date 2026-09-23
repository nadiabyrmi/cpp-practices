#include<iostream>
using namespace std;
int main()
{
	//showing the difference between ++m & m++
	int m, n;
	m = 10;
	n = ++m;
	// expecting m=11 & n=11
	cout << "m is " << m << " ,n is " << n << endl;
	m = 10;
	n = m++;
	// expecting m=11 & n=10
	cout << "m is " << m << " ,n is " << n << endl;
}