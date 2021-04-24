#include<bits/stdc++.h>
using namespace std;

int main()
{
	string name;
	int comp = 0, player = 0;
	map<int, string> map;
	map[1] = "rock";
	map[2] = "paper";
	map[3] = "scissors";
	cout << "Enter player name :: "; cin >> name;
	cout << "The rules are simple.\nPlayer has to play against the computer in a classic game of rock-paper-scissors\nYou enter 'rock', 'paper' or 'scissors'\nThe computer does too.";
	cout << "\nRock - paper ---> paper wins\nRock - Scissors ---> Rock wins\nScissors - Paper ---> Scissors win\n";
	cout << "Best of Luck " << name << "\n";
	while(comp < 5 && player < 5)
	{
		int co = 1 + (rand() % 3);
		string pl;
		cout << "Your move => ";
		cin >> pl;
		cout << "Computer's move => " << map[co] << "\n";
		if(pl == "rock" && map[co] == "paper")
			comp++;
		if(map[co] == "rock" && pl == "paper")
			player++;
		if(pl == "rock" && map[co] == "scissors")
			player++;
		if(map[co] == "rock" && pl == "scissors")
			comp++;
		if(pl == "paper" && map[co] == "scissors")
			comp++;
		if(map[co] == "paper" && pl == "scissors")
			player++;
		if(map[co] == pl)
			continue;
	}
	cout << "Computer = " << comp << " " << name << " = " << player << "\n";
	if(comp > player)
		cout << "Computer wins....";
	else
		cout << "Congrats! You won";
}
