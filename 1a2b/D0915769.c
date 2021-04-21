#include <stdio.h>
#include <stdlib.h>
#include<string.h>
#include <time.h>

int DetectDuplicate(char input[])//新增函式判斷使用者是否重複輸入 
{
	int i,j,isUsed=0;
	for(i=0;i<4;i++)//使迴圈逐項檢查數字是否重複 
	{
		for(j=0;j<i;j++)
		{
			if(input[i]==input[j])
			{
				isUsed=1;
				break;
			}	
		}
	}
	if(isUsed==1)//重複回傳1 反之為0 
		return 1;
	else
		return 0;
}

int DetectStr(char input[])//新增函式判斷是否四個數字
{
	return strlen(input)!=4;//非四個數字時回傳1 反之為0 
}

int DetectSymbol(char input[])//新增函式判斷是否有非數字
{
	int i,len,Symbol=0;
	len=strlen(input);
	for(i=0;i<4;i++)//使用迴圈逐一檢查 
	{
		if(input[i]<48||input[i]>57)
			Symbol=1;
	}
	if(Symbol==1)//非數字回傳1 反之為0 
		return 1;
	return 0;
}

int main()//主函式 
{
	srand(time(NULL));//亂數產生 
	char input[4],c,ans[4];
	int r,n,counter[10]={0};
	int i,j,k;
	int A,B;
	for(i=1;i<=4;i++)//使用記數法檢測是否有產生重複數字 
	{
		do
		{
			n=rand()%10;
			ans[i-1]=n+'0';
		}while(counter[n-1]!=0);
		counter[n-1]++;
	}
	
	while(A!=4)//當未勝利時 將持續進行 勝利條件為4A 
	{
		A=0;
		B=0;
		printf("Please enter your number: ");
		gets(input);//將數字保存成字串 
		while(DetectDuplicate(input))//檢查數字是否重複 
		{
			printf("\"illeagal answer\"\n");
			printf("Please enter your number: ");
			gets(input);
		}
		
		while(DetectStr(input))//檢查是否為四位數 
		{
			printf("\"illeagal answer\"\n");
			printf("Please enter your number: ");
			gets(input);
		}
		
		while(DetectSymbol(input))//檢查是否有非數字 
		{
			printf("\"illeagal answer\"\n");
			printf("Please enter your number: ");
			gets(input);
		}

		for(j=0;j<4;j++)
		{
			if(input[j]==ans[j])//若位置數字皆相同 A+1 
				A++;
			else
			{
				for(k=0;k<4;k++)//若數字相同 位置不同 B+1
				{
					if(input[j]==ans[k])
						B++;
				}
			}
		}
		
		printf("%dA%dB\n",A,B);//顯示進度 
	
		if(A==4)//4A提示勝利 
		{
			printf("\nYou Win\n");
		}
	}
	return 0;
}

