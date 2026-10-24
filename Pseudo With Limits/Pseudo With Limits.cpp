#include <iostream>
#include <cstdlib>
#include <cmath>
using namespace std;
int main()
{
	int unsigned seed = time(NULL);
	int min, max;
	cout << " enter maximum: ";
	cin >> max;
	cout << " enter minimum: ";
	cin >> min;
	srand(seed);
	int range = max - min + 1;
	cout << " range of pseudo numbers is : " << range << endl;
	cout << "seed is : " << seed << endl;
	for (int i = 0; i < 20; i++)
	{
		cout << rand()% range + min << endl;
	}
	return 0;
}