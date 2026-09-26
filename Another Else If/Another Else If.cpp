#include <iostream>
using namespace std;
int main()
{
	char language;
	cout << " Choose your language: \nEnglish(e) , Russian(r) , German(g) , Italian(i) , French(f)" << endl;
	cin >> language;
	if (language == 'e' || language == 'E') cout << " welcome to c++ " << endl;
	else if (language == 'r' || language == 'R') cout << " dobre utre c++ " << endl;
	else if (language == 'g' || language == 'G') cout << " guten tag c++ " << endl;
	else if (language == 'i' || language == 'I')cout << " bon giorno c++ " << endl;
	else if (language == 'f' || language == 'F')cout << " bon jour c++ " << endl;
	else  cout << " we dont speak your language mate! *,*";
	return 0;
}