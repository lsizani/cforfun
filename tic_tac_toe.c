#include <stdio.h>

int playerWins(int	 grid[]);
void drawGrid(int grid[]);
int validMove(int pos, int grid[]);
void intro();
char getCharForblock(int val);

int main(){
	intro();
	int play, player = 1, won = 0;
	int grid[9] = {-4, -4, -4, -4, -4, -4,-4, -4, -4};

	while(won < 1){
		printf("Player %d play: ", player);
		scanf("%d", &play);
		
		if(player == 1){
			if(validMove(play, grid)){
				grid[play] = player;
				won = playerWins(grid);
				if(!won){
					player = 2;
				}
			}else{
				puts("Invalid move, cell already played");
				player = 1;
			}
		}
		else if(player == 2){
			if(validMove(play, grid)){
				grid[play] = player;	
				won = playerWins(grid);
				if(!won){
					player = 1;
				}
			}else{
				puts("Invalid move, cell already played");	
				player = 2;
			}
		}

		drawGrid(grid);
	}

	printf("Player %d Wins!\n", player);
	drawGrid(grid);

	return 0;
}


void intro(){
	puts("Welcome to Tic Tac Toe, to play select tile 0 - 8, as shown below");
	puts("   |   |    ");
	printf(" %d | %d | %d \n", 0, 1, 2);
    puts("___|___|___");
    puts("   |   |    ");
    printf(" %d | %d | %d \n", 3, 4, 5);
    puts("___|___|___");
    puts("   |   |    ");
    printf(" %d | %d | %d \n", 6, 7, 8);
    puts("   |   |   \n ");
}

void drawGrid(int grid[]){
	puts("   |   |    ");
	printf(" %c | %c | %c \n", getCharForblock(grid[0]), getCharForblock(grid[1]), getCharForblock(grid[2]));
    puts("___|___|___");
    puts("   |   |    ");
    printf(" %c | %c | %c \n", getCharForblock(grid[3]), getCharForblock(grid[4]), getCharForblock(grid[5]));
    puts("___|___|___");
    puts("   |   |    ");
    printf(" %c | %c | %c \n", getCharForblock(grid[6]), getCharForblock(grid[7]), getCharForblock(grid[8]));
    puts("   |   |   \n ");
}

char getCharForblock(int val){
	if(val == 1){
		return 'X';
	}

	if(val == 2){
		return 'O';
	}
	return ' ';
}

int playerWins(int grid[]){
	if(grid[0] + grid[1] + grid[2] == 3 || grid[0] + grid[1] + grid[2] == 6){
		return 1;
	}

	if(grid[3] + grid[4] + grid[5] == 3 || grid[3] + grid[4] + grid[5] == 6){
		return 1;
	}

	if(grid[6] + grid[7] + grid[8] == 3 || grid[6] + grid[7] + grid[8] == 6){
		return 1;
	}
	if(grid[0] + grid[3] + grid[6] == 3 || grid[0] + grid[3] + grid[6] == 6){
		return 1;
	}
	if(grid[1] + grid[4] + grid[7] == 3 || grid[1] + grid[4] + grid[7] == 6){
		return 1;
	}
	if(grid[2] + grid[5] + grid[8] == 3 || grid[2] + grid[5] + grid[8] == 6){
		return 1;
	}
	if(grid[0] + grid[4] + grid[8] == 3 || grid[0] + grid[4] + grid[8] == 6){
		return 1;
	}
	if(grid[2] + grid[4] + grid[6] == 3 || grid[2] + grid[4] + grid[4] == 6){
		return 1;
	}
	return 0;
}

int validMove(int pos, int grid[]){
	if(pos >= 0 && pos <= 8 && grid[pos] > -1){
		return 0;
	}
	return 1;
}