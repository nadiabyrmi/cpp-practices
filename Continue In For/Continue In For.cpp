#include<iostream>
using namespace std;
int main()
{
	int n = 1;
	char c;
	for (;; n++)
	{
		cout << "\n loop no = " << n << endl;
		cout << " continue ? (y/n) ";
		cin >> c;
		if (c == 'y') continue;
		else break;
	}
	cout << " \n total of loops = " << n;
	return 0;
}	
