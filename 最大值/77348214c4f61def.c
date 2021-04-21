#include <stdio.h>

int main()
{
	int n,score,max=0,i;
	score=max;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&score);
		if(score>max)
		{
			max=score;
		}
	}
	printf("score: %d",max);
}
