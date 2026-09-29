#include <iostream>
using namespace std;
int main()
{
	int score1 = 0, score2 = 0;
	enum Move { ZERO=0 ,SANG = 1, KAGHAZ = 2, GHEYCHI = 3 };
	Move move1=ZERO, move2=ZERO;
	cout << " choose on of this moves : sang, kaghaz, gheychi ." << endl;
	string player1, player2;
	cout << " player 1, choose : " << endl;
	cin >> player1;
	cout << " player 2, choose : " << endl;
	cin >> player2;
	//im trying to relate string to enum type
	if (player1 == "Sang" || player1 == "sang" || player1 == "SANG") move1 = SANG;
	if (player1 == "Kaghaz" || player1 == "kaghaz" || player1 == "KAGHAZ") move1 = KAGHAZ;
	if (player1 == "Gheychi" || player1 == "gheychi" || player1 == "GHEYCHI") move1 = GHEYCHI;
	if (player2 == "Sang" || player2 == "sang" || player2 == "SANG") move2 = SANG;
	if (player2 == "Kaghaz" || player2 == "kaghaz" || player2 == "KAGHAZ") move2 = KAGHAZ;
	if (player2 == "Gheychi" || player2 == "gheychi" || player2 == "GHEYCHI") move2 = GHEYCHI;
	
	if (move1 == SANG) //1
	{
		if (move2 == SANG)
		{
			cout << " you guys are equal, try one more time! " << endl;
		}
		else if (move2 == KAGHAZ)
		{
			cout << " player2, is the winner! " << endl;
			score2 += 1;
		}
		else if (move2 == GHEYCHI)
		{
			cout << " player 1, is the winner! " << endl;
			score1 += 1;
		}
		//starting to evaluate
			if (score1 == 3 || score2 == 3)
			{
				if (score1 == 3)
				{
					cout << " Player1 has won the game!" << endl;
				}

				else if (score2 == 3)
				{
					cout << " Player2 has won the game!" << endl;
				}
			}
	}//end of stage 1
	else
	{
		if (move1 == KAGHAZ) //2
		{
			if (move2 == SANG)
			{
				cout << " player 1, is the winner! " << endl;
				score1 += 1;
			}
			else if (move2 == KAGHAZ)
			{
				cout << " you guys are equal, try one more time! " << endl;
			}
			else if (move2 == GHEYCHI)
			{
				cout << " player2, is the winner! " << endl;
				score2 += 1;
			}
			//starting to evaluate
			if (score1 == 3 || score2 == 3)
			{
				if (score1 == 3)
				{
					cout << " Player1 has won the game!" << endl;
				}
				else if (score2 == 3)
				{
					cout << " Player2 has won the game!" << endl;
				}
			}
			//end of stage 2
			else
			{
				if (move1 == GHEYCHI) //3
				{
					if (move2 == SANG)
					{
						cout << " player 2, is the winner! " << endl;
						score2 += 1;
					}
					else if (move2 == KAGHAZ)
					{
						cout << " player1, is the winner! " << endl;
						score1 += 1;
					}
					else if (move2 == GHEYCHI)
					{
						cout << " you guys are equal, try one more time! " << endl;
					}
					//starting to evaluate
					if (score1 == 3 || score2 == 3)
					{
						if (score1 == 3)
						{
							cout << " Player1 has won the game!" << endl;
						}
						else
						{
							if (score2 == 3)
							{
								cout << " Player2 has won the game!" << endl;
							}
						}
					}
				}
			}
		}
	}
return 0;
}