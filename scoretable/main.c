//file name: main.c

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "scoretable.h"

int main()
{
	int persons=0,i; //�ثe���H��(�q0�}�l�O)
	int Score[1000]={0}; //�x�s����
	int Select;//��ʿﶵ 
	int save_persons[1000]={0}; //�Ψ��x�s�ƧǦn���H�ƪ��}�C �H�Ǹ��Ƨǥ� 
	int save_persons2[1000]={0};//�Ψ��x�s�ƧǦn���H�ƪ��}�C �H���ƱƧǥ� 
	int len=0;//�P�_�r����� 
	double Q1,Q2,Q3;//�|����� 
	double sum=0;//�����`�M 
	char SID[1000][1000]={{0}};//�x�s�Ǹ� 
	char SubjectName[1000]="",ProfessorName[1000]="";//��ئW�ٻP�б©m�W 
	
	//�H�U�����ܨϥΪ̿�J 
	printf("Please input subject name: ");
	gets(SubjectName);
	printf("Please input professor's name: ");
	gets(ProfessorName);
	printf("Please input SID and Score (0 0 to stop input): \n");
	printf(">>");
	
	while(1)
	{   
		scanf("%s %d",SID[persons],&Score[persons]);//�x�s�Ǹ� ���� 
		len=strlen(SID[persons]);//���o�r����� 
		if(strcmp(SID[persons],"0")==0&&Score[persons]==0)//��ϥΪ̿�J0 0�� �פ��J �i�J�U�ӨB�J 
			break;
		while(SID[persons][0]>90||SID[persons][0]<65||len!=8)//�P�_�ϥΪ̬O�_��J�j�g�r��+7�ӼƦr 
		{
			//���ܨϥΪ̿�J���~ �õ������s��J 
			printf("Illegal input\n");
			printf(">>");
			scanf("%s %d",SID[persons],&Score[persons]);
			len=strlen(SID[persons]);//���o�r����� 
		}
		while(Score[persons]>100||Score[persons]<0)//�P�_�ϥΪ̿�J�����ƬO�_��0~100 
		{
			//���ܨϥΪ̿�J���~ �õ������s��J
			printf("Illegal input\n");
			printf(">>");
			scanf("%s %d",SID[persons],&Score[persons]);
		}
		printf(">>");
		//�H�U�禡�� 
		getSum(Score,persons);//�p������`�X 
		sum=sum+getSum(Score,persons);
    	sortBySID(SID,save_persons,persons);//�H�Ǹ��Ƨ� 
    	sortByScore(Score,save_persons2,persons);//�H���ƱƧ� 
    	getQuartile(Score,save_persons2,persons,1);//�p��|����� 
    	getQuartile(Score,save_persons2,persons,2);
    	getQuartile(Score,save_persons2,persons,3);
    	persons++;
	}
	//�p�⧹���᪺�|����� 
	Q1=getQuartile(Score,save_persons2,persons,1);
	Q2=getQuartile(Score,save_persons2,persons,2);
	Q3=getQuartile(Score,save_persons2,persons,3);
	
	while(1)
	{
		printf("\n\nSort By (1.SID 2.Score 0.exit): ");//���ܨϥΪ̦�ʿﶵ 
		scanf("%d",&Select);
		if(Select==0)//�p�G�ϥΪ̿�J0 �פ�{�� 
			return 0;
		printf("\n\n");
		puts(SubjectName);//��ئW��
		printf("Professor: \n"); 
		puts(ProfessorName);//�б©m�W 
		printf("---------------------\n");
		printf("SID          Score\n");
		if(Select==1)//�p�G��1�� �̾Ǹ��Ƨ� 
		{
			for(i=0;i<persons;i++)
			{
    			printf("%s     %d\n",SID[save_persons[i]],Score[save_persons[i]]);//�C�L�Ǹ� ���� 
			}
			printf("---------------------\n");
			printf("Average: %.4lf\n",getAverage(sum,persons));//��ܥ������Z 
			printf("Q1: %.1lf Q2: %.1lf Q3: %.1lf",Q1,Q2,Q3);//��ܥ|����� 
		}
		else if(Select==2)//�p�G��2�� �̤��ƱƧ� 
		{
			for(i=0;i<persons;i++)
			{
    			printf("%s     %d\n",SID[save_persons2[i]],Score[save_persons2[i]]);//�C�L�Ǹ� ���� 
			}
			printf("---------------------\n");
			printf("Average: %.4lf\n",getAverage(sum,persons));//��ܥ������Z 
			printf("Q1: %.1lf Q2: %.1lf Q3: %.1lf",Q1,Q2,Q3);//��ܥ|����� 
		}
	}
	return 0;
}

