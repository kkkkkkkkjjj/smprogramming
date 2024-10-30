#include <stdio.h>


/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void f(void);

int i;
int main(void) 
{
	for(i=0;i<5;i++)
	{
		f();
	}
	printf("i : %d",i);
	return 0;
}
 
 void f(void)
 {
 	for(i=0; i<10; i++)
 	printf("#");
 }
