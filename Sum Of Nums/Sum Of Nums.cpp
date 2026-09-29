#include<iostream>
using namespace std;
int main()
{
	int n,sum=0,z=100000;
	cout << " enter a positive 6 digit number : ";
	cin >> n;
	if ((n / z) >= 1 && (n / z) <= 9)
	{
		switch (z)
		{
		case(100000): sum = n / 100000; n %= 100000;
		case (10000): sum += n / 10000; n %= 10000;
		case(1000): sum += n / 1000; n %= 1000;
		case(100): sum += n / 100; n %= 100;
		case(10): sum += n / 10; sum += n % 10; break;
		default: cout << " something went wrong !" << endl;
		}
	
		cout << " the sum of your number's digit's are: " << sum <<endl;
	}
	else cout << " your number is not a 6 digit num. " << endl;
	return 0;
}