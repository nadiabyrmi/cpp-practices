#include <iostream>
using namespace std;
int main()
{
	//using if...else to find the minimum
	int n1, n2, n3;
	cout << " Enter three integers : "<< '\n';
	cin >> n1 >> n2 >> n3;
	{
		if (n1 < n2)
		{
			if (n1 < n3) cout << " Their minimum is " << n1 << endl;
			else cout << " Their minimum is " << n3 << endl;
		}
		else // n1>=n2
		{
			if (n2 < n3) cout << " Their minimum is " << n2 << endl;
			else cout << " Their minimum is " << n3 << endl;
		}
	}
	return 0;
}