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
	//�ɵ����� 
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
		printf("n=�s�C�� o=�¦s��\n\n�п�J:");
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
		 		fflush(stdin);//�M����J�w�İ�		 		
		}
		system("CLS");	
	}while(tmd.b!='9');
}

void game_start() 
{
	//�}�Y
	do
	{
		system("CLS");//�e���M��
		printf("�п�ܫi�̪��ر�\n\n(�H��):����/(���F):�𰪦��/(�~�H):��p���\n\n1.�H��  2.���F  3.�~�H\n\n�п��:");
		fflush(stdin);//�M����J�w�İ�
		scanf("%s",&tmd.b);
		system("CLS");
		puts("�A��ܤF\n");
		switch(tmd.b)
		{
		 	case '1':
		 		puts("(�H��)\n");
		 		human.Profession = 1;
		 		tmd.b='9';
		 		break;
		 	case '2':
		 		puts("(���F)\n");
		 		human.Profession = 2;
		 		tmd.b='9';
		 		break;
			case '3':
				puts("(�~�H)\n");
				human.Profession = 3;
				tmd.b='9';
				break;
		 	default:
		 		fflush(stdin);//�M����J�w�İ�
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
	if(human.Hp<=0)//���ѱ���	
	{	
		vary.A = 0;	
		system("CLS");	
		printf("�i�̳Q�]�J�Ǫ����{�l");	
		sleep(3);	
		return;	
	}	
}

void srand()
{
	int i;
	srand(time(NULL));//�H���ü� 

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
	//�Ǫ��ƾ�
	srand();
	monster.Hp = 1;monster.Atk = 20; 
	monster.Lv = human.Lv+ones.A+ones.B;
	if(monster.Lv<=0)monster.Lv = 1;
	monster.Hp = monster.Hp*monster.Lv;
	monster.Atk = monster.Atk*monster.Lv;
}

void print_data()
{
	//�C�L�ƾ� 
	printf("�i�̪�¾�~ = ");
	if(human.A==1)
	printf("�H��\n\n");
	if(human.B==1)
	printf("���F\n\n");
	if(human.C==1)
	printf("�~�H\n\n");
	printf("�i�̪����� = %d/99\n\n",human.Lv);
	printf("�i�̪���q = %d/%d\n\n",human.Hp,tmd.Hp);
	printf("�i�̪������O = %d\n\n",human.Atk);
	printf("�i�̪��^�_�O = %d\n\n",human.Re);
	printf("�i�̪��g��� = %d/%d\n\n",human.exp,human.upNeed);
	printf("_______________________\n\n");	
	printf("�Ǫ������� = %d\n\n",monster.Lv);
	printf("�Ǫ�����q = %d\n\n",monster.Hp);
	printf("�Ǫ��������O = %d\n\n",monster.Atk);
	printf("_______________________\n\n");
} 

void human_action()
{
	//�^����� 
	char a;
	vary.B = 1;
	printf("1.���� 2.�^�_ 3.�k�](���Ѧ��`) s.�s��\n\n�п�ܡG");
	scanf("%s", &tmd.a);
	switch(tmd.a)
	{
	 	case '1':
	 		puts("\n����");
	 		monster.Hp = monster.Hp - human.Atk;
	 		if(ones.D>7)
			 {
			 	monster.Hp = monster.Hp - human.Atk;
			 	printf("(����)");
			 }
	 		break;
	 	case '2':
	 		puts("\n�^�_");
	 		human.Hp = human.Hp +  human.Re;
	 		if(ones.D>7)
			 {
			 	human.Hp = human.Hp +  human.Re;
			 	printf("(����)");
			 }
			 if(tmd.Hp<=human.Hp)
			 human.Hp=tmd.Hp;
	 		break;
		case '3':
			system("CLS");
			if(ones.D<9)
			{
				printf("�����k�]\n");
				monster_data();
				vary.B=0;
			}
			else
			{
				human.Hp = 0;
				printf("�k�]����\n");
				vary.B=0;
			}
			break;
		case 's':
			save_output();
			printf("\�s�ɧ���\n");
			vary.B=0;
			break;
	 	default:
	 		puts("\n�Э��s��J\n");
	 		fflush(stdin);//�M����J�w�İ�
			 vary.B=0;		 		
	}
	sleep(1);
}

void monster_action()
{
	//�Ǫ������
	if(vary.B==0)
	return;
	printf("\n�Ǫ������:\n");
	if(ones.C<=5)
	{
		printf("\n�Ǫ������n�`�y���F");
		if(ones.C==5)
		{
			human.Hp = human.Hp-monster.Atk;
			printf("�������ˮ`");
		}
		else
		{
			printf("�@�몺�ˮ`");
		}
		human.Hp = human.Hp-monster.Atk;
		sleep(1);
	} 
	if(ones.C>5&&ones.C<=10)
	{
		printf("\n�Ǫ��^�_�F");
		if(ones.C==10)
		{
			monster.Hp = monster.Hp + monster.Hp/20;
			printf("�@��HP"); 
		}
		else
		{
			printf("�ֶqHP"); 
		}
		monster.Hp = monster.Hp + monster.Hp/20;
		sleep(1); 
	}
	if(ones.C>10&&ones.C<=15)
	{
		printf("\n�Ǫ��Ĩ��ձ�����");
		if(ones.C<=13)
		{
			human.Hp = human.Hp-monster.Atk/2;
			printf("�y���F���L���ˮ`"); 
		}
		else
		{
			printf("�S���y���ˮ`");
		}
		sleep(1);
	}
}

void save_output()
{
	//�s�� 
    FILE *fp;
    fp=fopen("save.txt","w");
    fprintf(fp,"%d %d %d %d", human.Lv, human.Hp, human.Profession, human.exp);
    fclose(fp);
}

void save_input()
{
	//Ū�� 
	FILE *fP;
	fP=fopen("save.txt","r");
	fscanf(fP, "%d %d %d %d", &human.Lv, &human.Hp, &human.Profession, &human.exp);
	fclose(fP);
}


