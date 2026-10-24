#include<iostream>
#include<cstdlib>
using namespace std;
int main()
{
	unsigned int seed;
	cout << " enter seed: ";
	cin >> seed;
	srand(seed);
	for (int i = 0; i < 8; i++)
	{
		cout << rand() << endl;
	}
	return 0;
}