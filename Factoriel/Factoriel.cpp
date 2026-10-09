#include <iostream>
using namespace std;
int main()
{
	int n, i=1;
	long factoriel=1;
	cout << " enter a number to find it's factoriel: ";
	cin >> n;
	do
	{
		factoriel *= i++;
	}
	while (i<=n);
	cout << " factoriel of " << n << " is : " << factoriel << endl;
	return 0;
}