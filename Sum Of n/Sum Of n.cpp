#include<iostream>
using namespace std;
int main()
{
	// trying to find the sum of integers with loop
	int n, sum = 0, i = 1;
	cout << " enter an integer to calculate the sum of all numbers till the n! : " << endl;
	cin >> n;
	while (i <= n)
	{
		sum += i++;
	}
	cout << "the sum is : " << sum;
	return 0;
}
