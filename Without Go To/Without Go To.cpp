#include <iostream>
using namespace std;
int main()
{
	bool stop = false;
	const int N = 5;
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < N && !stop ; j++)
		{
			for (int k = 0; k < N && !stop; k++)
			{
				if (i + j + k > N)
				{
					stop = true;
				}
				else cout << i + j + k << " ";
			}
		cout << "*";
		}
	cout << "." << endl;
	stop = false;
	}
	return 0;
}