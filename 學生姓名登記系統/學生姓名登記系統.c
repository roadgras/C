#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	char **name,tmp[100],tmp2[100][100];
	int select,n=0,len=0,dic[100];
	int i,j;
	name=(char**)malloc(sizeof(char*)*n);//�إ߰ʺA�}�C name
	for(i='A',j=1;i<='Z';i++,j+=2) //A=1 a=2 B=3 b=4 �H������ 
		dic[i]=j;
	for(i='a',j=2;i<='z';i++,j+=2)
		dic[i]=j;
	printf("�}�����ǥͩm�W�n�O�t��\n"); //title
	while(select!=4) //select==4�ɵ��� 
	{
		printf("-------------------------------------------------\n");
		printf("�п�ܰʧ@(1.�s�W 2.�L�X 3.�Ƨ� 4.���}): ");
		scanf("%d",&select);
		getchar(); //�Y���e���h�X���Ů� 
		if(select==1) //select==1 �s�W 
		{
			n++;
			name=(char**)realloc(name,sizeof(char*)*n);//�u�n�s�W�@�� �b�Ĥ@���[�@��char*�j�p���Ŷ� 
			printf("\n�п�J�m�W: ");
			gets(tmp);//�Ȧs(�Ω�p�����) 
			len=strlen(tmp);//�p��m�W���� 
			name[n-1]=(char*)malloc(sizeof(char)*len);//�b�ĤG���t�m�@�ӵ��P�m�W���פj�p���Ŷ� 
			strcpy(name[n-1],tmp);//�N�Ȧs�ƻs�iname
		}
		else if(select==2)//select==2 �L�X 
		{
			printf("-------------------------------------------------\n");
			printf("��ܦL�X�ثe�m�W\n\n");
			for(i=0;i<n;i++)//�v�@�L�X 
			{
				printf("%s\n",name[i]);
			}
			printf("\n");
		}
		else if(select==3)//select==3 �Ƨ� 
		{
			for(i=0;i<n;i++)//�N�m�W��Ƭ�A=1 a=2 B=3 b=4 �H������ ���NASCII 
			{
				strcpy(tmp2[i],name[i]);//���N�W�r�ƻs�i�Ȧs�}�C�� �A�N�Ȧs�}�C���^����Ƭ��ۤv�ت��� ���NASCII 
				for(j=0;j<100;j++)
				{
					tmp2[i][j]=dic[tmp2[i][j]];
				}
			}
			printf("-------------------------------------------------\n");
			printf("��ܱN�ثe���m�W�Ƨ�(�̷Ӧr��ǱƧ�)\n\n");
			for(i=0;i<n-1;i++)
			{
		        for(j=i+1;j<n;j++)
		        {
		            if(strcmp(tmp2[i],tmp2[j])>0)//����Ȧs�}�C(�۩w�q���� A=1 a=2 B=3 b=4 �H������)�̪��j�p 
		            {
		                strcpy(tmp,name[i]);
		                strcpy(name[i],name[j]);
		                strcpy(name[j],tmp);
		            }
		        }
    		}
    		for(i=0;i<n;i++)
    		{
    			printf("%s\n",name[i]);//�v�@�L�X�H�Ƨǧ������m�W 
			}
			printf("\n�w�����Ƨ�\n");
		}
	}
	//����O���� �����{�� 
	for(i=0;i<n;i++)
	{
		free(name[i]);
	}
	free(name);
	return 0;
}
