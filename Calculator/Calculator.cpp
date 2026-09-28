#include <iostream>
using namespace std;
int main()
{
	int a, b;
	char c;
	cout << " enter two integers to operate on : " << endl;
	cout << " a = "; cin >> a;
	cout << " b = "; cin >> b;
	cout << " choose on of these operators: +,-,*,/,% ";
	cin >> c;
	switch (c)
	{
	case '+': cout << " a + b = " << a + b << endl; break;
	case '-': cout << " a - b = " << a - b << endl; break;
	case '*': cout << " a * b = " << a * b << endl; break;
	case '/':	 if (b != 0) cout << " a / b = " << a / b << endl;
			else cout << " not supported " << endl; break;
	case '%':	if (b != 0) cout << " a % b = "<<a%b << endl;
			else cout << " not supported " << endl; break;
	default: cout << " your operater is not supported! " << endl; break;
	}
	cout << " bye!" << endl;
	return 0;
}