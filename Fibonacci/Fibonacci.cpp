#include<iostream>
using namespace std;
int main()
{
	//generating fibonacci sequence
	int f0 = 0, f1 = 1, limit;
	long fibo=0;
	cout << " enter an integer to find the fibonacci sequence before that number: ";
	cin >> limit;
	cout << " the fibonacci sequence is: \n 0, 1";
	while (fibo <= limit&& fibo!=limit)
	{
		fibo = f0 + f1;
		cout << ", "<<fibo;
		f0 = f1;
		f1 = fibo;
	}
	return 0;
}