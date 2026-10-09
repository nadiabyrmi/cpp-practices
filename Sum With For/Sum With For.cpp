#include<iostream>
using namespace std;
int main()
{
	//mikham jam adad ta yek adadi ke karbar taein mikone ro ba for mohasebe konam
	int n;
	long sum=0;
	cout << " enter an integer to sum up all the numbers before it(with the number itself): ";
	cin >> n;
	for (int i=1; i <= n; i++)
	{
		sum += i;
	}
	cout << " the sum of " << n << " integer numbers is = " << sum << endl;
}
