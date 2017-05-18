#include <stdio.h>

int main()
/* 0부터 99까지의 정수를 출력하세요. 단, 한 줄에 10개씩 수직으로 출력합니다.*/
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