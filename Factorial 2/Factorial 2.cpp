#include <iostream>
using namespace std;
int main()
{
	int limit, i=1;
	unsigned long long factorial=1;
	cout << " enter a number to calculate factoriel of numbers before it :";
	cin >> limit;
	cout << " 1";
	do
	{
		factorial *= i++;
		cout << ", " << factorial;
	} while (i <= limit);
return 0;
}