// Lab1Repo.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>
#include <stdlib.h>
#include "time.h"

int main()
{

	using namespace std;
	srand(time(NULL));
	int iSecret = rand() % 100 + 1;
	int iGuess;
	
	int Chances = 5;

	for (int i = 0; i < Chances; i++)
	{

			cout << "Guess a number between 1-100" << "" << endl;
			cin >> iGuess;

			cout << "Your guess:" << "" << iGuess << "" << endl;
		
			if (iSecret<iGuess) cout << ("The secret number is lower") << endl;
			else if (iSecret>iGuess) cout << ("The secret number is higher") << endl;
			else if (iSecret == iGuess) cout << ("Correct answer!") << endl;

			cout << "Secret:" << iSecret << endl;
	
			int iGuess = 0;
			

			/*system("Pause");
			system("CLS");*/

	if (Chances == 0) break;
		
	}

    return 0;
}

