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
l 0~9隨機整數：rand() % 10
l 1~6隨機整數：rand() % 6 + 1
l -10~10隨機整數：rand() % 21 – 10
l 以此類推
*/
