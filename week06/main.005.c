#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int x,y;
	char a;
    int output;
	
	printf("Enter the calculation:");
	scanf("%d%c%d",&x,&a,&y);
	
	if(a== '+') 
	  output = x + y;
	else if(a == '-')
	  output = x - y;
	else if(a == '*')
	  output = x * y;
	else if (a == '/')
	  output = x / y;
		
	
	 
    printf("= %d", output);
	return 0;
}
