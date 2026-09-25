#include <iostream>
#include <limits>
using namespace std;
int main()
{
	cout << "minimum amount of short variables is : " << SHRT_MIN << endl;
	short x = -32768;
	x -= 100;
	cout << " x variable is equal to = " << x<< endl;
	return 0;
}