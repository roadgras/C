#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	char **name,tmp[100],tmp2[100][100];
	int select,n=0,len=0,dic[100];
	int i,j;
	name=(char**)malloc(sizeof(char*)*n);//建立動態陣列 name
	for(i='A',j=1;i<='Z';i++,j+=2) //A=1 a=2 B=3 b=4 以此類推 
		dic[i]=j;
	for(i='a',j=2;i<='z';i++,j+=2)
		dic[i]=j;
	printf("破產版學生姓名登記系統\n"); //title
	while(select!=4) //select==4時結束 
	{
		printf("-------------------------------------------------\n");
		printf("請選擇動作(1.新增 2.印出 3.排序 4.離開): ");
		scanf("%d",&select);
		getchar(); //吃掉前面多出的空格 
		if(select==1) //select==1 新增 
		{
			n++;
			name=(char**)realloc(name,sizeof(char*)*n);//只要新增一次 在第一維加一個char*大小的空間 
			printf("\n請輸入姓名: ");
			gets(tmp);//暫存(用於計算長度) 
			len=strlen(tmp);//計算姓名長度 
			name[n-1]=(char*)malloc(sizeof(char)*len);//在第二維配置一個等同姓名長度大小的空間 
			strcpy(name[n-1],tmp);//將暫存複製進name
		}
		else if(select==2)//select==2 印出 
		{
			printf("-------------------------------------------------\n");
			printf("選擇印出目前姓名\n\n");
			for(i=0;i<n;i++)//逐一印出 
			{
				printf("%s\n",name[i]);
			}
			printf("\n");
		}
		else if(select==3)//select==3 排序 
		{
			for(i=0;i<n;i++)//將姓名轉化為A=1 a=2 B=3 b=4 以此類推 取代ASCII 
			{
				strcpy(tmp2[i],name[i]);//先將名字複製進暫存陣列裡 再將暫存陣列的英文轉化為自己建的表 取代ASCII 
				for(j=0;j<100;j++)
				{
					tmp2[i][j]=dic[tmp2[i][j]];
				}
			}
			printf("-------------------------------------------------\n");
			printf("選擇將目前的姓名排序(依照字典序排序)\n\n");
			for(i=0;i<n-1;i++)
			{
		        for(j=i+1;j<n;j++)
		        {
		            if(strcmp(tmp2[i],tmp2[j])>0)//比較暫存陣列(自定義順序 A=1 a=2 B=3 b=4 以此類推)裡的大小 
		            {
		                strcpy(tmp,name[i]);
		                strcpy(name[i],name[j]);
		                strcpy(name[j],tmp);
		            }
		        }
    		}
    		for(i=0;i<n;i++)
    		{
    			printf("%s\n",name[i]);//逐一印出以排序完成之姓名 
			}
			printf("\n已完成排序\n");
		}
	}
	//釋放記憶體 結束程式 
	for(i=0;i<n;i++)
	{
		free(name[i]);
	}
	free(name);
	return 0;
}
