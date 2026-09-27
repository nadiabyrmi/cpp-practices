#include <iostream>
using namespace std;
int main()
{
	int score;
	cout << " enter your exam's score " << endl;
	cin >> score;
	switch (score / 10)
	{
	case 10:
	case 9: cout << " your grade is A. " << endl; break;
	case 8: cout << " your grade is B. " << endl; break;
	case 7: cout << " your grade is C. " << endl; break;
	case 6: cout << " your grade is D. " << endl; break;
	case 5: cout << " your grade is E. " << endl; break;
	case 4:
	case 3:
	case 2:
	case 1:
	case 0: cout << " your grade is F. " << endl; break;
	default:cout << "your score is out of range.\n" << endl; break;
	}
	cout << " GoodBye " << endl;
	return 0;
}