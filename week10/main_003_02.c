#include <stdio.h>
#include <stdlib.h>
#define SIZE 5

 int main(void)
 {
 	int i;
 	int a[SIZE]= {1,2,3,4,5};
 	int b[SIZE]= {1,2,3,7,10};
 	int flag_same =1;
 	
 	for(i=0; i<SIZE;i++)
 	{
 		if(a[i] != b[i])
 		{
		flag_same = 0;
 		printf("�迭[%d]�� ����  �ٸ� �迭 ���� �����ϴ�.\n", i);
 	    }
		else
		flag_same=1;
 		
	 }
 }
