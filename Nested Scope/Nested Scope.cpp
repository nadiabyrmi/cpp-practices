int x = 10; // this one is global
#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
int main()
{
	int x = 20;
	{
		int x = 30;
		cout << " x in internal scope is= " << x << endl;
	}
	cout << " x in main() block is= " << x << endl;
	cout << " x outside of main, i mean global x is= " << ::x << endl;
	return 0;
}