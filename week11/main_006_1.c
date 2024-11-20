#include <stdio.h>
#include <string.h>

int main(void){
    FILE *fp;
    char c;
    fp = fopen("sample.txt", "r");
   
    if(fp==NULL)
    {
    	printf("파일을 못열음\n");
	}
	
    
    
    while ((c = fgetc(fp)) != EOF )
    {   
		putchar(c);
	}
	
    fclose(fp);
}
