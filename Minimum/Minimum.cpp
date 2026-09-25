#include <iostream>
using namespace std;
int main()
{
	double n, m;
	cout << "enter two numbers to find the minimum one: \n";
	cin >> n >> m;
	if (n > m) cout << n << " is bigger than " << m << '\n';
	else cout << m << " is bigger than " << n << '\n';
	return 0;
}