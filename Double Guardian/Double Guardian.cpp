#include<iostream>
using namespace std;
int main()
{
	for (int m = 95, n = 11; m % n > 0; m -= 3, n++)
		cout << m << "%" << n << " = " << m % n << endl;
	return 0;
}