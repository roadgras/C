#include <stdio.h>

/*

Description

���@�ӼƦC�A�N�o�ӼƦC���s�ƦC�A�ƦC�W�h�O�G�_�Ʀb�e�A���Ʀb��A�B�_�ƥѤj�ƨ�p�A���Ƥp�ƨ�j�C


Input
���꦳�h���A�C�����ꪺ�Ĥ@�榳�@�Ӿ��N�A�N���U�Ӧ���N�Ӽƪ��ƦC�C��J���̫�|���@��0�@�����C


Output
���C�������X�@��A�ӱƧǳW�h��X�ƦC�A�ƦC���C�ӼƥѤ@�Ӫť�����j�A�B�̫�S���h�l���ť���C

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
