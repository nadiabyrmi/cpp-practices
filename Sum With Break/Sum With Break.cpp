#include<iostream>
using namespace std;
int main()
{
	int n, i=1;
	long sum = 0;
	cout << "enter a positive integer to find the sum of numbers until the n: ";
	cin >> n;
	while (true)
	{
		if (i > n) break;
		sum += i++;
	}
	cout << " the sum of numbers is: " << sum << " ." << endl;
	return 0;
}