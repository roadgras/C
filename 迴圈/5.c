#include <stdio.h>

/*

Description

給一個數列，將這個數列重新排列，排列規則是：奇數在前，偶數在後，且奇數由大排到小，偶數小排到大。


Input
測資有多筆，每筆測資的第一行有一個整數N，代表接下來有個N個數的數列。輸入的最後會有一個0作結尾。


Output
對於每筆測資輸出一行，照排序規則輸出數列，數列中每個數由一個空白鍵分隔，且最後沒有多餘的空白鍵。

*/

int cmp(int a,int b)
{
	int change=0;
	if(a%2==0)
	{
		if(b%2!=0)
			change=1;
		else if(b<=0&&b%2!=0)
			change=1;
		if(a%2==0&&a>b)
			change=1;
	}
	if(change==1)
		return 1;
	else if(change==0)
		return 0;
}

int main(){
	int n,i,j,tmp=0;
	while(scanf("%d",&n)&&n!=0){
		int nums[10000]={0};
		for(i=0;i<n;i++){
			scanf("%d",&nums[i]);
		}
		for(i=0;i<n-1;i++){
			for(j=0;j<n-i-1;j++){
				if(cmp(nums[j],nums[j+1])==1){
					tmp=nums[j];
					nums[j]=nums[j+1];
					nums[j+1]=tmp;
				}
			}
		} 
		for(i=0;i<=n;i++){
			for(j=0;j<=n-i-1;j++){
				if(nums[j]%2!=0&&nums[j+1]%2!=0){
					if(nums[j]<nums[j+1]){
						tmp=nums[j];
						nums[j]=nums[j+1];
						nums[j+1]=tmp;
					}
				}
			}
		}
		
		for(i=0;i<n-1;i++){
			printf("%d",nums[i]);
			printf(" ");
		}
		printf("%d\n",nums[n-1]);
	}
	return 0;
}
