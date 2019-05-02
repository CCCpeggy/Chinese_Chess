﻿#include "Game.h"

Game::Game()
{	
	pieces[1].pos("將", 0, 0, 4);
	pieces[2].pos("士", 0, 0, 3);
	pieces[2].pos("士", 0, 0, 5);
	pieces[3].pos("象", 0, 0, 2);
	pieces[3].pos("象", 0, 0, 6);
	pieces[4].pos("車", 0, 0, 0);
	pieces[4].pos("車", 0, 0, 8);
	pieces[5].pos("馬", 0, 0, 1);
	pieces[5].pos("馬", 0, 0, 7);
	pieces[6].pos("包", 0, 2, 1);
	pieces[6].pos("包", 0, 2, 7);
	pieces[7].pos("卒", 0, 3, 0);
	pieces[7].pos("卒", 0, 3, 2);
	pieces[7].pos("卒", 0, 3, 4);
	pieces[7].pos("卒", 0, 3, 6);
	pieces[7].pos("卒", 0, 3, 8);

	pieces[8].pos("帥", 1, 9, 4);
	pieces[9].pos("仕", 1, 9, 3);
	pieces[9].pos("仕", 1, 9, 5);
	pieces[10].pos("相", 1, 9, 2);
	pieces[10].pos("相", 1, 9, 6);
	pieces[11].pos("車", 1, 9, 0);
	pieces[11].pos("車", 1, 9, 8);
	pieces[12].pos("傌", 1, 9, 1);
	pieces[12].pos("傌", 1, 9, 7);
	pieces[13].pos("炮", 1, 7, 1);
	pieces[13].pos("炮", 1, 7, 7);
	pieces[14].pos("兵", 1, 6, 0);
	pieces[14].pos("兵", 1, 6, 2);
	pieces[14].pos("兵", 1, 6, 4);
	pieces[14].pos("兵", 1, 6, 6);
	pieces[14].pos("兵", 1, 6, 8);
}


ostream& operator<<(ostream& cout, const Piece& p) {
	if (p.player) {
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), BACKGROUND_INTENSITY | FOREGROUND_RED);
		cout << p.symbol;
	}
	else {
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), BACKGROUND_INTENSITY | BACKGROUND_INTENSITY);
		cout << p.symbol;
	}
	return cout;
}


void Game::drawInterface()
{
	
	for (int i = 0; i <= 4 ; i++) {
		if (i != 0) {
			for (int k = 0; k <= 8; k++) {
				if (k == 0 || k == 8) {
					cout << "∥";
				}
				else {
					cout << "│ ";
				}

				if ((i == 1 && k == 4) || (i == 2 && k == 3)) {
					cout << "╱ ";
				}
				else if ((i == 1 && k == 3) || (i == 2 && k == 4)) {
					cout << "╲ ";
				}
				else {
					cout << "  ";
				}
			}
			cout << endl;
		}

		for (int j = 0; j <= 8; j++) {
			if (board[i][j] == 15) {
				//_setmode(_fileno(stdout), _O_U16TEXT);
				cout << piecegrid.gridline[i][j];
				//_setmode(_fileno(stdout), _O_TEXT);
			}
			else {

				cout << pieces[board[i][j]];
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
			}
			
			if (i == 0 && j != 8) {
				cout << "═ ";
			}
			else if (i != 0 && j != 8) {
				cout << "—";
			}
		}
		cout << endl;
	}

	cout << "∥        楚河       漢界       ∥ " << endl;

	for (int i = 5; i <= 9; i++) {
		for (int j = 0; j <= 8; j++) {
			if (board[i][j] == 15) {
				cout << piecegrid.gridline[i][j];
			}
			else {
				cout << pieces[board[i][j]];
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
			}
			if (i == 9 && j != 8) {
				cout << "═ ";
			}
			else if (i != 9 && j != 8) {
				cout << "—";
			}
		}
		if (i != 9) {
			cout << endl;
			for (int k = 0; k <= 8; k++) {
				if (k == 0 || k == 8) {
					cout << "∥";
				}
				else {
					cout << "│ ";
				}
				if ((k == 4 && i == 7) || (k == 3 && i == 8)) {
					cout << "╱ ";
				}
				else if ((k == 3 && i == 7) || (k == 4 && i == 8)) {
					cout << "╲ ";
				}
				else {
					cout << "  ";
				}
			}
		}
		cout << endl;
	}
	cout << endl ;
}

void Game::drawMenu(int)
{
}

void Game::drawDialog(string, int)
{
}

void Game::setPlayer(int newPlayer)
{
	player = newPlayer;
}

void Game::changePlayer()
{
	player = player ? 0 : 1;
}

int Game::getPlayer()
{
	return player;
}
