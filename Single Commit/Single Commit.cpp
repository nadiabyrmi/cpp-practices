#include <iostream>
using namespace std;
int main()
{
	int x, y, z;
	cout << "enter three integer numbers: " << endl;
	cin >> x >> y >> z;
	cout << " x is : " << x << " ,y is :" << y << " ,z is :" << z<<'\n';
	z -= x + y++;
	cout << "z-(x+y) is :" << z << " and y is : " << y << '\n';
	return 0;
}