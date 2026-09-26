#include <iostream>
using namespace std;
int main()
{
	float score;
	cout << " enter your score" << endl;
	cin >> score;
	if (score > 100)
	{
		cout << " not in range." << endl;
	}
	else
	{
		if (score >= 90)
		{
			cout << " grade is A" << endl;
		}
		else
		{
			if (score >= 80)
			{
				cout << " grade is B" << endl;
			}
			else
			{
				if (score >= 70)
				{
					cout << " grade is C" << endl;
				}
				else
				{
					if (score >= 60)
					{
						cout << " grade is D" << endl;
					}
					else
					{
						if (score >= 50)
						{
							cout << " grade is E" << endl;
						}
						else
						{
							if (score >= 0)
							{
								cout << " grade is F" << endl;
							}
							else cout << " your score is not in range" << endl;
						}

					}
				}
			}
		}
	}
return 0;
}