#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int num =0;//숫자 개수를 0으로 초기설정 
	char c;
	
	
	
	printf("Input a string:");

	
	while((c= getchar())!= '\n')
	{
	   if ( '0'<= c&& c<= '9')
	      num = num +1;
	   
    }
	
	printf("The number of digits is %i",num);
	
	return 0;
}
