#include <stdio.h>
#include <stdlib.h>
#include<string.h>
#include <time.h>
#include <unistd.h>

struct human_data
{
	int Hp,Re,Atk,exp,Lv,upNeed,Profession,A,B,C,D;
	char a,b;
}human,monster,ones,vary,tmd;

void people_data();
void people_up();
void game_start();
void srand();
void process();
void monster_data();
void game_end();
void print_data();
void human_action();
void monster_action();
void save_output();
void save_input();
void game_ch();

int main()
{
	game_ch();
	process();
	return 0;
} 

void people_data()
{
		if(human.Profession==1)
		human.Hp = 200;human.Re = 40;human.Atk = 25;
		if(human.Profession==2)
		human.Hp = 100;human.Re = 50;human.Atk = 40;
		if(human.Profession==3)
		human.Hp = 400;human.Re = 40;human.Atk = 15;
}

void people_up()
{
	//升等條件 
	if(human.exp>human.upNeed)
	{
		human.upNeed = 99;
		people_data();
		human.Lv = human.Lv+1;
		human.Hp = human.Hp*human.Lv;
	    human.Atk = human.Atk*human.Lv;
	    human.Re = human.Re*human.Lv;
	    human.upNeed = human.upNeed*human.Lv;
	    human.exp = 0;
	    tmd.Hp=human.Hp;
	}
}

void game_ch()
{
	do
	{
		printf("n=新遊戲 o=舊存檔\n\n請輸入:");
	    scanf("%s",&tmd.b);
		switch(tmd.b)
		{
		 	case 'o':
		 		save_input();
		 		tmd.b='9';
		 		break;
		 	case 'n':
		 		game_start();
		 		tmd.b='9';
		 		break;
		 	default:
		 		fflush(stdin);//清除輸入緩衝區		 		
		}
		system("CLS");	
	}while(tmd.b!='9');
}

void game_start() 
{
	//開頭
	do
	{
		system("CLS");//畫面清空
		printf("請選擇勇者的種族\n\n(人類):均衡/(精靈):攻高血少/(獸人):血厚攻少\n\n1.人類  2.精靈  3.獸人\n\n請選擇:");
		fflush(stdin);//清除輸入緩衝區
		scanf("%s",&tmd.b);
		system("CLS");
		puts("你選擇了\n");
		switch(tmd.b)
		{
		 	case '1':
		 		puts("(人類)\n");
		 		human.Profession = 1;
		 		tmd.b='9';
		 		break;
		 	case '2':
		 		puts("(精靈)\n");
		 		human.Profession = 2;
		 		tmd.b='9';
		 		break;
			case '3':
				puts("(獸人)\n");
				human.Profession = 3;
				tmd.b='9';
				break;
		 	default:
		 		fflush(stdin);//清除輸入緩衝區
		 		continue;		 		
		}
		sleep(1);
	}while(tmd.b!='9');
}

void process()
{
	system("CLS");
	vary.A = 1;human.Lv;human.upNeed = 99;human.exp = 100;
	people_up();
	monster_data();
	while(vary.A)
	{
		srand();
		game_end();
		print_data();
		human_action();
		monster_action();
		system("CLS");
	}
}

void game_end()
{
	if(monster.Hp<=0)
	{		
		human.exp = human.exp+10*10*monster.Lv;	
		monster_data();
		people_up();		
			
	}	
	if(human.Hp<=0)//失敗條件	
	{	
		vary.A = 0;	
		system("CLS");	
		printf("勇者被吞入怪物的肚子");	
		sleep(3);	
		return;	
	}	
}

void srand()
{
	int i;
	srand(time(NULL));//隨機亂數 

	for(i=0;i<4;i++)
	{
		if(i==0)
		ones.A=1+rand()%9;
		if(i==1)
		ones.B=rand()%10-10;
		if(i==2)
		ones.C=1+rand()%15;
		if(i==3)
		ones.D=rand()%10;
	}
}

void monster_data()
{
	//怪物數據
	srand();
	monster.Hp = 1;monster.Atk = 20; 
	monster.Lv = human.Lv+ones.A+ones.B;
	if(monster.Lv<=0)monster.Lv = 1;
	monster.Hp = monster.Hp*monster.Lv;
	monster.Atk = monster.Atk*monster.Lv;
}

