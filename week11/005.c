#include <stdio.h>
#include <string.h>

int main(void){
	
	char word[15];
	int i;
	FILE *fp;
	fp = fopen("sample.txt", "w");
	
	for(i =0; i<3; i++ )
	{
	 printf("Input a word:");
	 scanf("%s", &word);
  
	 
	 fprintf(fp,"%s\n",word);
  
	}
	
	fclose(fp);
}
