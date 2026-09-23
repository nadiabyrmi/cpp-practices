#include <iostream>
using namespace std;
int main()
{
	//testing how enum  works
	enum Month { FARVARDIN=1, ORDIBEHESHT=2, KHORDAD=3, TIR=4, MORDAD=5, SHAHRIVAR=6, MEHR=7, ABAN=8, AZAR=9, DEY=10, BAHMAN=11, ESFAND=12 };
	Month nadia = MEHR, peyman = BAHMAN, mahrokh = DEY, mojtaba = DEY;
	cout << "mahrokh's birth month is: " << mahrokh << " ,mojtaba's is: " << mojtaba << " ,nadia's is: " << nadia << " and peyman's is : " << peyman << endl;
	enum Answer{ YES=1, yes=1,Yes=1, NO=0,no=0, No=0};
	enum Gender{MALE, FEMALE};
	cout << "gender is: " << MALE << " ,another gender is: " << FEMALE << endl;
	return 0;
}
	