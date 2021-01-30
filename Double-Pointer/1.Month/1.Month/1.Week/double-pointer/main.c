#include <stdio.h>
#include <stdlib.h>
#define LENGHT 3
char *word[LENGHT],*wordTemp[LENGHT];
int main(int argc, char *argv[]) {
	
	word[0]="Ali";
	word[1]="Berna";
	word[2]="Cem";
	char *firstPointer;
	char **doublePointer;int i;
	//firstPointer=word;
	printf("\n------------\n");
	
	for( i=0;i<LENGHT;i++)
	{
		doublePointer=word+i;
		firstPointer=*doublePointer;
		while(*firstPointer!=0)
		{
			printf("%c",*firstPointer);
			firstPointer+=1;
			
		}
		printf("\n");
	}
	return 0;
}
