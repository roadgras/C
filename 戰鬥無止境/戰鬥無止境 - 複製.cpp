#include <stdio.h>
#include <stdlib.h>
#include<string.h>
#include <time.h>
#include <unistd.h>

int humanLv = 1,exp = 10,humanHp,humanAtk,humanRe,upNeed = 99,human1,human2,human3;

void people()
{
	if(exp>upNeed)
	{
		if(human1==1)
		humanHp = 200;humanRe = 40;humanAtk = 25;
		if(human2==1)
		humanHp = 100;humanRe = 50;humanAtk = 40;
		if(human3==1)
		humanHp = 400;humanRe = 40;humanAtk = 15;
		humanLv = humanLv+1;
		humanHp = humanHp*humanLv;
	    humanAtk = humanAtk*humanLv;
	    humanRe = humanRe*humanLv;
	    upNeed = upNeed*humanLv*6/5;
	    exp = 0;
	}
}

int main()
{
	int human1,human2,human3;
	int monsterLv,monsterHp,monsterAtk;
	int ones1,ones2,ones3,ones4,ones5,i,x;
	int stop = 1;
	while(stop)
	{
		int b = 0;
		system("CLS");//�e���M��
		printf("�п�ܫi�̪��ر�\n\n1.�H��  2.���F  3.�~�H\n\n�п��:");
		fflush(stdin);//�M����J�w�İ�
		scanf("%d",&b);
		 
		switch(b)
		{
		 	case 1:
		 		system("CLS");
		 		puts("�A��ܤF�H��");
		 		human1 = 1;
		 		humanHp = 200;humanRe = 40;humanAtk = 25;//�i�̼ƾ�
		 		sleep(1);
		 		stop = 0;
		 		break;
		 	case 2:
		 		system("CLS");
		 		puts("�A��ܤF���F");
		 		human2 = 1;
		 		humanHp = 100;humanRe = 50;humanAtk = 40;//�i�̼ƾ�
		 		sleep(1);
		 		stop = 0;
		 		break;
			case 3:
				system("CLS");
				puts("�A��ܤF�~�H\n");
				human3 = 1;
				humanHp = 400;humanRe = 40;humanAtk = 15;//�i�̼ƾ�
				sleep(1);
				stop = 0;
				break;
		 	default:
		 		fflush(stdin);//�M����J�w�İ�
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
	
		
	
	monsterHp = 1;monsterAtk = 20;//�Ǫ��ƾ� 
	monsterLv = humanLv+ones2*humanLv+ones3*humanLv/2;
	
	if(monsterLv<0)
	monsterLv = 1;
	
	monsterHp = monsterHp*monsterLv;
	monsterAtk = monsterAtk*monsterLv;
	
	
	
	
	int termination;
	termination = 1;
	while(termination)
	{
		if(monsterHp<=0)
		{
			people();
			exp = exp+10*10*monsterLv;
			printf("��o�g��%d",exp);
			sleep(1);
			system("CLS");//�e���M��
			monsterHp = 1;monsterAtk = 20;//�Ǫ��ƾ� 
	        monsterLv = humanLv+ones2*humanLv+ones3*humanLv/2;
	
         	if(monsterLv<0)
         	monsterLv = 1;
	
         	monsterHp = monsterHp*monsterLv;
	        monsterAtk = monsterAtk*monsterLv;
			
		}
		if(humanHp<=0)//���ѱ���
		{
			termination = 0;
			system("CLS");
			printf("�i�̳Q�]�J�Ǫ����{�l");
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


