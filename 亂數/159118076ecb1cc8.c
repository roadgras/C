#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>

int main()
{
	int i,nums;
	srand(time(NULL));
	for(i=0;i<10;i++)
	{
		nums=1+rand()%10;
		printf("%d ",nums);
	}
}

/*
l 0~9�H����ơGrand() % 10
l 1~6�H����ơGrand() % 6 + 1
l -10~10�H����ơGrand() % 21 �V 10
l �H������
*/
