#include<iostream>
using namespace std;
int main()
{
	long long a;
	long long sum=0;
	cout << " enter your number to reverse it: ";
	cin >> a;
	//first we're trying to figure out how many numbers it is
	int i = 0;
	int n = 1;
	for (; n<=a ;i++)
	{
		n *=10;
	}
	cout << " number of digits is " << i << " decimal amount is: " << n / 10 << endl;
    int division = n / 10;
	long long b = 1;
	for (int j=1;;j*=10)
	{
		b=a/division;
		a=a%division;
		sum= sum+ (b * j);
		if (division / 10 == 1)
		{
			sum= sum + (a * (j*10));
			break;
		}
		else division/= 10;
	}
	cout << " reversed number is : " << sum << endl;
	return 0;
}