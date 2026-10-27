#include<iostream>
using namespace std;
int main()
{
	int a, b;
	cout << " enter first number: ";
	cin >> a;
	cout << " enter second number: ";
	cin >> b;
	if (a < b)
	{
		int temp;
		temp = b;
		b = a;
		a = temp;
	}
	int i = 0;
	int x = a, y = b;
	while(x>=y)
	{
		x = x - y;
		i++;
	}
	cout << " a/b : " << i << " a%b : " << x << endl;
	return 0;
}
