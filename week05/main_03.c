#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int a;
	printf("Input the second:");
	scanf("%i",&a);
	
	printf("The time is %d : %d",a/60, a%60);
	return 0;
}