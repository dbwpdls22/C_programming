#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	FILE *fp;
	char word[100];
	char filename[100];
	int input[100];
	
	printf("file name: ");
	scanf("%s", filename);
	
	fp=fopen(filename,"r");
	
	printf("input a word to find : ");
	scanf("%s", word);
	
	while(fgets(input, 100, fp) != NULL)
	{
		if (strncmp(input, word, strlen(word))==0)
		//if(strncmp(input,word)==0)
		{
			printf("find a word %s\n", input);
		}
	}
	
	printf("search done\n");
	
	return 0;
	
}
