#include <iostream>
using namespace std;
int main()
{
	int n = 44;
	cout << " n = " << n << endl; // n=44
		{
		  int n;
		  cout << " enter an integer : ";
		  cin >> n;
		  cout << " n = " << n << endl;  //n= entered number
		}
			{
		       cout << " n = " << n << endl;  // n is not declared and nor initialized so it will be 44
			}
				{
				  string n = "garbage";
		          cout << " n = " << n << endl;  // n is declared but not initialized so it will be garbage
				}
	cout << " n = " << n << endl; // n=4
	return 0;
}
