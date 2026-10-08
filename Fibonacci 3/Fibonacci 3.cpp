#include <iostream>
#include<cstdlib>
using namespace std;
int main()
{
	long limit, f0=0, f1=1, f2;
	cout << " enter a number to find fibonacci's before it: ";
	cin >> limit;
	cout << " 0, 1";
	while (true)
	{	
		f2 = f0 + f1;
		cout <<", "<<f2;
		if (f2 > limit) exit(0);
		f0 = f1;
		f1 = f2;
	}
	return 0;
}