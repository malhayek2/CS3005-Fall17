// ConsoleApplication2.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <ctime>
#include <conio.h>
#include <cstdlib>
// enums 0 = ROCK, 1 PAPER, 2 SCISSORS
using namespace std;
int userCount = 0;
int pcCount = 0;
void displaySelection(int x) {
	if (x == 1) cout << "Rock";
	if (x == 2) cout << "Paper";
	if (x == 3) cout << "Scissors";
	else if (x > 3) {
		cout << "invaild int entry";
	}
}
int randomSelect() {
	srand(time(0));
	int random_number = (rand() % 3) +1;

	return random_number;
}
void determineWinner(int user, int random) {
	if ((user == 1 && random == 3) || (user == 2 && random == 1) || (user == 3 && random == 2)) {
		cout << "YOU WON!" << endl;
		userCount++;
	}
	if  (user == random){

		cout << "TIE" << endl;
	}
	else if ((user == 3 && random == 1) || (user == 1 && random == 2) || (user == 2 && random == 3)) {
		cout << "You Lost" << endl;
		pcCount++;
	}
}

int main()
{
	cout << "Welcome To Rock, Paper, Scissors" << endl;
	cout << "1 = Rock" << endl << "2 =  Paper" << endl << "3 = Scissors" << endl;
	cout << "End of line or Shift + D or invaild entry will terminate the game" << endl;
	char ans;
	do {
		cout << endl;
		cout << "Please enter int: ";
//		system("pause");
		int radint;
		int m;
		cin >> m;
		cout << "Player Have Played : ";
		displaySelection(m);
		cout << endl;
		cout << "CPU Have Played : ";
		radint = randomSelect();
		displaySelection(radint);
		cout << endl;
		determineWinner(m, radint);
		cout << "User Wins Counter :" << userCount << endl;
		cout << "CPU Wins Counter :" << pcCount << endl;
		m = 0;
		cout << "Do you want to continue (Y/N)?\n";
		cout << "You must type 'N' to quit :";
		ans = _getche();
		ans = toupper(ans);
	} while ((ans != 'N') );



	

	return 0;
}
