#include <stdio.h>
#include <stdlib.h>
#include<string.h>
#include <time.h>

int DetectDuplicate(char input[])//�s�W�禡�P�_�ϥΪ̬O�_���ƿ�J 
{
	int i,j,isUsed=0;
	for(i=0;i<4;i++)//�ϰj��v���ˬd�Ʀr�O�_���� 
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
	if(isUsed==1)//���Ʀ^��1 �Ϥ���0 
		return 1;
	else
		return 0;
}

int DetectStr(char input[])//�s�W�禡�P�_�O�_�|�ӼƦr
{
	return strlen(input)!=4;//�D�|�ӼƦr�ɦ^��1 �Ϥ���0 
}

int DetectSymbol(char input[])//�s�W�禡�P�_�O�_���D�Ʀr
{
	int i,len,Symbol=0;
	len=strlen(input);
	for(i=0;i<4;i++)//�ϥΰj��v�@�ˬd 
	{
		if(input[i]<48||input[i]>57)
			Symbol=1;
	}
	if(Symbol==1)//�D�Ʀr�^��1 �Ϥ���0 
		return 1;
	return 0;
}

int main()//�D�禡 
{
	srand(time(NULL));//�üƲ��� 
	char input[4],c,ans[4];
	int r,n,counter[10]={0};
	int i,j,k;
	int A,B;
	for(i=1;i<=4;i++)//�ϥΰO�ƪk�˴��O�_�����ͭ��ƼƦr 
	{
		do
		{
			n=rand()%10;
			ans[i-1]=n+'0';
		}while(counter[n-1]!=0);
		counter[n-1]++;
	}
	
	while(A!=4)//���ӧQ�� �N����i�� �ӧQ����4A 
	{
		A=0;
		B=0;
		printf("Please enter your number: ");
		gets(input);//�N�Ʀr�O�s���r�� 
		while(DetectDuplicate(input))//�ˬd�Ʀr�O�_���� 
		{
			printf("\"illeagal answer\"\n");
			printf("Please enter your number: ");
			gets(input);
		}
		
		while(DetectStr(input))//�ˬd�O�_���|��� 
		{
			printf("\"illeagal answer\"\n");
			printf("Please enter your number: ");
			gets(input);
		}
		
		while(DetectSymbol(input))//�ˬd�O�_���D�Ʀr 
		{
			printf("\"illeagal answer\"\n");
			printf("Please enter your number: ");
			gets(input);
		}

		for(j=0;j<4;j++)
		{
			if(input[j]==ans[j])//�Y��m�Ʀr�ҬۦP A+1 
				A++;
			else
			{
				for(k=0;k<4;k++)//�Y�Ʀr�ۦP ��m���P B+1
				{
					if(input[j]==ans[k])
						B++;
				}
			}
		}
		
		printf("%dA%dB\n",A,B);//��ܶi�� 
	
		if(A==4)//4A���ܳӧQ 
		{
			printf("\nYou Win\n");
		}
	}
	return 0;
}

