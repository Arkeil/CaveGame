#include "Liblaries.h"

using namespace std;

void mainMenu() {
	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);

	system("cls");
	SetConsoleTextAttribute(hConsole, 61);
	cout << "--------------------------" << endl;
	cout << "*     Witaj w grze !     *" << endl;
	cout << "*        CaveGame        *" << endl;
	cout << "--------------------------" << endl;
	cout << "<     Dostepne akcje:     >" << endl;
	cout << "* 1 - Graj" << endl;
	cout << "* 2 - Wczytaj gre [In progress]" << endl;
	cout << "* 3 - Wyjscie" << endl;
	cout << "--------------------------" << endl;
}

void fileManager() {

}

void menuBridge() {
	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);

	int selected = 0;
	cin >> selected;

	switch (selected) {
		case 1: {
			gameStart();
		}
		case 2: {
			SetConsoleTextAttribute(hConsole, 18);
			cout << "Funkcja nie zostala jeszcze zaimplementowana!" << endl;
			mainMenu();
		}
		case 3: {

		}
		default: {

		}
	}
}

int randomNumberGenerator(int a, int b) {
	srand(time(NULL));
	return (rand() % a) + b;
}