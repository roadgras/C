#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
	int count=0,index[100],i;
	int select,del,change,tmp=0;
	char list[100][100],yes_no;
	printf("1.Ū���ɮ� 2.�L�X�ƶ� 3.�s�W�ƶ� 4.�R���ƶ� 5.�ק窱�A 6.�x�s�ɮ� 7.�����{��\n\n");//���ܿﶵ 
	printf("----------------------------------------------------------------------------\n");
	while(1)
	{
		printf("\n�п�J�ﶵ: ");
		scanf("%d",&select);
		getchar();//�Y���Ů� 
		if(select==1)//Ū���ɮ� 
		{
			count=0;
			FILE* fptr=fopen("data.csv","r");//Ū�� 
			if (fptr==NULL)
				printf("Open file failed\n");//�i��Ū�ɥ��� 
			else
			{
				printf("\nŪ���ɮ�\n\n");
				while(fscanf(fptr,"%d,%s",&index[count],list[count])!=EOF)//�Ndata.csv���ɮ�Ū�J��e�}�C 
				{
					if(index[count]==1)
						printf("�w���� %s\n",list[count]);
					else if(index[count]==0)
						printf("������ %s\n",list[count]);
					count++;
				}
			}
			fclose(fptr);//�����ɮ� 
		}
		else if(select==2)//�L�X�ƶ� 
		{
			printf("\n�O�_�L�X�w�������ƶ�?(Y/N)");
			scanf("%c",&yes_no);
			if(yes_no=='y'||yes_no=='Y')//�C�X�w���� 
			{
				printf("\n�C�X�w�����ƶ�\n\n");
				for(i=0;i<count;i++)
				{
					if(index[i]==1)
						printf("�w���� %s\n",list[i]);
				}
			}
			else if(yes_no=='n'||yes_no=='N')//�C�X������ 
			{
				printf("\n�C�X�������ƶ�\n\n");
				for(i=0;i<count;i++)
				{
					if(index[i]==0)
						printf("������ %s\n",list[i]);
				}
			}
		}
		else if(select==3)//�s�W�ƶ� 
		{
			printf("\n�s�W�ƶ� �п�J�ƶ�:");
			gets(list[count]);
			index[count]=0;
			count++;
		}
		else if(select==4)//�R���ƶ� 
		{
			printf("\n�R���ƶ� �п�ܭn�R���ĴX��:");
			scanf("%d",&del);
			for(i=del;i<count;i++)//���e�л\ �`��-1 
			{
				strcpy(list[i-1],list[i]);
			}
			count--;
			printf("\n�R������\n");
		}
		else if(select==5)//�ק��ɮ� 
		{
			printf("\n�ק窱�A �п�ܭn�ק�ĴX��:");
			scanf("%d",&change);
			printf("\n��ܭn�ק諸���A(1���� 0������):");
			scanf("%d",&index[change-1]);
			printf("\n�ק粒��\n");
		}
		else if(select==6)//�x�s�ɮ� 
		{
			FILE* wptr=fopen("data.csv","w");//w�g�J 
			if(wptr==NULL)
				printf("Open file failed\n");
			for(i=0;i<count;i++)
			{
				fprintf(wptr,"%d,%s\n",index[i],list[i]);//�̧ǱN�}�C���e�̷�csv ���榡��X��data.csv�� 
			}
			fclose(wptr);//�����ɮ� 
			if(wptr!=NULL)
				printf("\n�x�s����\n");
		}
		else if(select==7)
			break;
	}
	printf("\n�����{��\n");
	return 0;
}
