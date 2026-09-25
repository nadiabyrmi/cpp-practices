#include <iostream>
using namespace std;
int main()
{
	int n1, n2, n3;
	cout << " enter three integers to find the smallest one : ";
	cin >> n1 >> n2 >> n3;
	if (n1 <= n2 && n1 <= n3) cout << " minimum of " << n1 << " , " << n2 << " , " << n3 << " is = " << n1 << endl;
	if (n2 <= n1 && n2 <= n3) cout<< " minimum of " << n1 << " , " << n2 << " , " << n3 << " is = " << n2 << endl;
	if (n3 <= n1 && n3 <= n2) cout<< " minimum of " << n1 << " , " << n2 << " , " << n3 << " is = " << n3 << endl;
	return 0;

}