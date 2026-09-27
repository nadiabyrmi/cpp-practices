#include <iostream>
using namespace std;
int main()
{
	int n, d;
	cout << " enter two numbers.\n n= ";
	cin >> n;
	cout << " d= ";
	cin >> d;
	if (d != 0 && n % d == 0)
	{
		cout << " n is divisible by d " << endl;
	}
	return 0;
}