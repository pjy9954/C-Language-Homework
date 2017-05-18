#include <stdio.h>

int main()
{
	int i=0;
	int j=0;
	while (i < 8)
	{
		while(j < 8)
		{
			printf("%3o", j+i);
			j++;
		}
		j=0;
		printf("\n");
		i++;
	}
	return 0;
}