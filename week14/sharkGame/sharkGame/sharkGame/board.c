//
//  board.c
//  sharkGame
//
#include <stdio.h>
#include <stdlib.h>

#include "board.h"

// ----- EX. 3 : board ------------
#define N_COINPOS       12
#define MAX_COIN        4
// ----- EX. 3 : board ------------
// ----- EX. 5 : shark ------------
#define MAX_SHARKSTEP   6
#define SHARK_INITPOS   -4
// ----- EX. 5 : shark ------------
// ----- EX. 3 : board ------------
static int board_coin[N_BOARD];
static int board_status[N_BOARD]; //0 - OK, 1 - destroyed
// ----- EX. 3 : board ------------


static int shark_position;

// ----- EX. 3 : board ------------
void board_printBoardStatus(void)
{
    int i;
    
    printf("----------------------- BOARD STATUS -----------------------\n");
    for (i=0;i<N_BOARD;i++)
    {
        printf("|");
        if (board_status[i] == BOARDSTATUS_NOK)
            printf("X");
        else
            printf("O");
    }
    printf("|\n");
    printf("------------------------------------------------------------\n");
}

int board_initBoard(void)
{
    int i;
    
    //variable initialization
    for (i=0;i<N_BOARD;i++)
    {
        board_status[i] = BOARDSTATUS_OK;
        board_coin[i] = 0;
    }
    
// ----- EX. 5 : shark ------------
    shark_position = SHARK_INITPOS;
// ----- EX. 5 : shark ------------

    //coin allocation
   for (i=0; i< N_COINPOS; i++)
   {    
      int flag= 0; 
   	  while(flag==0) // you have not allocated the coin 
   	  {
   	  	  int coin_pos= rand()%N_BOARD;
		  if ( board_coin[coin_pos] == 0)// no coin in the coin_pos
		  {
		  	   board_coin[coin_pos] = rand()%MAX_COIN+1;
		  	   flag = 1;// you have allocated the coin 
		   } 
		 }
	  }
    return N_COINPOS;
   }
    
    

// ----- EX. 3 : board ------------


// ----- EX. 5 : shark ------------
int board_stepShark(void)
{
  int step = rand()%(MAX_SHARKSTEP+1);// shark moves (1~6) steps 
  int i;
  for(i = shark_position+1; i<=shark_position+step; i++)// board changes from [shark_position +1]
  {
  	if(i>= 0&& i<N_BOARD)
  	 board_status[i]= BOARDSTATUS_NOK;// boards shark went throungh turns into X
  }
  
  shark_position += step;// shark pos changes
  return shark_position;
}
// ----- EX. 5 : shark ------------


// ----- EX. 3 : board ------------
int board_getBoardStatus(int pos) 
{
    return board_status[pos];
}

int board_getBoardCoin(int pos)
{
    int coin = board_coin[pos];// copy the coin on the board 
    board_coin[pos] = 0;// resets the coin on board after the player took it 
    return coin;
}
// ----- EX. 3 : board ------------
