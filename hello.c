// gbv 290323

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	printf("\nHello World\n");
	
	for(int c=0; c<10; c++)
	{
		for(int i=0; i<c; i++)
		{
			printf("#");
		}
		
		printf("\n");
	}
	
	printf("\nPress Enter ...\n");
	
	char ch = ' ';
	
	while(ch == ' ')
	{
		ch = getchar();
		//printf("%c", ch);
	}
	
	//printf("%c", ch);
	
	return 0;
}


