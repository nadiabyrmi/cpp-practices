#include <iostream>
using namespace std;
int main()
{
	int x, y, min;
	cout << " Enter two integers to find the minimum one :(separated with space) " << endl;
	cin >> x >> y;
	min = (x > y ? x : y);
	cout << " the minimum of " << x << " & " << y << " is : " << min << endl;
	return 0;
}