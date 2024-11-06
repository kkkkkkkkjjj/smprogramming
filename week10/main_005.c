#include <stdio.h>
#define ROWS  3
#define COLS  3

void addMatrix(int X[ROWS][COLS],int Y[ROWS][COLS],int Z[ROWS][COLS])
{
	 int i,j;
	 
	 for(i=0; i<ROWS; i++)
	 {  
	    for(j=0; j<COLS; j++)
	 	
		 Z[i][j]= X[i][j]+Y[i][j];	 
	    
	 }
	 
	 
}

void printMatrix(int c[ROWS][COLS])
{   
    int k;
    for(k=0; k<ROWS; k++)
	{
	printf("%d %d %d\n",c[k][0],c[k][1],c[k][2]);
    }
    
}


int main(void)
{
	int A[ROWS][COLS] = {
	   {2,3,0},
	   {8,9,1},
	   {7,0,5}};
	   
	int B[ROWS][COLS] = {
	   {1,0,0},
	   {0,1,0},
	   {0,0,1}};
	int C[ROWS][COLS];
	
	addMatrix(A,B,C);
	printMatrix(C);
	
	return 0;
	
	
}
