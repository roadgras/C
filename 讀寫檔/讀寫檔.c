#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
	int count=0,index[100],i;
	int select,del,change,tmp=0;
	char list[100][100],yes_no;
	printf("1.讀取檔案 2.印出事項 3.新增事項 4.刪除事項 5.修改狀態 6.儲存檔案 7.結束程式\n\n");//提示選項 
	printf("----------------------------------------------------------------------------\n");
	while(1)
	{
		printf("\n請輸入選項: ");
		scanf("%d",&select);
		getchar();//吃掉空格 
		if(select==1)//讀取檔案 
		{
			count=0;
			FILE* fptr=fopen("data.csv","r");//讀檔 
			if (fptr==NULL)
				printf("Open file failed\n");//告知讀檔失敗 
			else
			{
				printf("\n讀取檔案\n\n");
				while(fscanf(fptr,"%d,%s",&index[count],list[count])!=EOF)//將data.csv的檔案讀入當前陣列 
				{
					if(index[count]==1)
						printf("已完成 %s\n",list[count]);
					else if(index[count]==0)
						printf("未完成 %s\n",list[count]);
					count++;
				}
			}
			fclose(fptr);//關閉檔案 
		}
		else if(select==2)//印出事項 
		{
			printf("\n是否印出已完成的事項?(Y/N)");
			scanf("%c",&yes_no);
			if(yes_no=='y'||yes_no=='Y')//列出已完成 
			{
				printf("\n列出已完成事項\n\n");
				for(i=0;i<count;i++)
				{
					if(index[i]==1)
						printf("已完成 %s\n",list[i]);
				}
			}
			else if(yes_no=='n'||yes_no=='N')//列出未完成 
			{
				printf("\n列出未完成事項\n\n");
				for(i=0;i<count;i++)
				{
					if(index[i]==0)
						printf("未完成 %s\n",list[i]);
				}
			}
		}
		else if(select==3)//新增事項 
		{
			printf("\n新增事項 請輸入事項:");
			gets(list[count]);
			index[count]=0;
			count++;
		}
		else if(select==4)//刪除事項 
		{
			printf("\n刪除事項 請選擇要刪除第幾項:");
			scanf("%d",&del);
			for(i=del;i<count;i++)//往前覆蓋 總數-1 
			{
				strcpy(list[i-1],list[i]);
			}
			count--;
			printf("\n刪除完成\n");
		}
		else if(select==5)//修改檔案 
		{
			printf("\n修改狀態 請選擇要修改第幾項:");
			scanf("%d",&change);
			printf("\n選擇要修改的狀態(1完成 0未完成):");
			scanf("%d",&index[change-1]);
			printf("\n修改完成\n");
		}
		else if(select==6)//儲存檔案 
		{
			FILE* wptr=fopen("data.csv","w");//w寫入 
			if(wptr==NULL)
				printf("Open file failed\n");
			for(i=0;i<count;i++)
			{
				fprintf(wptr,"%d,%s\n",index[i],list[i]);//依序將陣列內容依照csv 的格式輸出到data.csv檔 
			}
			fclose(wptr);//關閉檔案 
			if(wptr!=NULL)
				printf("\n儲存完成\n");
		}
		else if(select==7)
			break;
	}
	printf("\n結束程式\n");
	return 0;
}
