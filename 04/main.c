#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int answer=59;
	int i; 
	int num=1;

	do	{
		printf("Input a number : "); 
	    scanf("%d", &i);
	    
	    if(i>answer)
	    {
	    	printf("high!\n");
		}
		else if(i<answer)
		{
			printf("low!\n");
		}
		else
		{
			printf("Á¤´ä!!\n");
		}

}	while (i != answer);

  


	 
	return 0;
}
