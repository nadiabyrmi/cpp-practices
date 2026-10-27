#include<iostream>
using namespace std;
int main()
{
	int a, b;
	cout << " enter two digits to find the greatest common divisior: ";
	cin >> a >> b;
	if (a < b)
	{
		int temp = 0;
		temp = a;
		a = b;
		b = temp;
	}
	int x = 1;
	while (x!=0)
	{
		x = a % b;
		int temp = a;
		a = b;
		b = x;
	}
	cout << " the greatest common divisior is : (" << a << ",0)" << endl;
	return 0;
}