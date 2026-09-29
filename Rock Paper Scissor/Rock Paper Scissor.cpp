#include<iostream>
using namespace std;
int main()
{
	enum Move {ZERO=0,SANG,KAGHAZ,GHEYCHI};
	Move move1=ZERO, move2=ZERO;
	string name1, name2;
	string player1, player2;
	cout << " player1, enter your name: ";
	cin >> name1;
	cout << " player2, enter your name : ";
	cin >> name2;
	cout << name1 << " choose your move (SANG,KAGHAZ,GHEYCHI) :" << endl;
	cin >> player1;
// relating enum to string so that we can get an input from user!	
	if (player1 == "SANG") move1 = SANG;
	else if (player1 == "KAGHAZ")move1 = KAGHAZ;
	else if (player1 == "GHEYCHI") move1 = GHEYCHI;
	cout << name2 << " choose your move (SANG,KAGHAZ,GHEYCHI) :" << endl;
	cin >> player2;
	if (player2 == "SANG") move2 = SANG;
	else if (player2 == "KAGHAZ")move2 = KAGHAZ;
	else if (player2 == "GHEYCHI") move2 = GHEYCHI;	
	switch (move1)
	{
	case (SANG): //sang
	{
		if (move2 == SANG) cout << " you're equal ! ";
		else if (move2 == KAGHAZ) cout << name2 << " you win ! " << endl;
		else if (move2 == GHEYCHI) cout << name1 << " you win ! " << endl;
	}
		break;
	case (KAGHAZ): //kaghaz
	{
		if (move2 ==SANG) cout << name1 << " you win ! " << endl;
		else if (move2 == KAGHAZ) cout << " you're equal ! " << endl;
		else if (move2 == GHEYCHI) cout << name2 << " you win !" << endl;
	}
		break;
	case (GHEYCHI): //gheychi
	{
		if (move2 == SANG) cout << name2 << " you win !" << endl;
		else if (move2 == KAGHAZ) cout << name1 << " you win !" << endl;
		else if (move2 == GHEYCHI) cout << " you're equal ! " << endl;
	}
		break;
	default: cout << " not supported content's, sorry! " << endl;
	}
	return 0;
}
