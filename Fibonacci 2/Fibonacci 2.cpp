#include<iostream>
using namespace std;
int main()
{
	int f0 = 0, f1 = 1, limit;
	long fibo=0;
	cout << " enter an integer to calculate fibonacci sequence up until that number: ";
	cin >> limit;
	cout << "0, 1";
	while (true)
	{
		fibo = f0 + f1;
		if (fibo > limit) break;
		f0 = f1;
		f1 = fibo;
		cout << ", " << fibo;
	}
	return 0;
}