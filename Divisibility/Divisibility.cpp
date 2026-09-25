#include <iostream>
using namespace std;
int main()
{
	int x, y;
	cout << "enter two positive integers: " << '\n';
	cin >> x >> y;
	if (x % y != 0) cout << x << " is not divisible by " << y << endl; 
	else cout << x << " is divisible by " << y << endl;
	 if (x % y == x) cout << x << " is smalller than " << y << endl;
	else cout << x << "is bigger or equal to " << y << endl;
	return 0;
}