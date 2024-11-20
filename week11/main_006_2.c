#include <stdio.h>
#include <string.h>

void main(void){
	FILE *fp;
	char str[20];
	int n = 20;
	
	
	fp=fopen("sample.txt", "r");
	
	
	while((fgets(str, 20, fp)) != NULL)
	{   
		printf("%s", str);
	}
    fclose(fp);
}
