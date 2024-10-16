#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int x;
	int answer = 50;
	int trial=1;
	
	do
	{
	 printf("Guess a number:");
	 scanf("%d",&x);
	  if(x>answer)
	    {
		trial++;
		printf("High!\n");
	    }
	  else if(x<answer)
	    {
		trial++;
		printf("Low!\n");
	    }
	}while(x != answer);
	
	printf("Congratulation! Trials:%d",trial);
	
	return 0;
}
