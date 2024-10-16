#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int get_integer(int x){
	
	printf("Enter the value:");
	scanf("%i",&x);

	return x;
	
}
int factorial(int a){
	
	int res=1;
	int i;
	
	for(i=1; i<a+1; i++)
	res=res*i;
	
	return res;
}

int combination( int n, int r){
	
	int output;
	int fac_n,fac_two,fac_r;
	
	fac_n = factorial(n);
	fac_two = factorial(n-r);
	fac_r= factorial(r);
	
	output = fac_n/fac_two/fac_r;
    return output;
}

int main() 
{
	int x,y;
	int output;
	
	x=get_integer(x);
	y=get_integer(y);
	
	output= combination(x,y);
	printf("The result of C(%d, %d) is %d",x,y,output);
	return 0;
	
}
