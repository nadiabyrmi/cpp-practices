#include <iostream>
using namespace std;   //every if needs an else to operate
int main()
{
	char language;
	cout << " choose your language \n" << " English(e) , French(f) , German(g) , Italian(i) , Russian(r) ?" << endl;
	cin >> language;
	if (language == 'e' || language == 'E')
	{
		cout << " Welcome to project c++ ." << endl;
	}
	else
	{
		if (language == 'f' || language == 'F')
		{
			cout << " Bon jour, project c++ ." << endl;
		}
		else
		{
			if (language == 'g' || language == 'G')
			{
				cout << " Guten tag, project c++ ." << endl;
			}
			else
			{
				if (language == 'i' || language == 'I')
				{
					cout << " Bon giorno, project c++ ." << endl;
				}
				else
				{
					if (language == 'r' || language == 'R')
					{
						cout << " Dobre utre, project c++ ." << endl;
					}
					else
					{
						cout << " Sorry, we don't speak your language ." << endl;
					}



				}
			}

		}
		
	}
return 0;
}