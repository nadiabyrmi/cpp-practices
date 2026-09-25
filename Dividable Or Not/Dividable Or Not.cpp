#include <iostream>
using namespace std;
int main()
{
	int n, d;
	cout << " please enter two integers to study if they are dividable or not : " << endl;
	cin >> n >> d;
	cout << " the numbers are = " << n << " and " << d << " .\n";
	if (d !=0  &&  n%d == 0)
		cout << n << " is dividable by " << d << " ." << endl;
	else 
		cout << n << " is not dividable by " << d << " ." << endl;
	return 0;
}