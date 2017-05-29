#include <stdio.h>

int main()
{
	int a[10];
	int i;
	for (i = 0; i < 10; i++)
	{
		a[i] = i;
	}
	for (i = 0; i < 10; i++)
	{
		printf("%5d" , a[i]);
	}
	return 0;
}