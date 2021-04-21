//file name: main.c

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "scoretable.h"

int main()
{
	int persons=0,i; //目前的人數(從0開始記)
	int Score[1000]={0}; //儲存分數
	int Select;//行動選項 
	int save_persons[1000]={0}; //用來儲存排序好的人數的陣列 以學號排序用 
	int save_persons2[1000]={0};//用來儲存排序好的人數的陣列 以分數排序用 
	int len=0;//判斷字串長度 
	double Q1,Q2,Q3;//四分位數 
	double sum=0;//分數總和 
	char SID[1000][1000]={{0}};//儲存學號 
	char SubjectName[1000]="",ProfessorName[1000]="";//科目名稱與教授姓名 
	
	//以下為提示使用者輸入 
	printf("Please input subject name: ");
	gets(SubjectName);
	printf("Please input professor's name: ");
	gets(ProfessorName);
	printf("Please input SID and Score (0 0 to stop input): \n");
	printf(">>");
	
	while(1)
	{   
		scanf("%s %d",SID[persons],&Score[persons]);//儲存學號 分數 
		len=strlen(SID[persons]);//取得字串長度 
		if(strcmp(SID[persons],"0")==0&&Score[persons]==0)//當使用者輸入0 0時 終止輸入 進入下個步驟 
			break;
		while(SID[persons][0]>90||SID[persons][0]<65||len!=8)//判斷使用者是否輸入大寫字母+7個數字 
		{
			//提示使用者輸入錯誤 並給予重新輸入 
			printf("Illegal input\n");
			printf(">>");
			scanf("%s %d",SID[persons],&Score[persons]);
			len=strlen(SID[persons]);//取得字串長度 
		}
		while(Score[persons]>100||Score[persons]<0)//判斷使用者輸入的分數是否為0~100 
		{
			//提示使用者輸入錯誤 並給予重新輸入
			printf("Illegal input\n");
			printf(">>");
			scanf("%s %d",SID[persons],&Score[persons]);
		}
		printf(">>");
		//以下函式為 
		getSum(Score,persons);//計算分數總合 
		sum=sum+getSum(Score,persons);
    	sortBySID(SID,save_persons,persons);//以學號排序 
    	sortByScore(Score,save_persons2,persons);//以分數排序 
    	getQuartile(Score,save_persons2,persons,1);//計算四分位數 
    	getQuartile(Score,save_persons2,persons,2);
    	getQuartile(Score,save_persons2,persons,3);
    	persons++;
	}
	//計算完成後的四分位數 
	Q1=getQuartile(Score,save_persons2,persons,1);
	Q2=getQuartile(Score,save_persons2,persons,2);
	Q3=getQuartile(Score,save_persons2,persons,3);
	
	while(1)
	{
		printf("\n\nSort By (1.SID 2.Score 0.exit): ");//提示使用者行動選項 
		scanf("%d",&Select);
		if(Select==0)//如果使用者輸入0 終止程式 
			return 0;
		printf("\n\n");
		puts(SubjectName);//科目名稱
		printf("Professor: \n"); 
		puts(ProfessorName);//教授姓名 
		printf("---------------------\n");
		printf("SID          Score\n");
		if(Select==1)//如果為1時 依學號排序 
		{
			for(i=0;i<persons;i++)
			{
    			printf("%s     %d\n",SID[save_persons[i]],Score[save_persons[i]]);//列印學號 分數 
			}
			printf("---------------------\n");
			printf("Average: %.4lf\n",getAverage(sum,persons));//顯示平均成績 
			printf("Q1: %.1lf Q2: %.1lf Q3: %.1lf",Q1,Q2,Q3);//顯示四分位數 
		}
		else if(Select==2)//如果為2時 依分數排序 
		{
			for(i=0;i<persons;i++)
			{
    			printf("%s     %d\n",SID[save_persons2[i]],Score[save_persons2[i]]);//列印學號 分數 
			}
			printf("---------------------\n");
			printf("Average: %.4lf\n",getAverage(sum,persons));//顯示平均成績 
			printf("Q1: %.1lf Q2: %.1lf Q3: %.1lf",Q1,Q2,Q3);//顯示四分位數 
		}
	}
	return 0;
}

