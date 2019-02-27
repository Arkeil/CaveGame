#include "Liblaries.h"
#include "Engine.h"
#include "Game.h"

using namespace std;

void gameStart() {
	gameLoad();
}

void gameLoad() {
	ofstream gameSaver("CaveGame_save.txt");
	gameSaver << "Wykonano pomyslny zapis pliku!" << endl;
	gameSaver.close();
	main();
}
