#include <stdio.h>

int main()
{
	/*       -힌트
	int h=0;
	int g=2;
	for(h = 0; h < 5; h++ )
	{
		printf("%3d", h *= g);
	}	*/
	int i=0;
	int j=0;
	while ( i <= 5 )
	{
		while( j <= 5 )
		{
			printf("%7d", j);
			j++;
		}
		j=0;
		printf("\n");
		i++; 
	}
	return 0;
}