// gbv 280323

#include <stdio.h>

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
	
	printf("\n");
	
	return 0;
}


