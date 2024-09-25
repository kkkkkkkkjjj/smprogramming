#include <stdio.h>

int main (void){
	
	char i;
	char n;
	
	printf("enter a character:");
	scanf("%c",&i);
	
	n = i + 1;
	printf("the next charcter of %c(%i) is %c(%i)",i,i,n,n);
    
	return 0;	
}
