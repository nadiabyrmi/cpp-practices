#include<iostream>
using namespace std;
int main()
{
	long long a,reverse=0;
	cout << " enter your number to find out what it's reverse is: ";
	cin >> a;
	int digit = 0;
	for (; a>0 ;)
	{
		digit = a % 10;
		a = a / 10;
		reverse = reverse*10+ digit; //because reverse in first cycle is 0, so the first reversed number will have 0 value in decimal base
	}
	cout << "reversed number is: " << reverse << endl;
	return 0;
}