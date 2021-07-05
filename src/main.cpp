#include <iostream>
#include "Game.h"


using namespace std;

int main(){
	Game game;
	cout << game.getDescribe('p') << endl;
	game.view_Board();
	game.get_from();
}