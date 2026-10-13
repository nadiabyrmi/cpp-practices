#include <iostream>
#include<iomanip> // including to decide how much of floating point will be printed
using namespace std;
int main()
{
	//findig average of all the numbers user add, ending with break.
	int n;
	long sum=0;
	int i=0;
	cout << " please enter as many number as you want to find their average, enter 0 when its enough! "<<endl;
	for (;;)
	{
		cin >> n;
		if (n == 0) break;
		sum += n;
		i++;
	}
	cout << " the  average of all the numbers you've entered is : " <<fixed<<setprecision(5)<< sum / (double)i << endl;
	return 0;
}