#include "Liblaries.h"
#include "Engine.h"
#include "Game.h"

using namespace std;

void gameStart() {
	gameLoad();
}

void gameLoad() {
	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);

	if (fileExists("save.txt")) {
		system("cls");
		SetConsoleTextAttribute(hConsole, 6);
		cout << "Wnetrze gry nie zostalo jeszcze zaimplementowane!" << endl;
		system("Pause");
		main();
	}
	else {
		system("cls");
		SetConsoleTextAttribute(hConsole, 28);
		cout << "Niestety nie odnaleziono zapisu gry!" << endl;
		cout << "Czy chcesz utworzyc nowy zapis?\n\n";
		cout << "1 - Tak" << endl;
		cout << "2 - Nie" << endl;
		int choice;
		cin >> choice;

		switch (choice) {
			case 1: {
				cout << "\n\n";
				cout << "Tworze pliki gry:\n\n";
				Sleep(500);
				fileCreate("save.txt");
				cout << "./save.txt\n\n";
				Sleep(500);
				cout << "Zapis utworzony z powodzeniem! Za chwile uruchomimy gre...";
				Sleep(2000);
				gameLoad();
			}
			case 2: {
				cout << "\n\n";
				cout << "Zapis nie zostanie utworzony, przekieruje do menu...";
				Sleep(2000);
				main();
			}
			default: {
				cout << "\n\n";
				cout << "Nieprawidlowe polecenie, wracam do menu...";
				Sleep(2000);
				main();
			}
		}
	}
}

bool fileExists(const char * s) {
	ifstream ifs(s);
	if (!ifs.good()) return false;

	ifs.close();
	return true;
}
void fileCreate(const char * s) {
	ofstream ofs(s);
	ofs.close();
}