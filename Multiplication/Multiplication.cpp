#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	for (int x = 1; x <= 10; x++)
	{
		for (int y = 1; y<=10 ; y++)
		{
			cout << setw(5) << x * y;
			if (x < y) break;
		}
		cout << endl;
	}
	return 0;
}
