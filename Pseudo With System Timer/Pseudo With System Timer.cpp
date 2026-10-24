#include<iostream>
#include<cstdlib>
#include <ctime>
using namespace std;
int main()
{
	unsigned int seed;
	seed = time(NULL);
	srand(seed);
	cout << "seed is : " << seed << endl;
	for (int i = 0; i < 8; i++)
	{
		cout << rand() << endl;
	}
	return 0;
}