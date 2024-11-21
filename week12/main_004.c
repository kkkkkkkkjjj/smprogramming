#include <stdio.h>

int main(void)
{
	int i;
	int grade[5];
	int *pg;
	int avg;
	
	for(i=0; i<5; i++)
	{
		printf("Input value - grade[%i] = ", i);
		scanf("%d", &grade[i]);
		pg = grade;
		avg += pg[i];
	}
	
	avg = avg/5;
	
	for(i=0; i<5; i++)
	{
	printf("grade[%i] = %d\n",i, pg[i]);
    }
	
	printf("average: %d", avg);
	
	
}

