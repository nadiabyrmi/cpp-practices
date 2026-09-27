#include <iostream>
using namespace std;
int main()
{
    //finding minimum of 4 nums
    int a, b, c, d;
    cout << " enter 4 numbers to find the minimum of them " << endl;
    cin >> a >> b >> c >> d;
    int min = a;
    if (b < min) min = b;
    if (c < min) min = c;
    if (d < min) min = d;
    cout << " minimum of " << a << " , " << b << " , " << c << " , " << d << " , is = " << min << endl;
    return 0;
}