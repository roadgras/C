#include <stdio.h>
#include <stdlib.h>
#include<string.h>
#include <time.h>
#include <unistd.h>

int main()
{
	int humanLv,humanHp,humanAtk,humanRe;
	int monsterLv,monsterHp,monsterAtk;
	int ones1,ones2,ones3,ones4,ones5,i,x;
	for(i=0;i<1000;i++)
	{
		int b = 0;
		system("CLS");//�e���M��
		printf("�п�ܫi�̪�����LV:1~99(����)\n\n�п��:");
		fflush(stdin);//�M����J�w�İ� 
		scanf("%d",&b);
		if(b<100&&b>0)
		{
			humanLv=b;
			break;
		}
		else
		{
			printf("�Э��s��J����\n");
			continue;
		}	
	}
	
	
	system("CLS");//�e���M��


	srand(time(NULL));//�H���ü� 

	for(i=0;i<2;i++)
	{
		if(i==0)
		ones2=rand()%10;
		if(i==1)
		ones3=rand()%10-10;
		usleep(10000);
	}
	
		
	
	humanHp = 100;humanRe = 40;humanAtk = 20;//�i�̼ƾ�
	monsterHp = 250;monsterAtk = 20;//�Ǫ��ƾ� 
	humanHp = humanHp*humanLv;
	humanAtk = humanAtk*humanLv;
	humanRe = humanRe*humanLv;
	monsterLv = humanLv+ones2*humanLv+ones3*humanLv/2;
	
	if(monsterLv<0)
	monsterLv = 1;
	
	monsterHp = monsterHp*monsterLv;
	monsterAtk = monsterAtk*monsterLv;
	
	
	
	
	int termination;
	termination = 1;
	while(termination)
	{
		if(monsterHp<=0)//��ӱ��� 
		{
			termination = 0;
			system("CLS");
			printf("���߫i�̥��ѤF���~");
			sleep(3);
			break;
		}
		if(humanHp<=0)
		{
			termination = 0;
			system("CLS");
			printf("�i�̳Q�]�J�Ǫ����{�l");
			sleep(3);
			break;
		}
		if(humanHp<=0&&monsterHp<=0)
		{
			termination = 0;
			system("CLS");
			printf("�i�̸�Ǫ��@�_�P�k��ɤF");
			sleep(3);
			break;
		}
		
		
				
		printf("�i�̪����� = %d\n\n",humanLv);
		printf("�i�̪���q = %d\n\n",humanHp);
		printf("�i�̪������O = %d\n\n",humanAtk);
		printf("�i�̪��^�_�O = %d\n\n",humanRe);	
		printf("�Ǫ������� = %d\n\n",monsterLv);
		printf("�Ǫ�����q = %d\n\n",monsterHp);
		printf("�Ǫ��������O = %d\n\n",monsterAtk);
		int a = 0;
		printf("1.���� 2.�^�_ 3.�k�](���Ѧ��`)\n\n�п�ܡG");
		scanf("%d", &a);
		ones4=rand()%10;
		switch(a)
		{
		 	case 1:
		 		puts("\n����");
		 		monsterHp = monsterHp - humanAtk;
		 		if(ones4>7)
				 {
				 	monsterHp = monsterHp - humanAtk;
				 	printf("(����)\n");
				 }
		 		break;
		 	case 2:
		 		puts("\n�^�_");
		 		humanHp = humanHp +  humanRe;
		 		if(ones4>7)
				 {
				 	humanHp = humanHp +  humanRe;
				 	printf("(����)\n");
				 }
		 		break;
			case 3:
				puts("\n�k�]\n");
				if(ones4>7)
				{
					system("CLS");
					printf("\n�k�]���\ ");
					termination = 0;
				}
				humanHp = 0;
				printf("\n�k�]���� ");
				sleep(1);
				break;
		 	default:
		 		puts("\n�Э��s��J\n");
		 		fflush(stdin);//�M����J�w�İ�
		 		system("CLS");
		 		continue;		 		
		}
		
				
		
		ones1=1+rand()%15;//�Ǫ������ 
		if(ones1<=5)
		{
			printf("�Ǫ������n�`�y���F");
			if(ones1==5)
			{
				humanHp = humanHp-monsterAtk;
				printf("�������ˮ`");
			}
			else
			{
				printf("�@�몺�ˮ`");
			}
			humanHp = humanHp-monsterAtk;
			sleep(1);
		} 
		if(ones1>5&&ones1<=10)
		{
			printf("�Ǫ��^�_�F");
			if(ones1==10)
			{
				monsterHp = monsterHp + monsterHp/20;
				printf("�@��HP"); 
			}
			else
			{
				printf("�ֶqHP"); 
			}
			monsterHp = monsterHp + monsterHp/20;
			sleep(1); 
		}
		if(ones1>10&&ones1<=15)
		{
			printf("�Ǫ��Ĩ��ձ�����");
			if(ones1<=13)
			{
				humanHp = humanHp-monsterAtk/2;
				printf("�y���F���L���ˮ`"); 
			}
			else
			{
				printf("�S���y���ˮ`");
			}
			sleep(1);
		}
		system("CLS");
	}
	
	
	return 0;
} 

