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
		system("CLS");//畫面清空
		printf("請選擇勇者的種族\n\n1.人類  2.精靈  3.獸人\n\n請選擇:");
		fflush(stdin);//清除輸入緩衝區
		scanf("%d",&b);
		 
		switch(b)
		{
		 	case 1:
		 		system("CLS");
		 		puts("你選擇了人類");
		 		human1 = 1;
		 		humanHp = 200;humanRe = 40;humanAtk = 25;//勇者數據
		 		sleep(1);
		 		stop = 0;
		 		break;
		 	case 2:
		 		system("CLS");
		 		puts("你選擇了精靈");
		 		human2 = 1;
		 		humanHp = 100;humanRe = 50;humanAtk = 40;//勇者數據
		 		sleep(1);
		 		stop = 0;
		 		break;
			case 3:
				system("CLS");
				puts("你選擇了獸人\n");
				human3 = 1;
				humanHp = 400;humanRe = 40;humanAtk = 15;//勇者數據
				sleep(1);
				stop = 0;
				break;
		 	default:
		 		fflush(stdin);//清除輸入緩衝區
		 		continue;		 		
		}
	}

	
	
	system("CLS");//畫面清空


	srand(time(NULL));//隨機亂數 

	for(i=0;i<2;i++)
	{
		if(i==0)
		ones2=rand()%10;
		if(i==1)
		ones3=rand()%10-10;
		usleep(10000);
	}
	
		
	
	monsterHp = 1;monsterAtk = 20;//怪物數據 
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
			printf("獲得經驗%d",exp);
			sleep(1);
			system("CLS");//畫面清空
			monsterHp = 1;monsterAtk = 20;//怪物數據 
	        monsterLv = humanLv+ones2*humanLv+ones3*humanLv/2;
	
         	if(monsterLv<0)
         	monsterLv = 1;
	
         	monsterHp = monsterHp*monsterLv;
	        monsterAtk = monsterAtk*monsterLv;
			
		}
		if(humanHp<=0)//失敗條件
		{
			termination = 0;
			system("CLS");
			printf("勇者被吞入怪物的肚子");
			sleep(3);
			break;
		}

		
		printf("勇者的等級 = %d\n\n",humanLv);
		printf("勇者的血量 = %d\n\n",humanHp);
		printf("勇者的攻擊力 = %d\n\n",humanAtk);
		printf("勇者的回復力 = %d\n\n",humanRe);	
		printf("怪物的等級 = %d\n\n",monsterLv);
		printf("怪物的血量 = %d\n\n",monsterHp);
		printf("怪物的攻擊力 = %d\n\n",monsterAtk);
		int a = 0;
		printf("1.攻擊 2.回復 3.逃跑(失敗死亡)\n\n請選擇：");
		scanf("%d", &a);
		ones4=rand()%10;
		switch(a)
		{
		 	case 1:
		 		puts("\n攻擊");
		 		monsterHp = monsterHp - humanAtk;
		 		if(ones4>7)
				 {
				 	monsterHp = monsterHp - humanAtk;
				 	printf("(雙倍)\n");
				 }
		 		break;
		 	case 2:
		 		puts("\n回復");
		 		humanHp = humanHp +  humanRe;
		 		if(ones4>7)
				 {
				 	humanHp = humanHp +  humanRe;
				 	printf("(雙倍)\n");
				 }
		 		break;
			case 3:
				puts("\n逃跑\n");
				if(ones4>7)
				{
					system("CLS");
					printf("\n逃跑成功 ");
					termination = 0;
				}
				humanHp = 0;
				printf("\n逃跑失敗 ");
				sleep(1);
				break;
		 	default:
		 		puts("\n請重新輸入\n");
		 		fflush(stdin);//清除輸入緩衝區
		 		system("CLS");
		 		continue;		 		
		}
		
				
		
		ones1=1+rand()%15;//怪物的行動 
		if(ones1<=5)
		{
			printf("怪物攻擊要害造成了");
			if(ones1==5)
			{
				humanHp = humanHp-monsterAtk;
				printf("雙倍的傷害");
			}
			else
			{
				printf("一般的傷害");
			}
			humanHp = humanHp-monsterAtk;
			sleep(1);
		} 
		if(ones1>5&&ones1<=10)
		{
			printf("怪物回復了");
			if(ones1==10)
			{
				monsterHp = monsterHp + monsterHp/20;
				printf("一些HP"); 
			}
			else
			{
				printf("少量HP"); 
			}
			monsterHp = monsterHp + monsterHp/20;
			sleep(1); 
		}
		if(ones1>10&&ones1<=15)
		{
			printf("怪物採取試探攻擊");
			if(ones1<=13)
			{
				humanHp = humanHp-monsterAtk/2;
				printf("造成了輕微的傷害"); 
			}
			else
			{
				printf("沒有造成傷害");
			}
			sleep(1);
		}
		system("CLS");
	}
	
	
	return 0;
} 


