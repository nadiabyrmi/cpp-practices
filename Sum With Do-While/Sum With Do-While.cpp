#include<iostream>
using namespace std;
int main()
{
	int n, i=1;
	long sum=0;
	cout << " enter a number to calculate sum of numbers before it: ";
	cin >> n;
	do 
	{
		sum += i++;
	}
	while (i <= n);
	{
		cout << " sum of numbers is :" << sum << endl;
	}
	return 0;
}