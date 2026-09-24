#include<iostream>
using namespace std;
int main()
{
	// the goal is to print n until it overflows
	int n = 1000;
	cout << " n = " << n << endl;
	n *= 1000;
	cout << " n = " << n << endl;
	n *= 1000;
	cout << " n = " << n << endl;
	n *= 1000;
	cout << " n = " << n << endl;
	return 0;
}