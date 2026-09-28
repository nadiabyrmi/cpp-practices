#include<iostream>
using namespace std;
int main()
{
	float age;
	cout << " enter your age " << endl;
	cin >> age;
	if (age <= 18) cout << " You are a child." << endl;
	else if (age > 18 && age <= 65) cout << " You are an adult. " << endl;
	else if (age > 65) cout << " You are a senior. " << endl;
	else cout << "Your age is out of category ";
	return 0;
}