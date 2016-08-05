#include <stdio.h>

int playerWins(int	 grid[]);
void drawGrid(int grid[]);

int main(){
	int play, player = 1, won = 0;
	int grid[9] = {-1, -1, -1, -1, -1, -1,-1, -1, -1};

	while(won < 1){
		printf("Player %d play: ", player);
		scanf("%d", &play);
		
		if(player == 1){
			grid[play] = player;
			won = playerWins(grid);
			player = 2;
		}
		else if(player == 2){
			grid[play] = player;	
			won = playerWins(grid);
			player = 1;
		}
		

	}

	return 0;
}

void drawGrid(int grid[]){

}

int playerWins(int grid[]){
	return 0;
}