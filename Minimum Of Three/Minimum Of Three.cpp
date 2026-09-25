#include <iostream>
using namespace std;
int main()
{
	int a, b, c;
	cout << " enter three integer numbers separated with space to find the minimum among them\n";
	cin >> a >> b >> c;
	int min = a;
	if (min > b) min = b;
	if (min > c) min = c;
	cout << " minimum of " << a << " , " << b << " , " << c << " is : " << min;
	return 0;
}