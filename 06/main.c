#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void swap(int *a, int *b)
{
	int temp;
	
	temp=*a;
	*a=*b;
	*b=temp;
	
	return;
}

int main(int argc, char *argv[])
{
	int x=10;
	int y=20;
    
    
    swap(&x,&y);
    printf("x:%i\n",x);
    printf("y:%i\n",y);
    
    
	return 0;
}
