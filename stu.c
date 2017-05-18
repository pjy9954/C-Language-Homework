#include <stdio.h>

int main()
{
	int i=0;
	int j=0;
	while ( j <= 9 )
	{
		while ( i <= 99 )
		{
			printf("%3d", i+j);
			i += 10;
		}
	i=0;
	printf("\n");
	j++;
	}
	return 0;
}