#include<iostream>
using namespace std;
int main()
{
	// using nested fors
	const int N = 5;
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < N; j++)
		{
			for (int k = 0; k < N; k++)
			{
				if (i + j + k > N)
				{
					goto esc;
				}
				else
				{
					cout << i + j + k << " ";
				}
			}
			cout << " *  ";	
		}
	esc: cout << "." << endl;
	}
	return 0;
}