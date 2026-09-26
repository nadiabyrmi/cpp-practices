#include <iostream>
using namespace std;
int main()
{
	cout << " Pick a number from 1 to 8 : " << endl;
	char answer;
	cout << " is it less that 5? (y/n)" << endl;
	cin >> answer;
	if (answer == 'y' || answer == ' Y')
	{	cout << " is it less than 3 ? (y/n) " << endl;
		cin >> answer;
		if (answer == 'y' || answer == 'Y')
		{	cout << " is it less than 2? (y/n) " << endl;
			cin >> answer;
			if (answer == 'y' || answer == 'Y')
			{
				cout << " your number is 1 ." << endl;
			}
			else cout << " your number is 2 ." << endl;
		}
		else cout << " is it less than 4? (y/n) " << endl;
		cin >> answer;
		if (answer == 'y' || answer == 'Y')
		{
			cout << " your number is 3 . " << endl;
		}
		else cout << " your number is 4 ." << endl;
	}
	else cout << " is it less than 7? (y/n)" << endl;
	cin >> answer;
	if (answer == 'y' || answer == 'Y')
	{
		cout << " is it less than 6? (y/n)" << endl;
		cin >> answer;
		if (answer == 'y' || answer == 'Y')
		{
			cout << " your number is 5 . " << endl;

		}
		else cout << " your number is 6 . " << endl;
	}
	else cout << " is it less than 8? (y/n) " << endl;
	cin >> answer;
	if (answer == 'y' || answer == 'Y')
	{
		cout << " your number is 7 . " << endl;
	} else cout << " your number is 8 . " << endl;
	return 0;
}