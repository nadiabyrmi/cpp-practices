#include <iostream>
using namespace std;
int main()
{
	long bound;
	cout << " enter a positive integer: ";
	cin >> bound;
	cout << " factrial numbers < " << bound << " :\n1";
	long f = 1, i = 1;
	do
	{
		f *= ++i; // inja chom az noe pishvandi estefade karde, ghablesh 1 ro to  khroji chap karde, chon in amalgar baes mishe ke hichvaght khoroji 1 nadashte bashim.		cout << ", " << f;
	} while (f < bound);
	return 0;
}