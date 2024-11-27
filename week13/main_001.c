#include <stdio.h>

struct student {
  int    ID;
  char   name[20];
  float  grade;
}; 

int main (void){
  struct student s1 = {23, "AYOUNGCHO", 4.3};
  printf("Input ID :  ");
  scanf("%d", &s1.ID);
  printf("Input NAME: ");
  scanf("%s", &s1.name);
  printf("Input GRADE:");
  scanf("%6f", &s1.grade);


  printf("ID : %d\n", s1.ID);
  printf("NAME: %s\n", s1.name);
  printf("GRADE: %6f\n", s1.grade);

  return 0;
}
