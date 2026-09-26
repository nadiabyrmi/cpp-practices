#include <iostream>
using namespace std;
int main()
{
	float grade;
	cout << " enter your score to know your grade : " << endl;
	cin >> grade;
	if (grade > 100) cout << " your grade is out of range ." << endl;
	else if (grade >= 90) cout << " your grade is A, Bravooo ! " << endl;
	else if (grade >= 80)cout << " your grade is B, COOL ! " << endl;
	else if (grade >= 70)cout << " your grade is C, Dont Be Average ! " << endl;
	else if (grade >= 60)cout << " your grade is D, Work Hard ." << endl;
	else if (grade >= 50) cout << " your grade is E, BAD!!! " << endl;
	else if (grade >= 0) cout << " your grade is F, you are a LOSER! " << endl;
	else cout << " your score is out of range, maybe it's not even a score! try again. " << endl;
	return 0;
}