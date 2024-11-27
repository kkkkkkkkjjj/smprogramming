#include <stdio.h>
#define STUDENTNUM 4

struct student{
  int ID;
  int score;
};

void main(void){
  struct student s[STUDENTNUM];
  int i;
  float average;

  for(i=0; i<STUDENTNUM; i++)
  {
   printf("Input the ID:");
   scanf("%d", &s[i].ID);
   printf("Input the score:");
   scanf("%d", &s[i].score);
  } 

  average = ((s[0].score + s[1].score + s[2].score + s[3].score)/4.0);

  int max_score;
  int max_ID;
  max_score = s[0].score;
  max_ID = s[0].ID;

  if(s[1].score > max_score)
  {
    max_score = s[1].score;
    max_ID = s[1].ID;
  }

  if(s[2].score > max_score)
  {
    max_score = s[2].score;
    max_ID = s[2].ID;
  }

  if(s[3].score > max_score)
  {
    max_score = s[3].score;
    max_ID = s[3].ID;
  }

  printf("The average of the score:%6f\n",average);
  printf("The highest score - ID : %d, score : %d", max_ID, max_score);

}
