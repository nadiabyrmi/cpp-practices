#include <iostream>
using namespace std;
int main()
{
	int x, y;
	cout << " enter two integers: \n";
	cin >> x >> y;
	if (x > y)
	{                                /*this part considered as a statement*/
		int temp = x;
		x = y;
		y = temp;
	}
	cout << "integers by their order: " << x << " < " << y << " .\n";
	return 0;
}