void print_data()
{
	//列印數據 
	printf("勇者的職業 = ");
	if(human.A==1)
	printf("人類\n\n");
	if(human.B==1)
	printf("精靈\n\n");
	if(human.C==1)
	printf("獸人\n\n");
	printf("勇者的等級 = %d/99\n\n",human.Lv);
	printf("勇者的血量 = %d/%d\n\n",human.Hp,tmd.Hp);
	printf("勇者的攻擊力 = %d\n\n",human.Atk);
	printf("勇者的回復力 = %d\n\n",human.Re);
	printf("勇者的經驗值 = %d/%d\n\n",human.exp,human.upNeed);
	printf("_______________________\n\n");	
	printf("怪物的等級 = %d\n\n",monster.Lv);
	printf("怪物的血量 = %d\n\n",monster.Hp);
	printf("怪物的攻擊力 = %d\n\n",monster.Atk);
	printf("_______________________\n\n");
} 

void human_action()
{
	//英雄行動 
	char a;
	vary.B = 1;
	printf("1.攻擊 2.回復 3.逃跑(失敗死亡) s.存檔\n\n請選擇：");
	scanf("%s", &tmd.a);
	switch(tmd.a)
	{
	 	case '1':
	 		puts("\n攻擊");
	 		monster.Hp = monster.Hp - human.Atk;
	 		if(ones.D>7)
			 {
			 	monster.Hp = monster.Hp - human.Atk;
			 	printf("(雙倍)");
			 }
	 		break;
	 	case '2':
	 		puts("\n回復");
	 		human.Hp = human.Hp +  human.Re;
	 		if(ones.D>7)
			 {
			 	human.Hp = human.Hp +  human.Re;
			 	printf("(雙倍)");
			 }
			 if(tmd.Hp<=human.Hp)
			 human.Hp=tmd.Hp;
	 		break;
		case '3':
			system("CLS");
			if(ones.D<9)
			{
				printf("完美逃跑\n");
				monster_data();
				vary.B=0;
			}
			else
			{
				human.Hp = 0;
				printf("逃跑失敗\n");
				vary.B=0;
			}
			break;
		case 's':
			save_output();
			printf("\存檔完成\n");
			vary.B=0;
			break;
	 	default:
	 		puts("\n請重新輸入\n");
	 		fflush(stdin);//清除輸入緩衝區
			 vary.B=0;		 		
	}
	sleep(1);
}

void monster_action()
{
	//怪物的行動
	if(vary.B==0)
	return;
	printf("\n怪物的行動:\n");
	if(ones.C<=5)
	{
		printf("\n怪物攻擊要害造成了");
		if(ones.C==5)
		{
			human.Hp = human.Hp-monster.Atk;
			printf("雙倍的傷害");
		}
		else
		{
			printf("一般的傷害");
		}
		human.Hp = human.Hp-monster.Atk;
		sleep(1);
	} 
	if(ones.C>5&&ones.C<=10)
	{
		printf("\n怪物回復了");
		if(ones.C==10)
		{
			monster.Hp = monster.Hp + monster.Hp/20;
			printf("一些HP"); 
		}
		else
		{
			printf("少量HP"); 
		}
		monster.Hp = monster.Hp + monster.Hp/20;
		sleep(1); 
	}
	if(ones.C>10&&ones.C<=15)
	{
		printf("\n怪物採取試探攻擊");
		if(ones.C<=13)
		{
			human.Hp = human.Hp-monster.Atk/2;
			printf("造成了輕微的傷害"); 
		}
		else
		{
			printf("沒有造成傷害");
		}
		sleep(1);
	}
}

void save_output()
{
	//存檔 
    FILE *fp;
    fp=fopen("save.txt","w");
    fprintf(fp,"%d %d %d %d", human.Lv, human.Hp, human.Profession, human.exp);
    fclose(fp);
}

void save_input()
{
	//讀檔 
	FILE *fP;
	fP=fopen("save.txt","r");
	fscanf(fP, "%d %d %d %d", &human.Lv, &human.Hp, &human.Profession, &human.exp);
	fclose(fP);
}


