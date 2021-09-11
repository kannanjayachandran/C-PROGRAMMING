/*Tic Tac Toe game
source code*/
#include <stdio.h>
#include <stdlib.h>

char square[10] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9' };
int choice, player;

//Function prototypes...
int flagWin();
void TBoard();
void scoreBoard(char Score);


int main()
{
	int GameStatus;
	char Score;
	player = 1;
	do {
		TBoard();
	    
	    //For turning turns....
		player = (player % 2)?1:2;

		//Get input
		printf("Player %d, enter a number: \n", player);
		scanf("%d", &choice);
		//set the correct character base on plyer turn
		Score = (player == 1)?'X':'O';
		//set board based on user choice or invalid choice
		scoreBoard(Score);
		GameStatus = flagWin();
		player ++;

	}while (GameStatus == -1);


	if ( GameStatus == 1)
		 printf("----> player %d win\n\n", --player);
	else {
		printf("----->Game draw\n\n");
	}
	return 0;
}


/*
 FlagWin function definition......
 	it is a function to return game status
 	1 for game over with results..
 	-1 for game is in progress...
 	0 is game over tie......
 */
int flagWin()
{  
	  int returnValue = 0;

    if (square[1] == square[2] && square[2] == square[3])
    {
        returnValue = 1;
    }
    else if (square[4] == square[5] && square[5] == square[6])
        returnValue = 1;

    else if (square[7] == square[8] && square[8] == square[9])
        returnValue = 1;

    else if (square[1] == square[4] && square[4] == square[7])
        returnValue = 1;

    else if (square[2] == square[5] && square[5] == square[8])
        returnValue = 1;

    else if (square[3] == square[6] && square[6] == square[9])
        returnValue = 1;

    else if (square[1] == square[5] && square[5] == square[9])
        returnValue = 1;

    else if (square[3] == square[5] && square[5] == square[7])
        returnValue = 1;

    else if (square[1] != '1' && square[2] != '2' && square[3] != '3' &&
        square[4] != '4' && square[5] != '5' && square[6] != '6' && square[7]
        != '7' && square[8] != '8' && square[9] != '9')
        returnValue = 0;
    else
        returnValue = -1;

    return returnValue;
} 
	


/*
 Function to draw the board with player's mark 
*/

void TBoard()
{
	system("cls");

	printf("\n\n\tTIC-TAC-TOE\n\n");

	printf("player1 (X) --- player2 (o)\n\n\n");
    
    printf("     |     |     \n");
    printf("  %c  |  %c  |  %c \n", square[1], square[2], square[3]);

    printf("_____|_____|_____\n");
    printf("     |     |     \n");

    printf("  %c  |  %c  |  %c \n", square[4], square[5], square[6]);

    printf("_____|_____|_____\n");
    printf("     |     |     \n");

    printf("  %c  |  %c  |  %c \n", square[7], square[8], square[9]);

    printf("     |     |     \n\n");
}
	
	

/*
Function to set the board with the correct character,
and set X or O in the correct spot in the array
*/
void scoreBoard (char Score)
{
	if (choice == 1 &&square[1] == '1')
		square[1] = Score;
	else if (choice == 2 && square[2] == '2')
	{
		square[2] = Score;
	}
	else if (choice == 3 && square[3] == '3')
	{
		square[3] = Score;
	}
	else if (choice == 4 && square[4] == '4')
	{
		square[4] = Score;
	}
	else if (choice == 5 && square[5] == '5')
	{
		square[5] = Score;
	}
	else if (choice == 6 && square[6] == '6')
	{
		square[6] = Score;
	}
	else if (choice == 7 && square[7] == '7')
	{
		square[7] = Score;
	}
	else if (choice == 8 && square[8] == '8')
	{
		square[8] = Score;
	}
	else if (choice == 9 && square[9] == '9')
	{
		square[9] = Score;
	}
	else {
		printf("Invalid move\n");
		player --;
	}
}
