#include <iostream>
using namespace std;
int main()
{
	int m;
	int n;
	cout << " enter an integer : " << endl;
	cin >>m;
	n = 100 + m;
	cout << " n is : " << n;
	m += 1;
	cout << " , m is : " << m << endl;
	m += 1;
	n = 100 + m;
	cout << " now n is : " << n << " , m is: " << m << endl;
	return 0;
}