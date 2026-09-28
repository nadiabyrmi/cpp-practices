#include <iostream>
using namespace std;
int main()
{
	int x, y;
	cout << " Enter Two Integers : \n";
	cin >> x >> y;
	int temp;
	if (y > x)
	{
		temp = x; x = y; y = temp; cout << " max is : " << x;
	}
	else cout << " max is "<<x << endl;
	return 0;
}
