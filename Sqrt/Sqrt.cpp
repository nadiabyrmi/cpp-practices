#include<iostream>
using namespace std;
int main()
{
	int x,i=0;
	cout << " enter a number: ";
	cin >> x;
	while (i*i <= x)
	{
		i++;
	}
	cout << " root of entered number is: " << i-1 << endl;
	return 0;
}