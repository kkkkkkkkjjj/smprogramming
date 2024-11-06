#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define SIZE 5

int main(void)
{
  int i;
  int grade[SIZE];
  int score[SIZE];
  
   srand((unsigned)time(NULL));
 
  for(i=0; i<SIZE; i++)
    {
	grade[i] = rand()%100;
    score[i] = grade[i];
    }
    
  for(i=0; i<SIZE; i++)
    
     printf("score[%d] = %d\n",i,score[i]);
    
  return 0;
}
