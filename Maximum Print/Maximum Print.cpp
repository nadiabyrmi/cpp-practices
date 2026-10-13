#include<iostream>
using namespace std;
int main()
{
	int n, max;
	cout << "enter positive integers & (0) to quit: ";
	cin >> n;
	for (max = n; n > 0; ) // we don't have update in this loop, so we're gonna left its space blank but specified with a semi colon!
	{
		if (n > max)max = n;
		cin >> n;
	}
	cout << "max= " << max << endl;
	return 0;
}
