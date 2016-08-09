#include <stdio.h>

/**
	S - Ship block
	O - Open block (no ship or shot)
	H - Hit ship
	X - Fired and missed

	------------------------------------

	Class of ship 			Size
	-----------------------------
						|
	Aircraft Carrier	|	5
	Battleship			|	4
	Submarine			|	3
	Destroyer (cruiser)	|	3
	Patrol Boat			|	2
						| 

*/
#define TOTAL_BOATS 10 

struct ship{
	int size;
	char orientation;
	char name[15];
	char location[5];
};


struct battleGround{
	struct ship ships[TOTAL_BOATS];
	int sunkShips;
};


void drawMaps();
void showBoats();
void initialiseGame();

int main(){
	int player;
	drawMaps();
	showBoats();
	return 0;
}

void initialiseGame(){
	int total = TOTAL_BOATS;
	puts("You must have a total of 10 ships: ");
	puts("Enter the number of Patrol boats you want: ");
	puts("Enter the number of Destroyers you want: ");
	puts("Enter the number of Submarines you want: ");
	puts("Enter the number of  Battleships you want: ");
	puts("Enter the number of Aircraft Carriers you want: ");
}

void drawMaps(){
	puts("    A   B   C   D   E   F   G   H   I   J");
	puts("   ___ ___ ___ ___ ___ ___ ___ ___ ___ ___");
	puts("1 |___|___|___|___|___|___|___|___|___|___|");
	puts("2 |___|___|___|___|___|___|___|___|___|___|");
	puts("3 |___|___|___|___|___|___|___|___|___|___|");
	puts("4 |___|___|___|___|___|___|___|___|___|___|");
	puts("5 |___|___|___|___|___|___|___|___|___|___|");
	puts("6 |___|___|___|___|___|___|___|___|___|___|");
	puts("7 |___|___|___|___|___|___|___|___|___|___|");
	puts("8 |___|___|___|___|___|___|___|___|___|___|");
	puts("9 |___|___|___|___|___|___|___|___|___|___|");
	puts("10|___|___|___|___|___|___|___|___|___|___|");
}

void showBoats(){
	puts("    A   B   C   D   E   F   G   H   I   J");
	puts("   ___ ___ ___ ___ ___ ___ ___ ___ ___ ___");
	printf("1 |_%c_|_%c_|_%c_|_%c_|_%c_|_%c_|_%c_|_%c_|_%c_|_%c_|\n"
		, '#', '_', '_', '_', '_', '_', '_', '_', '_', '_');
	puts("2 |___|___|___|___|___|___|___|___|___|___|");
	puts("3 |___|___|___|___|___|___|___|___|___|___|");
	puts("4 |___|___|___|___|___|___|___|___|___|___|");
	puts("5 |___|___|___|___|___|___|___|___|___|___|");
	puts("6 |___|___|___|___|___|___|___|___|___|___|");
	puts("7 |___|___|___|___|___|___|___|___|___|___|");
	puts("8 |___|___|___|___|___|___|___|___|___|___|");
	puts("9 |___|___|___|___|___|___|___|___|___|___|");
	puts("10|___|___|___|___|___|___|___|___|___|___|");	
}