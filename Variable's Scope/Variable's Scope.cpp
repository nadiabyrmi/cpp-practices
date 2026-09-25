#include <iostream>
using namespace std;
int main()
{
	//illustrating the scope of variables
	int x;
	x = 11;
	cout << " x is= " << x<<'\n';
	{
		x = 22;
		int y = 33;
		cout << " x is= " << x << " ,y is= " << y << endl;
	}
	int y = 44;
	x = 55;
	cout << " x is= " << x << " y is= " << y << '\n';
	return 0;
}