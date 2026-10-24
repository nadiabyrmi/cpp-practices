#include<iostream> // defines rand() and RAND_MAX
#include <cstdlib>
using namespace std;
int main()
{
	for (int i = 0; i < 6; i++)
	{
		cout << rand() << endl;	
	}
	cout << " RAND_MAX is = " << RAND_MAX << endl;
	return 0;
}