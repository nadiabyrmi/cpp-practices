#include <iostream>
using namespace std;
int main()
{
	char ans;
	cout << "are you enrolled? (y/n)";
	cin >> ans;
	if (ans == 'Y' || ans == 'y') cout << " you are enrolled.\n";
	else cout << " you aren't enrolled.";
	return 0;
}