#include <iostream>
using namespace std;
int main()
{
	/*testing how multiple cin will work if its combines with string and numbers*/
	int m;
	string word;
	cout << "enter a number and a specific word:\n";
	cin >> m >> word;
	cout << "your word is : " << word <<'\b' << " , and your number is : " << m <<'.' << endl;      //testing backspace function
	return 0;

}