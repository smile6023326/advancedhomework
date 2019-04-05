#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() 
{
	char i;
	for (i=65; i<=90; i++)
	
	{
		printf("%c ",i);
	}
	
	printf("\n");
	for (i=97; i<=122; i++)
	
	{
		printf("%c ",i);
	}
	
	printf("\n");
	system ("pause");
	return 0;
}
