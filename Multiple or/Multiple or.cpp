#include<iostream>
using namespace std;
int main()
{
	int a, b;
	cout << " enter two integer numbers: " << endl;
	cin >> a >> b;
	cout << " a is : " << a << " , b is " << b << endl;
	cout << (a!=0 && b % a == 0 ? " b is a's multiple " : " ") << endl;
	cout << (b!=0 && a % b == 0 ? " a is b's multiple" : " ") << endl;
	return 0;
}