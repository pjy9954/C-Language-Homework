#include <stdio.h>

int main()
{
	/* 문제 : while 문을 for 문으로 바꾸기
	int i, nSum = 0;
	i = 1;
		while ( i <= 100 )
		{
			nSum += i;
			i++;
		}
	printf("%d\n", nSum );
	return 0; */
	int i, nSum = 0;
	for ( i = 1; i <= 100; i++)
	{
		nSum += i;
	}
	printf("%d\n", nSum);
	return 0;
}