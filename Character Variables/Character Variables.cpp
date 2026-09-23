#include <iostream>
using namespace std;
int main()
{
	/*printing the character and it's internally stored integer value*/
	char c = 'A';
	cout << "c = " << c << " , int(c)= " << int(c) << endl;
	c = 'a';
	cout << "c = " << c << " , int(c)= " << int(c) << endl;
	c = '\t'; 
	cout << "c = " << c << " , int(c)= " << int(c) << endl;
	c = '!';
	cout << "c = " << c << " , int(c)= " << int(c) << endl;
	return 0;
}