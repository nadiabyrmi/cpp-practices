#include <iostream>
using namespace std;
int main()
{
	int n, d;
	cout << " enter two positive integers: " << endl;
	cin >> n >> d;
	if (d != 0)
	{
		if (n % d == 0) cout << d << " divides " << n << endl;
		else cout << d << " does not divide " << n << endl;
	}
	else cout << d << " does not divide " << n << endl;
     
	return 0;
}