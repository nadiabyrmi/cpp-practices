#include <iostream>
using namespace std;
int main()
{
    int n, total;
    cout << " enter an integer and a total number: " << "\n";
    cin >> n >> total;
    total += --n;
    cout << "total is = " << total << " , n is= " << n << endl;
    return 0;
 }

