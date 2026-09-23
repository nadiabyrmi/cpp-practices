#include <iostream>
using namespace std;
int main()
{
	/* testing how compound assignment operators work*/
	int n = 10;
	cout << "n is = " << n << " without doing any operation on" << endl;
    cout << "n += 2 is "<<(n += 2) << endl;
	cout << "n -= 6 is " << (n -= 6) << endl;
	cout << "n*=4 is " << (n *= 4) << endl;
	cout << "n/=3 is " << (n /= 3) << endl;
	cout << "n%=4 is " << (n %= 4) << endl;
	return 0;
}
	