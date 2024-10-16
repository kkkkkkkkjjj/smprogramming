#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int sumTwo(int a, int b){
	int output;
	output = a+b;
	return output;
}

int square(int n){
	int output;
	output = (n*n);
	return output;
}

int get_max(int x, int y)
{
	int output;
	if (x>y)
	  output = x;
	else
	  output = y;
	
	return output;
}
int main() {
	
	int c,d;
	int Sum, Square, Max;
	
	printf("Enter the integers :");
	scanf("%d%d", &c,&d);
	
	Sum = sumTwo(c,d);
	Square = square(c);
	Max = get_max(c,d);
	
	printf("Result - Sum: %d, Square :%d,Max :%d",Sum, Square, Max);
	
	return 0;
}
