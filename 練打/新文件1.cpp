#include<stdio.h>

int main()
{
	int i,n,a,tmd;
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		a=i%2;
		if(a==1)
		{
			tmd = tmd + i;
		}
		
	}
	tmd=tmd-1;
	printf("%d",tmd);
	return 0;
}
