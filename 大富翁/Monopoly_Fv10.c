#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <time.h>
#include <windows.h>

struct location
{
	char name[10];
	char land[10];
	char own[10];
	char player[10];
	int occupeid;
	int price;
	int lvl;
}b[24];

struct playerinfo
{
	char name;
	int money;
	int loan;
	int occupied[24];
	int lose;
	int win;
}A,B,C,D;
//定位游標位置到指定座標
void goto_xy(int x, int y)
{   
	HANDLE hOut;
	hOut=GetStdHandle(STD_OUTPUT_HANDLE);
	COORD pos={x,y};
	SetConsoleCursorPosition(hOut,pos);
}
//地圖b01
void map_1(int stepA,int stepB,int stepC,int stepD,int occupied,int A_occupied,int B_occupied,int C_occupied,int D_occupied)
{
	char as[1]={'A'},bs[1]={'B'},cs[1]={'C'},ds[1]={'D'};
	goto_xy(67,30);
	printf(" ======== +");
	goto_xy(67,31);
	printf("   逢甲   |");
	goto_xy(67,32);
	printf(" -------- |");
	goto_xy(67,33);
	if(stepA!=2||A.lose==1) as[0]=' ';else as[0]='A';
	printf("   %c",as[0]);
	if(stepB!=2||B.lose==1) bs[0]=' ';else bs[0]='B';
	printf("%c",bs[0]);
	if(stepC!=2||C.lose==1) cs[0]=' ';else cs[0]='C';
	printf("%c",cs[0]);
	if(stepD!=2||D.lose==1) ds[0]=' ';else ds[0]='D';
	printf("%c   |",ds[0]);
	goto_xy(67,34);
	printf(" -------- |");
	goto_xy(67,35);
	if(occupied==1)
	{
		printf("  %c",A.name);
		printf(" %d",b[1].lvl);
		printf(" %d",b[1].price);
		printf(" |");
	}
	else if(occupied==2)
	{
		printf("  %c",B.name);
		printf(" %d",b[1].lvl);
		printf(" %d",b[1].price);
		printf(" |");
	}
	else if(occupied==3)
	{
		printf("  %c",C.name);
		printf(" %d",b[1].lvl);
		printf(" %d",b[1].price);
		printf(" |");
	}
	else if(occupied==4)
	{
		printf("  %c",D.name);
		printf(" %d",b[1].lvl);
		printf(" %d",b[1].price);
		printf(" |");
	}
	else if(occupied==0)
		printf("          |");
	goto_xy(67,36);
	printf(" ======== +");
}
//地圖b02
void map_2(int stepA,int stepB,int stepC,int stepD,int occupied,int A_occupied,int B_occupied,int C_occupied,int D_occupied)
{
	char as[1]={'A'},bs[1]={'B'},cs[1]={'C'},ds[1]={'D'};
	goto_xy(56,30);
	printf(" ======== +");
	goto_xy(56,31);
	printf("   清水   |");
	goto_xy(56,32);
	printf(" -------- |");
	goto_xy(56,33);
	if(stepA!=3||A.lose==1) as[0]=' ';else as[0]='A';
	printf("   %c",as[0]);
	if(stepB!=3||B.lose==1) bs[0]=' ';else bs[0]='B';
	printf("%c",bs[0]);
	if(stepC!=3||C.lose==1) cs[0]=' ';else cs[0]='C';
	printf("%c",cs[0]);
	if(stepD!=3||D.lose==1) ds[0]=' ';else ds[0]='D';
	printf("%c   |",ds[0]);
	goto_xy(56,34);
	printf(" -------- |");
	goto_xy(56,35);
	if(occupied==1)
	{
		printf("  %c",A.name);
		printf(" %d",b[2].lvl);
		printf(" %d",b[2].price);
		printf(" |");
	}
	else if(occupied==2)
	{
		printf("  %c",B.name);
		printf(" %d",b[2].lvl);
		printf(" %d",b[2].price);
		printf(" |");
	}
	else if(occupied==3)
	{
		printf("  %c",C.name);
		printf(" %d",b[2].lvl);
		printf(" %d",b[2].price);
		printf(" |");
	}
	else if(occupied==4)
	{
		printf("  %c",D.name);
		printf(" %d",b[2].lvl);
		printf(" %d",b[2].price);
		printf(" |");
	}
	else if(occupied==0)
		printf("          |");
	goto_xy(56,36);
	printf(" ======== +");
}
//地圖b03
void map_3(int stepA,int stepB,int stepC,int stepD,int occupied,int A_occupied,int B_occupied,int C_occupied,int D_occupied)
{
	char as[1]={'A'},bs[1]={'B'},cs[1]={'C'},ds[1]={'D'};
	goto_xy(45,30);
	printf(" ======== +");
	goto_xy(45,31);
	printf("   鹿港   |");
	goto_xy(45,32);
	printf(" -------- |");
	goto_xy(45,33);
	if(stepA!=4||A.lose==1) as[0]=' ';else as[0]='A';
	printf("   %c",as[0]);
	if(stepB!=4||B.lose==1) bs[0]=' ';else bs[0]='B';
	printf("%c",bs[0]);
	if(stepC!=4||C.lose==1) cs[0]=' ';else cs[0]='C';
	printf("%c",cs[0]);
	if(stepD!=4||D.lose==1) ds[0]=' ';else ds[0]='D';
	printf("%c   |",ds[0]);
	goto_xy(45,34);
	printf(" -------- |");
	goto_xy(45,35);
	if(occupied==1)
	{
		printf("  %c",A.name);
		printf(" %d",b[3].lvl);
		printf(" %d",b[3].price);
		printf(" |");
	}
	else if(occupied==2)
	{
		printf("  %c",B.name);
		printf(" %d",b[3].lvl);
		printf(" %d",b[3].price);
		printf(" |");
	}
	else if(occupied==3)
	{
		printf("  %c",C.name);
		printf(" %d",b[3].lvl);
		printf(" %d",b[3].price);
		printf(" |");
	}
	else if(occupied==4)
	{
		printf("  %c",D.name);
		printf(" %d",b[3].lvl);
		printf(" %d",b[3].price);
		printf(" |");
	}
	else if(occupied==0)
		printf("          |");
	goto_xy(45,36);
	printf(" ======== +");
}
//地圖b04
void map_4(int stepA,int stepB,int stepC,int stepD,int occupied,int A_occupied,int B_occupied,int C_occupied,int D_occupied)
{
	char as[1]={'A'},bs[1]={'B'},cs[1]={'C'},ds[1]={'D'};
	goto_xy(34,30);
	printf(" ======== +");
	goto_xy(34,31);
	printf("  日月潭  |");
	goto_xy(34,32);
	printf(" -------- |");
	goto_xy(34,33);
	if(stepA!=5||A.lose==1) as[0]=' ';else as[0]='A';
	printf("   %c",as[0]);
	if(stepB!=5||B.lose==1) bs[0]=' ';else bs[0]='B';
	printf("%c",bs[0]);
	if(stepC!=5||C.lose==1) cs[0]=' ';else cs[0]='C';
	printf("%c",cs[0]);
	if(stepD!=5||D.lose==1) ds[0]=' ';else ds[0]='D';
	printf("%c   |",ds[0]);
	goto_xy(34,34);
	printf(" -------- |");
	goto_xy(34,35);
	if(occupied==1)
	{
		printf("  %c",A.name);
		printf(" %d",b[4].lvl);
		printf(" %d",b[4].price);
		printf(" |");
	}
	else if(occupied==2)
	{
		printf("  %c",B.name);
		printf(" %d",b[4].lvl);
		printf(" %d",b[4].price);
		printf(" |");
	}
	else if(occupied==3)
	{
		printf("  %c",C.name);
		printf(" %d",b[4].lvl);
		printf(" %d",b[4].price);
		printf(" |");
	}
	else if(occupied==4)
	{
		printf("  %c",D.name);
		printf(" %d",b[4].lvl);
		printf(" %d",b[4].price);
		printf(" |");
	}
	else if(occupied==0)
		printf("          |");
	goto_xy(34,36);
	printf(" ======== +");
}
//地圖b05 命運 
void map_5(int stepA,int stepB,int stepC,int stepD,int occupied,int A_occupied,int B_occupied,int C_occupied,int D_occupied)
{
	char as[1]={'A'},bs[1]={'B'},cs[1]={'C'},ds[1]={'D'};
	goto_xy(23,30);
	printf(" ======== +");
	goto_xy(23,31);
	printf("   命運   |");
	goto_xy(23,32);
	printf(" -------- |");
	goto_xy(23,33);
	if(stepA!=6||A.lose==1) as[0]=' ';else as[0]='A';
	printf("   %c",as[0]);
	if(stepB!=6||B.lose==1) bs[0]=' ';else bs[0]='B';
	printf("%c",bs[0]);
	if(stepC!=6||C.lose==1) cs[0]=' ';else cs[0]='C';
	printf("%c",cs[0]);
	if(stepD!=6||D.lose==1) ds[0]=' ';else ds[0]='D';
	printf("%c   |",ds[0]);
	goto_xy(23,34);
	printf(" -------- |");
	goto_xy(23,35);
	printf("          |");
	goto_xy(23,36);
	printf(" ======== +");
}
//地圖b06
void map_6(int stepA,int stepB,int stepC,int stepD,int occupied,int A_occupied,int B_occupied,int C_occupied,int D_occupied)
{
	char as[1]={'A'},bs[1]={'B'},cs[1]={'C'},ds[1]={'D'};
	goto_xy(12,30);
	printf(" ======== +");
	goto_xy(12,31);
	printf("  阿里山  |");
	goto_xy(12,32);
	printf(" -------- |");
	goto_xy(12,33);
	if(stepA!=7||A.lose==1) as[0]=' ';else as[0]='A';
	printf("   %c",as[0]);
	if(stepB!=7||B.lose==1) bs[0]=' ';else bs[0]='B';
	printf("%c",bs[0]);
	if(stepC!=7||C.lose==1) cs[0]=' ';else cs[0]='C';
	printf("%c",cs[0]);
	if(stepD!=7||D.lose==1) ds[0]=' ';else ds[0]='D';
	printf("%c   |",ds[0]);
	goto_xy(12,34);
	printf(" -------- |");
	goto_xy(12,35);
	if(occupied==1)
	{
		printf("  %c",A.name);
		printf(" %d",b[6].lvl);
		printf(" %d",b[6].price);
		printf(" |");
	}
	else if(occupied==2)
	{
		printf("  %c",B.name);
		printf(" %d",b[6].lvl);
		printf(" %d",b[6].price);
		printf(" |");
	}
	else if(occupied==3)
	{
		printf("  %c",C.name);
		printf(" %d",b[6].lvl);
		printf(" %d",b[6].price);
		printf(" |");
	}
	else if(occupied==4)
	{
		printf("  %c",D.name);
		printf(" %d",b[6].lvl);
		printf(" %d",b[6].price);
		printf(" |");
	}
	else if(occupied==0)
		printf("          |");
	goto_xy(12,36);
	printf(" ======== +");
}
//地圖b07 監獄 
void map_07(int stepA,int stepB,int stepC,int stepD,int occupied,int A_occupied,int B_occupied,int C_occupied,int D_occupied)
{
	char as[1]={'A'},bs[1]={'B'},cs[1]={'C'},ds[1]={'D'};
	
	printf("|   監獄   |\n");
	printf("| -------- |\n");
	if(stepA!=8||A.lose==1) as[0]=' ';else as[0]='A';
	printf("|   %c",as[0]);
	if(stepB!=8||B.lose==1) bs[0]=' ';else bs[0]='B';
	printf("%c",bs[0]);
	if(stepC!=8||C.lose==1) cs[0]=' ';else cs[0]='C';
	printf("%c",cs[0]);
	if(stepD!=8||D.lose==1) ds[0]=' ';else ds[0]='D';
	printf("%c   |\n",ds[0]);
	printf("| -------- |\n");
	printf("|          |\n");
	printf("+ ======== +");
}
//地圖b08 
void map_08(int stepA,int stepB,int stepC,int stepD,int occupied,int A_occupied,int B_occupied,int C_occupied,int D_occupied)
{
	char as[1]={'A'},bs[1]={'B'},cs[1]={'C'},ds[1]={'D'};
	printf("|   安平   |\n");
	printf("| -------- |\n");
	if(stepA!=9||A.lose==1) as[0]=' ';else as[0]='A';
	printf("|   %c",as[0]);
	if(stepB!=9||B.lose==1) bs[0]=' ';else bs[0]='B';
	printf("%c",bs[0]);
	if(stepC!=9||C.lose==1) cs[0]=' ';else cs[0]='C';
	printf("%c",cs[0]);
	if(stepD!=9||D.lose==1) ds[0]=' ';else ds[0]='D';
	printf("%c   |\n",ds[0]);
	printf("| -------- |\n");
	if(occupied==1)
	{
		printf("|  %c",A.name);
		printf(" %d",b[8].lvl);
		printf(" %d",b[8].price);
		printf(" |\n");
	}
	else if(occupied==2)
	{
		printf("|  %c",B.name);
		printf(" %d",b[8].lvl);
		printf(" %d",b[8].price);
		printf(" |\n");
	}
	else if(occupied==3)
	{
		printf("|  %c",C.name);
		printf(" %d",b[8].lvl);
		printf(" %d",b[8].price);
		printf(" |\n");
	}
	else if(occupied==4)
	{
		printf("|  %c",D.name);
		printf(" %d",b[8].lvl);
		printf(" %d",b[8].price);
		printf(" |\n");
	}
	else if(occupied==0)
		printf("|          |\n");
	printf("+ ======== +\n");
}
//地圖b09 
void map_09(int stepA,int stepB,int stepC,int stepD,int occupied,int A_occupied,int B_occupied,int C_occupied,int D_occupied)
{
	char as[1]={'A'},bs[1]={'B'},cs[1]={'C'},ds[1]={'D'};
	printf("|   高雄   |\n");
	printf("| -------- |\n");
	if(stepA!=10||A.lose==1) as[0]=' ';else as[0]='A';
	printf("|   %c",as[0]);
	if(stepB!=10||B.lose==1) bs[0]=' ';else bs[0]='B';
	printf("%c",bs[0]);
	if(stepC!=10||C.lose==1) cs[0]=' ';else cs[0]='C';
	printf("%c",cs[0]);
	if(stepD!=10||D.lose==1) ds[0]=' ';else ds[0]='D';
	printf("%c   |\n",ds[0]);
	printf("| -------- |\n");
	if(occupied==1)
	{
		printf("|  %c",A.name);
		printf(" %d",b[9].lvl);
		printf(" %d",b[9].price);
		printf(" |\n");
	}
	else if(occupied==2)
	{
		printf("|  %c",B.name);
		printf(" %d",b[9].lvl);
		printf(" %d",b[9].price);
		printf(" |\n");
	}
	else if(occupied==3)
	{
		printf("|  %c",C.name);
		printf(" %d",b[9].lvl);
		printf(" %d",b[9].price);
		printf(" |\n");
	}
	else if(occupied==4)
	{
		printf("|  %c",D.name);
		printf(" %d",b[9].lvl);
		printf(" %d",b[9].price);
		printf(" |\n");
	}
	else if(occupied==0)
		printf("|          |\n");
	printf("+ ======== +\n");
}
//地圖b10 機會 
void map_10(int stepA,int stepB,int stepC,int stepD,int occupied,int A_occupied,int B_occupied,int C_occupied,int D_occupied)
{
	char as[1]={'A'},bs[1]={'B'},cs[1]={'C'},ds[1]={'D'};
	printf("|   機會   |\n");
	printf("| -------- |\n");
	if(stepA!=11||A.lose==1) as[0]=' ';else as[0]='A';
	printf("|   %c",as[0]);
	if(stepB!=11||B.lose==1) bs[0]=' ';else bs[0]='B';
	printf("%c",bs[0]);
	if(stepC!=11||C.lose==1) cs[0]=' ';else cs[0]='C';
	printf("%c",cs[0]);
	if(stepD!=11||D.lose==1) ds[0]=' ';else ds[0]='D';
	printf("%c   |\n",ds[0]);
	printf("| -------- |\n");
	printf("|          |\n");
	printf("+ ======== +\n");
}
//地圖b11
void map_11(int stepA,int stepB,int stepC,int stepD,int occupied,int A_occupied,int B_occupied,int C_occupied,int D_occupied)
{
	char as[1]={'A'},bs[1]={'B'},cs[1]={'C'},ds[1]={'D'};
	printf("|   東港   |\n");
	printf("| -------- |\n");
	if(stepA!=12||A.lose==1) as[0]=' ';else as[0]='A';
	printf("|   %c",as[0]);
	if(stepB!=12||B.lose==1) bs[0]=' ';else bs[0]='B';
	printf("%c",bs[0]);
	if(stepC!=12||C.lose==1) cs[0]=' ';else cs[0]='C';
	printf("%c",cs[0]);
	if(stepD!=12||D.lose==1) ds[0]=' ';else ds[0]='D';
	printf("%c   |\n",ds[0]);
	printf("| -------- |\n");
	if(occupied==1)
	{
		printf("|  %c",A.name);
		printf(" %d",b[11].lvl);
		printf(" %d",b[11].price);
		printf(" |\n");
	}
	else if(occupied==2)
	{
		printf("|  %c",B.name);
		printf(" %d",b[11].lvl);
		printf(" %d",b[11].price);
		printf(" |\n");
	}
	else if(occupied==3)
	{
		printf("|  %c",C.name);
		printf(" %d",b[11].lvl);
		printf(" %d",b[11].price);
		printf(" |\n");
	}
	else if(occupied==4)
	{
		printf("|  %c",D.name);
		printf(" %d",b[11].lvl);
		printf(" %d",b[11].price);
		printf(" |\n");
	}
	else if(occupied==0)
		printf("|          |\n");
	printf("+ ======== +\n");
}
//地圖b12 
void map_12(int stepA,int stepB,int stepC,int stepD,int occupied,int A_occupied,int B_occupied,int C_occupied,int D_occupied)
{
	char as[1]={'A'},bs[1]={'B'},cs[1]={'C'},ds[1]={'D'};
	printf("+ ======== +\n");
	printf("|   醫院   |\n");
	printf("| -------- |\n");
	if(stepA!=13||A.lose==1) as[0]=' ';else as[0]='A';
	printf("|   %c",as[0]);
	if(stepB!=13||B.lose==1) bs[0]=' ';else bs[0]='B';
	printf("%c",bs[0]);
	if(stepC!=13||C.lose==1) cs[0]=' ';else cs[0]='C';
	printf("%c",cs[0]);
	if(stepD!=13||D.lose==1) ds[0]=' ';else ds[0]='D';
	printf("%c   |\n",ds[0]);
	printf("| -------- |\n");
	printf("|          |\n");
	printf("+ ======== +\n");
}
//地圖b13
void map_13(int stepA,int stepB,int stepC,int stepD,int occupied,int A_occupied,int B_occupied,int C_occupied,int D_occupied)
{
	char as[1]={'A'},bs[1]={'B'},cs[1]={'C'},ds[1]={'D'};
	goto_xy(12,0);
	printf(" ======== +");
	goto_xy(12,1);
	printf("   墾丁   |");
	goto_xy(12,2);
	printf(" -------- |");
	goto_xy(12,3);
	if(stepA!=14||A.lose==1) as[0]=' ';else as[0]='A';
	printf("   %c",as[0]);
	if(stepB!=14||B.lose==1) bs[0]=' ';else bs[0]='B';
	printf("%c",bs[0]);
	if(stepC!=14||C.lose==1) cs[0]=' ';else cs[0]='C';
	printf("%c",cs[0]);
	if(stepD!=14||D.lose==1) ds[0]=' ';else ds[0]='D';
	printf("%c   |",ds[0]);
	goto_xy(12,4);
	printf(" -------- |");
	goto_xy(12,5);
	if(occupied==1)
	{
		printf("  %c",A.name);
		printf(" %d",b[13].lvl);
		printf(" %d",b[13].price);
		printf(" |");
	}
	else if(occupied==2)
	{
		printf("  %c",B.name);
		printf(" %d",b[13].lvl);
		printf(" %d",b[13].price);
		printf(" |");
	}
	else if(occupied==3)
	{
		printf("  %c",C.name);
		printf(" %d",b[13].lvl);
		printf(" %d",b[13].price);
		printf(" |");
	}
	else if(occupied==4)
	{
		printf("  %c",D.name);
		printf(" %d",b[13].lvl);
		printf(" %d",b[13].price);
		printf(" |");
	}
	else if(occupied==0)
		printf("          |");
	goto_xy(12,6);
	printf(" ======== +");
}
//地圖b14 
void map_14(int stepA,int stepB,int stepC,int stepD,int occupied,int A_occupied,int B_occupied,int C_occupied,int D_occupied)
{
	char as[1]={'A'},bs[1]={'B'},cs[1]={'C'},ds[1]={'D'};
	goto_xy(23,0);
	printf(" ======== +");
	goto_xy(23,1);
	printf("   台東   |");
	goto_xy(23,2);
	printf(" -------- |");
	goto_xy(23,3);
	if(stepA!=15||A.lose==1) as[0]=' ';else as[0]='A';
	printf("   %c",as[0]);
	if(stepB!=15||B.lose==1) bs[0]=' ';else bs[0]='B';
	printf("%c",bs[0]);
	if(stepC!=15||C.lose==1) cs[0]=' ';else cs[0]='C';
	printf("%c",cs[0]);
	if(stepD!=15||D.lose==1) ds[0]=' ';else ds[0]='D';
	printf("%c   |",ds[0]);
	goto_xy(23,4);
	printf(" -------- |");
	goto_xy(23,5);
	if(occupied==1)
	{
		printf("  %c",A.name);
		printf(" %d",b[14].lvl);
		printf(" %d",b[14].price);
		printf(" |");
	}
	else if(occupied==2)
	{
		printf("  %c",B.name);
		printf(" %d",b[14].lvl);
		printf(" %d",b[14].price);
		printf(" |");
	}
	else if(occupied==3)
	{
		printf("  %c",C.name);
		printf(" %d",b[14].lvl);
		printf(" %d",b[14].price);
		printf(" |");
	}
	else if(occupied==4)
	{
		printf("  %c",D.name);
		printf(" %d",b[14].lvl);
		printf(" %d",b[14].price);
		printf(" |");
	}
	else if(occupied==0)
		printf("          |");
	goto_xy(23,6);
	printf(" ======== +");
}
//地圖b15 
void map_15(int stepA,int stepB,int stepC,int stepD,int occupied,int A_occupied,int B_occupied,int C_occupied,int D_occupied)
{
	char as[1]={'A'},bs[1]={'B'},cs[1]={'C'},ds[1]={'D'};
	goto_xy(34,0);
	printf(" ======== +");
	goto_xy(34,1);
	printf("   花蓮   |");
	goto_xy(34,2);
	printf(" -------- |");
	goto_xy(34,3);
	if(stepA!=16||A.lose==1) as[0]=' ';else as[0]='A';
	printf("   %c",as[0]);
	if(stepB!=16||B.lose==1) bs[0]=' ';else bs[0]='B';
	printf("%c",bs[0]);
	if(stepC!=16||C.lose==1) cs[0]=' ';else cs[0]='C';
	printf("%c",cs[0]);
	if(stepD!=16||D.lose==1) ds[0]=' ';else ds[0]='D';
	printf("%c   |",ds[0]);
	goto_xy(34,4);
	printf(" -------- |");
	goto_xy(34,5);
	if(occupied==1)
	{
		printf("  %c",A.name);
		printf(" %d",b[15].lvl);
		printf(" %d",b[15].price);
		printf(" |");
	}
	else if(occupied==2)
	{
		printf("  %c",B.name);
		printf(" %d",b[15].lvl);
		printf(" %d",b[15].price);
		printf(" |");
	}
	else if(occupied==3)
	{
		printf("  %c",C.name);
		printf(" %d",b[15].lvl);
		printf(" %d",b[15].price);
		printf(" |");
	}
	else if(occupied==4)
	{
		printf("  %c",D.name);
		printf(" %d",b[15].lvl);
		printf(" %d",b[15].price);
		printf(" |");
	}
	else if(occupied==0)
		printf("          |");
	goto_xy(34,6);
	printf(" ======== +");
}
//地圖b16
void map_16(int stepA,int stepB,int stepC,int stepD,int occupied,int A_occupied,int B_occupied,int C_occupied,int D_occupied)
{
	char as[1]={'A'},bs[1]={'B'},cs[1]={'C'},ds[1]={'D'};
	goto_xy(45,0);
	printf(" ======== +");
	goto_xy(45,1);
	printf("  合歡山  |");
	goto_xy(45,2);
	printf(" -------- |");
	goto_xy(45,3);
	if(stepA!=17||A.lose==1) as[0]=' ';else as[0]='A';
	printf("   %c",as[0]);
	if(stepB!=17||B.lose==1) bs[0]=' ';else bs[0]='B';
	printf("%c",bs[0]);
	if(stepC!=17||C.lose==1) cs[0]=' ';else cs[0]='C';
	printf("%c",cs[0]);
	if(stepD!=17||D.lose==1) ds[0]=' ';else ds[0]='D';
	printf("%c   |",ds[0]);
	goto_xy(45,4);
	printf(" -------- |");
	goto_xy(45,5);
	if(occupied==1)
	{
		printf("  %c",A.name);
		printf(" %d",b[16].lvl);
		printf(" %d",b[16].price);
		printf(" |");
	}
	else if(occupied==2)
	{
		printf("  %c",B.name);
		printf(" %d",b[16].lvl);
		printf(" %d",b[16].price);
		printf(" |");
	}
	else if(occupied==3)
	{
		printf("  %c",C.name);
		printf(" %d",b[16].lvl);
		printf(" %d",b[16].price);
		printf(" |");
	}
	else if(occupied==4)
	{
		printf("  %c",D.name);
		printf(" %d",b[16].lvl);
		printf(" %d",b[16].price);
		printf(" |");
	}
	else if(occupied==0)
		printf("          |");
	goto_xy(45,6);
	printf(" ======== +");
} 
//地圖b17 機會 
void map_17(int stepA,int stepB,int stepC,int stepD,int occupied,int A_occupied,int B_occupied,int C_occupied,int D_occupied)
{
	char as[1]={'A'},bs[1]={'B'},cs[1]={'C'},ds[1]={'D'};
	goto_xy(56,0);
	printf(" ======== +");
	goto_xy(56,1);
	printf("   機會   |");
	goto_xy(56,2);
	printf(" -------- |");
	goto_xy(56,3);
	if(stepA!=18||A.lose==1) as[0]=' ';else as[0]='A';
	printf("   %c",as[0]);
	if(stepB!=18||B.lose==1) bs[0]=' ';else bs[0]='B';
	printf("%c",bs[0]);
	if(stepC!=18||C.lose==1) cs[0]=' ';else cs[0]='C';
	printf("%c",cs[0]);
	if(stepD!=18||D.lose==1) ds[0]=' ';else ds[0]='D';
	printf("%c   |",ds[0]);
	goto_xy(56,4);
	printf(" -------- |");
	goto_xy(56,5);
	printf("          |");
	goto_xy(56,6);
	printf(" ======== +");
} 
//地圖b18 
void map_18(int stepA,int stepB,int stepC,int stepD,int occupied,int A_occupied,int B_occupied,int C_occupied,int D_occupied)
{
	char as[1]={'A'},bs[1]={'B'},cs[1]={'C'},ds[1]={'D'};
	goto_xy(67,0);
	printf(" ======== +");
	goto_xy(67,1);
	printf("  太魯閣  |");
	goto_xy(67,2);
	printf(" -------- |");
	goto_xy(67,3);
	if(stepA!=19||A.lose==1) as[0]=' ';else as[0]='A';
	printf("   %c",as[0]);
	if(stepB!=19||B.lose==1) bs[0]=' ';else bs[0]='B';
	printf("%c",bs[0]);
	if(stepC!=19||C.lose==1) cs[0]=' ';else cs[0]='C';
	printf("%c",cs[0]);
	if(stepD!=19||D.lose==1) ds[0]=' ';else ds[0]='D';
	printf("%c   |",ds[0]);
	goto_xy(67,4);
	printf(" -------- |");
	goto_xy(67,5);
	if(occupied==1)
	{
		printf("  %c",A.name);
		printf(" %d",b[18].lvl);
		printf(" %d",b[18].price);
		printf(" |");
	}
	else if(occupied==2)
	{
		printf("  %c",B.name);
		printf(" %d",b[18].lvl);
		printf(" %d",b[18].price);
		printf(" |");
	}
	else if(occupied==3)
	{
		printf("  %c",C.name);
		printf(" %d",b[18].lvl);
		printf(" %d",b[18].price);
		printf(" |");
	}
	else if(occupied==4)
	{
		printf("  %c",D.name);
		printf(" %d",b[18].lvl);
		printf(" %d",b[18].price);
		printf(" |");
	}
	else if(occupied==0)
		printf("          |");
	goto_xy(67,6);
	printf(" ======== +");
} 
//地圖b19
void map_19(int stepA,int stepB,int stepC,int stepD,int occupied,int A_occupied,int B_occupied,int C_occupied,int D_occupied)
{
	char as[1]={'A'},bs[1]={'B'},cs[1]={'C'},ds[1]={'D'};
	goto_xy(78,0);
	printf(" ======== +");
	goto_xy(78,1);
	printf("   蘭嶼   |");
	goto_xy(78,2);
	printf(" -------- |");
	goto_xy(78,3);
	if(stepA!=20||A.lose==1) as[0]=' ';else as[0]='A';
	printf("   %c",as[0]);
	if(stepB!=20||B.lose==1) bs[0]=' ';else bs[0]='B';
	printf("%c",bs[0]);
	if(stepC!=20||C.lose==1) cs[0]=' ';else cs[0]='C';
	printf("%c",cs[0]);
	if(stepD!=20||D.lose==1) ds[0]=' ';else ds[0]='D';
	printf("%c   |",ds[0]);
	goto_xy(78,4);
	printf(" -------- |");
	goto_xy(78,5);
	if(occupied==1)
	{
		printf("  %c",A.name);
		printf(" %d",b[19].lvl);
		printf(" %d",b[19].price);
		printf(" |");
	}
	else if(occupied==2)
	{
		printf("  %c",B.name);
		printf(" %d",b[19].lvl);
		printf(" %d",b[19].price);
		printf(" |");
	}
	else if(occupied==3)
	{
		printf("  %c",C.name);
		printf(" %d",b[19].lvl);
		printf(" %d",b[19].price);
		printf(" |");
	}
	else if(occupied==4)
	{
		printf("  %c",D.name);
		printf(" %d",b[19].lvl);
		printf(" %d",b[19].price);
		printf(" |");
	}
	else if(occupied==0)
		printf("          |");
	goto_xy(78,6);
	printf(" ======== +");
}
//地圖b20
void map_20(int stepA,int stepB,int stepC,int stepD,int occupied,int A_occupied,int B_occupied,int C_occupied,int D_occupied)
{
	char as[1]={'A'},bs[1]={'B'},cs[1]={'C'},ds[1]={'D'};
	goto_xy(77,7);
	printf("|   宜蘭   |");
	goto_xy(77,8);
	printf("| -------- |");
	goto_xy(77,9);
	if(stepA!=21||A.lose==1) as[0]=' ';else as[0]='A';
	printf("|   %c",as[0]);
	if(stepB!=21||B.lose==1) bs[0]=' ';else bs[0]='B';
	printf("%c",bs[0]);
	if(stepC!=21||C.lose==1) cs[0]=' ';else cs[0]='C';
	printf("%c",cs[0]);
	if(stepD!=21||D.lose==1) ds[0]=' ';else ds[0]='D';
	printf("%c   |",ds[0]);
	goto_xy(77,10);
	printf("| -------- |");
	goto_xy(77,11);
	if(occupied==1)
	{
		printf("|  %c",A.name);
		printf(" %d",b[20].lvl);
		printf(" %d",b[20].price);
		printf(" |");
	}
	else if(occupied==2)
	{
		printf("|  %c",B.name);
		printf(" %d",b[20].lvl);
		printf(" %d",b[20].price);
		printf(" |");
	}
	else if(occupied==3)
	{
		printf("|  %c",C.name);
		printf(" %d",b[20].lvl);
		printf(" %d",b[20].price);
		printf(" |");
	}
	else if(occupied==4)
	{
		printf("|  %c",D.name);
		printf(" %d",b[20].lvl);
		printf(" %d",b[20].price);
		printf(" |");
	}
	else if(occupied==0)
		printf("|          |");
	goto_xy(77,12);
	printf("+ ======== +");
}
//地圖b21 
void map_21(int stepA,int stepB,int stepC,int stepD,int occupied,int A_occupied,int B_occupied,int C_occupied,int D_occupied)
{
	char as[1]={'A'},bs[1]={'B'},cs[1]={'C'},ds[1]={'D'};
	goto_xy(77,13);
	printf("|   九份   |");
	goto_xy(77,14);
	printf("| -------- |");
	goto_xy(77,15);
	if(stepA!=22||A.lose==1) as[0]=' ';else as[0]='A';
	printf("|   %c",as[0]);
	if(stepB!=22||B.lose==1) bs[0]=' ';else bs[0]='B';
	printf("%c",bs[0]);
	if(stepC!=22||C.lose==1) cs[0]=' ';else cs[0]='C';
	printf("%c",cs[0]);
	if(stepD!=22||D.lose==1) ds[0]=' ';else ds[0]='D';
	printf("%c   |",ds[0]);
	goto_xy(77,16);
	printf("| -------- |");
	goto_xy(77,17);
	if(occupied==1)
	{
		printf("|  %c",A.name);
		printf(" %d",b[21].lvl);
		printf(" %d",b[21].price);
		printf(" |");
	}
	else if(occupied==2)
	{
		printf("|  %c",B.name);
		printf(" %d",b[21].lvl);
		printf(" %d",b[21].price);
		printf(" |");
	}
	else if(occupied==3)
	{
		printf("|  %c",C.name);
		printf(" %d",b[21].lvl);
		printf(" %d",b[21].price);
		printf(" |");
	}
	else if(occupied==4)
	{
		printf("|  %c",D.name);
		printf(" %d",b[21].lvl);
		printf(" %d",b[21].price);
		printf(" |");
	}
	else if(occupied==0)
		printf("|          |");
	goto_xy(77,18);
	printf("+ ======== +");
}
//地圖b22 命運 
void map_22(int stepA,int stepB,int stepC,int stepD,int occupied,int A_occupied,int B_occupied,int C_occupied,int D_occupied)
{
	char as[1]={'A'},bs[1]={'B'},cs[1]={'C'},ds[1]={'D'};
	goto_xy(77,19);
	printf("|   命運   |");
	goto_xy(77,20);
	printf("| -------- |");
	goto_xy(77,21);
	if(stepA!=23||A.lose==1) as[0]=' ';else as[0]='A';
	printf("|   %c",as[0]);
	if(stepB!=23||B.lose==1) bs[0]=' ';else bs[0]='B';
	printf("%c",bs[0]);
	if(stepC!=23||C.lose==1) cs[0]=' ';else cs[0]='C';
	printf("%c",cs[0]);
	if(stepD!=23||D.lose==1) ds[0]=' ';else ds[0]='D';
	printf("%c   |",ds[0]);
	goto_xy(77,22);
	printf("| -------- |");
	goto_xy(77,23);
	printf("|          |");
	goto_xy(77,24);
	printf("+ ======== +");
}
//地圖b23
void map_23(int stepA,int stepB,int stepC,int stepD,int occupied,int A_occupied,int B_occupied,int C_occupied,int D_occupied)
{
	char as[1]={'A'},bs[1]={'B'},cs[1]={'C'},ds[1]={'D'};
	goto_xy(77,25);
	printf("|   台北   |");
	goto_xy(77,26);
	printf("| -------- |");
	goto_xy(77,27);
	if(stepA!=24||A.lose==1) as[0]=' ';else as[0]='A';
	printf("|   %c",as[0]);
	if(stepB!=24||B.lose==1) bs[0]=' ';else bs[0]='B';
	printf("%c",bs[0]);
	if(stepC!=24||C.lose==1) cs[0]=' ';else cs[0]='C';
	printf("%c",cs[0]);
	if(stepD!=24||D.lose==1) ds[0]=' ';else ds[0]='D';
	printf("%c   |",ds[0]);
	goto_xy(77,28);
	printf("| -------- |");
	goto_xy(77,29);
	if(occupied==1)
	{
		printf("|  %c",A.name);
		printf(" %d",b[23].lvl);
		printf(" %d",b[23].price);
		printf(" |");
	}
	else if(occupied==2)
	{
		printf("|  %c",B.name);
		printf(" %d",b[23].lvl);
		printf(" %d",b[23].price);
		printf(" |");
	}
	else if(occupied==3)
	{
		printf("|  %c",C.name);
		printf(" %d",b[23].lvl);
		printf(" %d",b[23].price);
		printf(" |");
	}
	else if(occupied==4)
	{
		printf("|  %c",D.name);
		printf(" %d",b[23].lvl);
		printf(" %d",b[23].price);
		printf(" |");
	}
	else if(occupied==0)
		printf("|          |");
	goto_xy(77,30);
	printf("+ ======== +");
}
//地圖b24
void map_24(int stepA,int stepB,int stepC,int stepD,int occupied,int A_occupied,int B_occupied,int C_occupied,int D_occupied)
{
	char as[1]={'A'},bs[1]={'B'},cs[1]={'C'},ds[1]={'D'};
	//繪圖 
	goto_xy(77,31);
	printf("|   起點   |");
	goto_xy(77,32);
	printf("| -------- |");
	goto_xy(77,33);
	//處理移動 
	if(stepA!=1||A.lose==1) as[0]=' ';else as[0]='A';
	printf("|   %c",as[0]);
	if(stepB!=1||B.lose==1) bs[0]=' ';else bs[0]='B';
	printf("%c",bs[0]);
	if(stepC!=1||C.lose==1) cs[0]=' ';else cs[0]='C';
	printf("%c",cs[0]);
	if(stepD!=1||D.lose==1) ds[0]=' ';else ds[0]='D';
	//繪圖 
	printf("%c   |",ds[0]);
	goto_xy(77,34);
	printf("| -------- |");
	goto_xy(77,35);
	printf("|          |");
	goto_xy(77,36);
	printf("+ ======== +");
}
void mapprint(int stepA,int stepB,int stepC,int stepD,int occupied,int A_occupied,int B_occupied,int C_occupied,int D_occupied)
{

	map_12(stepA,stepB,stepC,stepD,occupied,A_occupied,B_occupied,C_occupied,D_occupied);
	map_11(stepA,stepB,stepC,stepD,occupied,A_occupied,B_occupied,C_occupied,D_occupied);
	map_10(stepA,stepB,stepC,stepD,occupied,A_occupied,B_occupied,C_occupied,D_occupied);
	map_09(stepA,stepB,stepC,stepD,occupied,A_occupied,B_occupied,C_occupied,D_occupied);
	map_08(stepA,stepB,stepC,stepD,occupied,A_occupied,B_occupied,C_occupied,D_occupied);
	map_07(stepA,stepB,stepC,stepD,occupied,A_occupied,B_occupied,C_occupied,D_occupied);
	//
	map_13(stepA,stepB,stepC,stepD,occupied,A_occupied,B_occupied,C_occupied,D_occupied);
	map_14(stepA,stepB,stepC,stepD,occupied,A_occupied,B_occupied,C_occupied,D_occupied);
	map_15(stepA,stepB,stepC,stepD,occupied,A_occupied,B_occupied,C_occupied,D_occupied);
	map_16(stepA,stepB,stepC,stepD,occupied,A_occupied,B_occupied,C_occupied,D_occupied);
	map_17(stepA,stepB,stepC,stepD,occupied,A_occupied,B_occupied,C_occupied,D_occupied);
	map_18(stepA,stepB,stepC,stepD,occupied,A_occupied,B_occupied,C_occupied,D_occupied);
	map_19(stepA,stepB,stepC,stepD,occupied,A_occupied,B_occupied,C_occupied,D_occupied);
	//
	map_20(stepA,stepB,stepC,stepD,occupied,A_occupied,B_occupied,C_occupied,D_occupied);
	map_21(stepA,stepB,stepC,stepD,occupied,A_occupied,B_occupied,C_occupied,D_occupied);
	map_22(stepA,stepB,stepC,stepD,occupied,A_occupied,B_occupied,C_occupied,D_occupied);
	map_23(stepA,stepB,stepC,stepD,occupied,A_occupied,B_occupied,C_occupied,D_occupied);
	map_24(stepA,stepB,stepC,stepD,occupied,A_occupied,B_occupied,C_occupied,D_occupied);//起點 
	//
	map_6(stepA,stepB,stepC,stepD,occupied,A_occupied,B_occupied,C_occupied,D_occupied);
	map_5(stepA,stepB,stepC,stepD,occupied,A_occupied,B_occupied,C_occupied,D_occupied);
	map_4(stepA,stepB,stepC,stepD,occupied,A_occupied,B_occupied,C_occupied,D_occupied);
	map_3(stepA,stepB,stepC,stepD,occupied,A_occupied,B_occupied,C_occupied,D_occupied);
	map_2(stepA,stepB,stepC,stepD,occupied,A_occupied,B_occupied,C_occupied,D_occupied);	
	map_1(stepA,stepB,stepC,stepD,occupied,A_occupied,B_occupied,C_occupied,D_occupied);
	//
}

int moveA(int round)
{
	int step;
	srand(time(NULL));
	step=rand()%6+1;
	return step;
}
int moveB(int round)
{
	int step;
	srand(time(NULL));
	step=rand()%6+1;
	return step;
}
int moveC(int round)
{
	int step;
	srand(time(NULL));
	step=rand()%6+1;
	return step;
}
int moveD(int round)
{
	int step;
	srand(time(NULL));
	step=rand()%6+1;
	return step;
}
//玩家A丟骰 
int rotationA(int round,int jailA,int hospitalA,int stepA)
{
	int step;
	if(jailA==0&&hospitalA==0)
	{
		step=moveA(round);
		printf("-----------------------------------------------------------------------------------------\n");
		printf("現在是第 %d 回合\n",round);
		printf("輪到玩家 %c！\n",A.name);
		sleep(1);
		printf("擲骰子！\n"); 
		sleep(1);
		printf("玩家 %c 骰到了 %d點！\n",A.name,step);
		printf("移動中...\n");
		sleep(1);
		return step;
	}
	else if(jailA==1)
	{
		printf("-----------------------------------------------------------------------------------------\n");
		printf("現在是第 %d 回合\n",round);
	
		printf("輪到玩家 %c！\n",A.name);
		sleep(1);
		printf("玩家 %c 正在監獄中！骰到偶數下回合即可出獄\n",A.name); 
		
		printf("擲骰子！\n"); 
		step=moveA(round);
		sleep(1);
		printf("玩家 %c 骰到了 %d點！\n",A.name,step);
		
		if(step==2||step==4||step==6)
			printf("骰到 %d 恭喜出獄！\n",step);
		else if(step==1||step==3||step==5)
			printf("骰到 %d 繼續關！\n",step);
		return step;
	}
	else if(hospitalA!=0)
	{
		printf("-----------------------------------------------------------------------------------------\n");
		printf("現在是第 %d 回合\n",round);
		printf("輪到玩家 %c！\n",A.name);
		sleep(1);
		printf("玩家 %c 因接觸確診病患正在醫院中！下回合即可出院\n",A.name);
		if(hospitalA>=2)
			step=rand()%6+1;
		return step;
	}
}
//玩家B丟骰 
int rotationB(int round,int jailB,int hospitalB,int stepB)
{
	int step;
	if(jailB==0&&hospitalB==0)
	{
		step=moveB(round);
		printf("-----------------------------------------------------------------------------------------\n");
		printf("現在是第 %d 回合\n",round);
	
		printf("輪到玩家 %c！\n",B.name);
		sleep(1);
		printf("擲骰子！\n"); 
		sleep(1);
		printf("玩家 %c 骰到了 %d點！\n",B.name,step);
	
		printf("移動中...\n");
		sleep(1);
		return step;
	}
	else if(jailB==1)
	{
		printf("-----------------------------------------------------------------------------------------\n");
		printf("現在是第 %d 回合\n",round);
	
		printf("輪到玩家 %c！\n",B.name);
		
		printf("玩家 %c 正在監獄中！骰到偶數下回合即可出獄\n",B.name); 
		sleep(1);
		printf("擲骰子！\n"); 
		step=moveB(round);
		sleep(1);
		printf("玩家 %c 骰到了 %d點！\n",B.name,step);
		
		if(step==2||step==4||step==6)
			printf("骰到 %d 恭喜出獄！\n",step);
		else if(step==1||step==3||step==5)
			printf("骰到 %d 繼續關！\n",step);
		return step;
	}
	else if(hospitalB!=0)
	{
		printf("-----------------------------------------------------------------------------------------\n");
		printf("現在是第 %d 回合\n",round);
		printf("輪到玩家 %c！\n",B.name);
		sleep(1);
		printf("玩家 %c 因接觸確診病患正在醫院中！下回合即可出院\n",B.name);
		if(hospitalB>=2)
			step=rand()%6+1;
		return step;
	}
}
//玩家C丟骰 
int rotationC(int round,int jailC,int hospitalC,int stepC)
{
	int step;
	if(jailC==0&&hospitalC==0)
	{
		step=moveC(round);
		printf("-----------------------------------------------------------------------------------------\n");
		printf("現在是第 %d 回合\n",round);
		
		printf("輪到玩家 %c！\n",C.name);
		sleep(1);
		printf("擲骰子！\n"); 
		sleep(1);
		printf("玩家 %c 骰到了 %d點！\n",C.name,step);
	
		printf("移動中...\n");
		sleep(1);
		return step;
	}
	else if(jailC==1)
	{
		printf("-----------------------------------------------------------------------------------------\n");
		printf("現在是第 %d 回合\n",round);
	
		printf("輪到玩家 %c！\n",C.name);
		
		printf("玩家 %c 正在監獄中！骰到偶數下回合即可出獄\n",C.name); 
		sleep(1);
		printf("擲骰子！\n"); 
		step=moveC(round);
		sleep(1);
		printf("玩家 %c 骰到了 %d點！\n",C.name,step);
		
		if(step==2||step==4||step==6)
			printf("骰到 %d 恭喜出獄！\n",step);
		else if(step==1||step==3||step==5)
			printf("骰到 %d 繼續關！\n",step);
		return step;
	}
	else if(hospitalC!=0)
	{
		printf("-----------------------------------------------------------------------------------------\n");
		printf("現在是第 %d 回合\n",round);
		printf("輪到玩家 %c！\n",C.name);
		sleep(1);
		printf("玩家 %c 因接觸確診病患正在醫院中！下回合即可出院\n",C.name);
		if(hospitalC>=2)
			step=rand()%6+1;
		return step;
	}
}
//玩家D丟骰 
int rotationD(int round,int jailD,int hospitalD,int stepD)
{
	int step;
	if(jailD==0&&hospitalD==0)
	{
		step=moveD(round);
		printf("-----------------------------------------------------------------------------------------\n");
		printf("現在是第 %d 回合\n",round);
		
		printf("輪到玩家 %c！\n",D.name);
		sleep(1);
		printf("擲骰子！\n"); 
		sleep(1);
		printf("玩家 %c 骰到了 %d點！\n",D.name,step);
	
		printf("移動中...\n");
		sleep(1);
		return step;
	}
	else if(jailD==1)
	{
		printf("-----------------------------------------------------------------------------------------\n");
		printf("現在是第 %d 回合\n",round);
	
		printf("輪到玩家 %c！\n",D.name);
		sleep(1);
		printf("玩家 %c 正在監獄中！骰到偶數下回合即可出獄\n",D.name); 
		
		printf("擲骰子！\n"); 
		step=moveD(round);
		sleep(1);
		printf("玩家 %c 骰到了 %d點！\n",D.name,step);
		
		if(step==2||step==4||step==6)
			printf("骰到 %d 恭喜出獄！\n",step);
		else if(step==1||step==3||step==5)
			printf("骰到 %d 繼續關！\n",step);
		return step;
	}
	else if(hospitalD!=0)
	{
		printf("-----------------------------------------------------------------------------------------\n");
		printf("現在是第 %d 回合\n",round);
		printf("輪到玩家 %c！\n",D.name);
		sleep(1);
		printf("玩家 %c 因接觸確診病患正在醫院中！下回合即可出院\n",D.name);
		if(hospitalD>=2)
			step=rand()%6+1;
		return step;
	}
}
//機會
void changeplace(int *stepA,int *stepB,int *stepC,int *stepD){
			int swap1=*stepA,swap2=*stepB,swap3=*stepC,swap4=*stepD;
			int lol=0;
			srand(time(NULL));
			if(A.lose==1)	lol++;
			if(B.lose==1)	lol++;
			if(C.lose==1)	lol++;
			if(D.lose==1)	lol++;
			if(lol==0){
				int r=rand()%9;
				switch (r){
					case 0:
						*stepA=swap2;
						*stepB=swap1;
						*stepC=swap4;
						*stepD=swap3;
						break;
					case 1:
						*stepA=swap2;
						*stepB=swap3;
						*stepC=swap4;
						*stepD=swap1;
						break;
					case 2:
						*stepA=swap2;
						*stepB=swap4;
						*stepC=swap1;
						*stepD=swap3;
						break;
					case 3:
						*stepA=swap3;
						*stepB=swap1;
						*stepC=swap4;
						*stepD=swap2;
						break;
					case 4:
						*stepA=swap3;
						*stepB=swap4;
						*stepC=swap1;
						*stepD=swap2;
						break;
					case 5:
						*stepA=swap3;
						*stepB=swap4;
						*stepC=swap2;
						*stepD=swap1;
						break;
					case 6:
						*stepA=swap4;
						*stepB=swap1;
						*stepC=swap2;
						*stepD=swap3;
						break;
					case 7:
						*stepA=swap4;
						*stepB=swap3;
						*stepC=swap1;
						*stepD=swap2;
						break;
					case 8:
						*stepA=swap4;
						*stepB=swap3;
						*stepC=swap2;
						*stepD=swap1;
						break;
				}
			}
			else if(lol==1){
				if(A.lose==1){
					int r=rand()%2;
					if(r==0){
						*stepB=swap3;
						*stepC=swap4;
						*stepD=swap2;
					}
					if(r==1){
						*stepB=swap4;
						*stepC=swap2;
						*stepD=swap3;
					}
				}
				if(B.lose==1){
					int r=rand()%2;
					if(r==0){
						*stepA=swap3;
						*stepC=swap4;
						*stepD=swap1;
					}
					if(r==1){
						*stepA=swap4;
						*stepC=swap1;
						*stepD=swap3;
					}
				}
				if(C.lose==1){
					int r=rand()%2;
					if(r==0){
						*stepA=swap2;
						*stepB=swap4;
						*stepD=swap1;
					}
					if(r==1){
						*stepA=swap4;
						*stepB=swap1;
						*stepD=swap2;
					}
				}
				if(D.lose==1){
					int r=rand()%2;
					if(r==0){
						*stepA=swap2;
						*stepB=swap3;
						*stepC=swap1;
					}
					if(r==1){
						*stepA=swap3;
						*stepB=swap1;
						*stepC=swap2;
					}
				}	
			}
			else if(lol==2){
				if(C.lose==1&&D.lose==1){
					*stepA=swap2;
					*stepB=swap1;
				}
				else if(B.lose==1&&D.lose==1){
					*stepA=swap3;
					*stepC=swap1;
				}
				else if(C.lose==1&&B.lose==1){
					*stepA=swap4;
					*stepD=swap1;
				}
				else if(A.lose==1&&D.lose==1){
					*stepB=swap3;
					*stepC=swap2;
				}
				else if(C.lose==1&&A.lose==1){
					*stepB=swap4;
					*stepD=swap2;
				}
				else if(A.lose==1&&B.lose==1){
					*stepC=swap4;
					*stepD=swap3;
				}
			}
}
int fate_A(int *stepA,int *stepB,int *stepC,int *stepD)
{
	int card1, maxMoney=0, swapstep;
	int r;
	int swap1=0,swap2=0,swap3=0,swap4=0;
	srand(time(NULL));
	card1 = rand()%11+1;
	switch (card1)
	{
		case 1:
			printf("全部玩家隨機互換\n");
			sleep(1);
			changeplace(stepA,stepB,stepC,stepD);
			break;
		case 2:
			printf("玩家 %c 賄賂，前往監獄\n",A.name);
			sleep(1);
			*stepA=8;
			break;
		case 3:
			printf("玩家 %c 運氣真好，可以直接去起點拿起點獎勵\n",A.name);
			sleep(1);
			*stepA=1;
			break;
		case 4:
			printf("玩家 %c 在路上出車禍，送醫院\n",A.name);
			sleep(1);
			*stepA=13;
			break;
		case 5:
			printf("玩家 %c 遭勒贖，損失黃金300公斤\n",A.name);
			sleep(1);
			A.money=A.money-300;
			break;
		case 6:
			maxMoney=B.money;
			if(maxMoney<C.money)	maxMoney=C.money; 
			if(maxMoney<D.money)	maxMoney=D.money;
			if(maxMoney<=A.money){
					maxMoney=A.money;
					printf("玩家 %c 受上天護佑，黃金增加 50 公斤\n",A.name);
					sleep(1);
					A.money=A.money+50;
			}
			else if(maxMoney>A.money){
				A.money=maxMoney;
				printf("玩家 %c 受上天護佑，黃金大幅提升\n",A.name);
				sleep(1);
			}
			break;
		case 7:
			printf("玩家 %c 賄賂，前往監獄\n",A.name);
			sleep(1);
			*stepA=8;
			break;
		case 8:
			printf("玩家 %c 運氣真好，可以直接去起點拿起點獎勵\n",A.name);
			sleep(1);
			*stepA=1;
			break;
		case 9:
			printf("玩家 %c 在路上出車禍，送醫院\n",A.name);
			sleep(1);
			*stepA=13;
			break;
		case 10:
			printf("玩家 %c 遭勒贖，損失黃金300公斤\n",A.name);
			sleep(1);
			A.money=A.money-300;
			break;
		case 11:
			maxMoney=B.money;
			if(maxMoney<C.money)	maxMoney=C.money; 
			if(maxMoney<D.money)	maxMoney=D.money;
			if(maxMoney<=A.money){
					maxMoney=A.money;
					printf("玩家 %c 受上天護佑，黃金增加 50 公斤\n",A.name);
					sleep(1);
					A.money=A.money+50;
			}
			else if(maxMoney>A.money)
			{
				A.money=A.money+2000;
				printf("玩家 %c 受上天護佑，黃金大幅提升\n",A.name);
				sleep(1);
			}
			break;
	}
}

int fate_B(int *stepA,int *stepB,int *stepC,int *stepD)
{
	int card1, maxMoney=0, swapstep;
	int r;
	int swap1=0,swap2=0,swap3=0,swap4=0;
	srand(time(NULL));
	card1 = rand()%11+1;
	switch (card1)
	{
		case 1:
			printf("全部玩家隨機互換\n");
			sleep(1);
			changeplace(stepA,stepB,stepC,stepD);
			break;
		case 2:
			printf("玩家 %c 賄賂，前往監獄\n",B.name);
			sleep(1);
			*stepB=8;
			break;
		case 3:
			printf("玩家 %c 運氣真好，可以直接去起點拿起點獎勵\n",B.name);
			sleep(1);
			*stepB=1;
			break;
		case 4:
			printf("玩家 %c 在路上出車禍，送醫院\n",B.name);
			sleep(1);
			*stepB=13;
			break;
		case 5:
			printf("玩家 %c 遭勒贖，損失黃金300公斤\n",B.name);
			sleep(1);
			B.money=B.money-300;
			break;
		case 6:
			maxMoney=A.money;
			if(maxMoney<C.money)	maxMoney=C.money; 
			if(maxMoney<D.money)	maxMoney=D.money;
			if(maxMoney<=B.money){
					maxMoney=B.money;
					printf("玩家 %c 受上天護佑，黃金增加 50 公斤\n",B.name);
					sleep(1);
					B.money=B.money+50;
			}
			else if(maxMoney>B.money){
				B.money=maxMoney;
				printf("玩家 %c 受上天護佑，黃金大幅提升\n",B.name);
				sleep(1);
			}
			break;
		case 7:
			printf("玩家 %c 賄賂，前往監獄\n",B.name);
			sleep(1);
			*stepB=8;
			break;
		case 8:
			printf("玩家 %c 運氣真好，可以直接去起點拿起點獎勵\n",B.name);
			sleep(1);
			*stepB=1;
			break;
		case 9:
			printf("玩家 %c 在路上出車禍，送醫院\n",B.name);
			sleep(1);
			*stepB=13;
			break;
		case 10:
			printf("玩家 %c 遭勒贖，損失黃金300公斤\n",B.name);
			sleep(1);
			B.money=B.money-300;
			break;
		case 11:
			maxMoney=A.money;
			if(maxMoney<C.money)	maxMoney=C.money; 
			if(maxMoney<D.money)	maxMoney=D.money;
			if(maxMoney<=B.money){
					maxMoney=B.money;
					printf("玩家 %c 受上天護佑，黃金增加 50 公斤\n",B.name);
					sleep(1);
					B.money=B.money+50;
			}
			else if(maxMoney>B.money){
				B.money=B.money+2000;
				printf("玩家 %c 受上天護佑，黃金大幅提升\n",B.name);
				sleep(1);
			}
			break;
	}
}

int fate_C(int *stepA,int *stepB,int *stepC,int *stepD)
{
	int card1, maxMoney=0, swapstep;
	int r;
	int swap1=0,swap2=0,swap3=0,swap4=0;
	srand(time(NULL));
	card1 = rand()%11+1;
	switch (card1)
	{
		case 1:
			printf("全部玩家隨機互換\n");
			sleep(1);
			changeplace(stepA,stepB,stepC,stepD);
			break;
		case 2:
			printf("玩家 %c 賄賂，前往監獄\n",C.name);
			sleep(1);
			*stepC=8;
			break;
		case 3:
			printf("玩家 %c 運氣真好，可以直接去起點拿起點獎勵\n",C.name);
			sleep(1);
			*stepC=1;
			break;
		case 4:
			printf("玩家 %c 在路上出車禍，送醫院\n",C.name);
			sleep(1);
			*stepC=13;
			break;
		case 5:
			printf("玩家 %c 遭勒贖，損失黃金300公斤\n",C.name);
			sleep(1);
			C.money=C.money-300;
			break;
		case 6:
			maxMoney=A.money;
			if(maxMoney<B.money)	maxMoney=B.money; 
			if(maxMoney<D.money)	maxMoney=D.money;
			if(maxMoney<=C.money){
					maxMoney=C.money;
					printf("玩家 %c 受上天護佑，黃金增加 50 公斤\n",C.name);
					sleep(1);
					C.money=C.money+50;
			}
			else if(maxMoney>C.money){
				C.money=maxMoney;
				printf("玩家 %c 受上天護佑，黃金大幅提升\n",C.name);
				sleep(1);
			}
			break;
		case 7:
			printf("玩家 %c 賄賂，前往監獄\n",C.name);
			sleep(1);
			*stepC=8;
			break;
		case 8:
			printf("玩家 %c 運氣真好，可以直接去起點拿起點獎勵\n",C.name);
			sleep(1);
			*stepC=1;
			break;
		case 9:
			printf("玩家 %c 在路上出車禍，送醫院\n",C.name);
			sleep(1);
			*stepC=13;
			break;
		case 10:
			printf("玩家 %c 遭勒贖，損失黃金300公斤\n",C.name);
			sleep(1);
			C.money=C.money-300;
			break;
		case 11:
			maxMoney=A.money;
			if(maxMoney<B.money)	maxMoney=B.money; 
			if(maxMoney<D.money)	maxMoney=D.money;
			if(maxMoney<=C.money){
					maxMoney=C.money;
					printf("玩家 %c 受上天護佑，黃金增加 50 公斤\n",C.name);
					sleep(1);
					C.money=C.money+50;
			}
			else if(maxMoney>C.money){
				C.money=C.money+2000;
				printf("玩家 %c 受上天護佑，黃金大幅提升\n",C.name);
				sleep(1);
			}
			break;
	}
}

int fate_D(int *stepA,int *stepB,int *stepC,int *stepD)
{
	int card1, maxMoney=0, swapstep;
	int r;
	int swap1=0,swap2=0,swap3=0,swap4=0;
	srand(time(NULL));
	card1 = rand()%11+1;
	switch (card1)
	{
		case 1:
			printf("全部玩家隨機互換\n");
			sleep(1);
			changeplace(stepA,stepB,stepC,stepD);
			break;
		case 2:
			printf("玩家 %c 賄賂，前往監獄\n",D.name);
			
			sleep(1);
			*stepD=8;
			break;
		case 3:
			printf("玩家 %c 運氣真好，可以直接去起點拿起點獎勵\n",D.name);
			sleep(1);
			*stepD=1;
			break;
		case 4:
			printf("玩家 %c 在路上出車禍，送醫院\n",D.name);
			sleep(1);
			*stepD=13;
			break;
		case 5:
			printf("玩家 %c 遭勒贖，損失黃金300公斤\n",D.name);
			sleep(1);
			D.money=D.money-300;
			break;
		case 6:
			maxMoney=A.money;
			if(maxMoney<C.money)	maxMoney=C.money; 
			if(maxMoney<B.money)	maxMoney=B.money;
			if(maxMoney<=D.money){
					maxMoney=D.money;
					printf("玩家 %c 受上天護佑，黃金增加 50 公斤\n",D.name);
					sleep(1);
					D.money=D.money+50;
			}
			else if(maxMoney>D.money){
				D.money=maxMoney;
				printf("玩家 %c 受上天護佑，黃金大幅提升\n",D.name);
				sleep(1);
			}
			break;
		case 7:
			printf("玩家 %c 賄賂，前往監獄\n",D.name);
			sleep(1);
			*stepD=8;
			break;
		case 8:
			printf("玩家 %c 運氣真好，可以直接去起點拿起點獎勵\n",D.name);
			sleep(1);
			*stepD=1;
			break;
		case 9:
			printf("玩家 %c 在路上出車禍，送醫院\n",D.name);
			sleep(1);
			*stepD=13;
			break;
		case 10:
			printf("玩家 %c 遭勒贖，損失黃金300公斤\n",D.name);
			sleep(1);
			D.money=D.money-300;
			break;
		case 11:
			maxMoney=A.money;
			if(maxMoney<C.money)	maxMoney=C.money; 
			if(maxMoney<B.money)	maxMoney=B.money;
			if(maxMoney<=D.money){
					maxMoney=D.money;
					printf("玩家 %c 受上天護佑，黃金增加 50 公斤\n",D.name);
					sleep(1);
					D.money=D.money+50;
			}
			else if(maxMoney>D.money){
				D.money=D.money+2000;
				printf("玩家 %c 受上天護佑，黃金大幅提升\n",D.name);
				sleep(1);
			}
			break;
	}
}
//機會
void lottery_A(){
	srand(time(NULL));
	int r, stake; 
	char option1;
	printf("只有歐洲人才能抽中大獎!\n");
	sleep(1);
	printf("是否開始遊戲?(Y/N)\n");
	play:
	scanf("%c",&option1);
	while(option1!='Y'&&option1!='y'&&option1!='N'&&option1!='n')
	{
		printf("輸入錯誤！ 請重新輸入(Y/N):");
		fflush(stdin);
		scanf("%c",&option1);
		getchar();
	}
	if(option1=='Y'||option1=='y')
	{ 
		if(A.money<300)
		{
			printf("沒錢勸你還是別玩了\n");
		}
		else 
		{
			printf("請輸入您要遊玩的金額\n");
			fflush(stdin);
			while(scanf("%d",&stake))
			{
			fflush(stdin);
				if(stake>A.money)
				{
					printf("野心別太大，再輸入一次\n");
				}
				else if(stake<=A.money)
					break;
			}
			r=rand()%10;
			if(r==9)
			{
				A.money+=stake*5;
				printf("恭喜你賺到了!!!(%d)\n",A.money);
			}
			else 
			{
				A.money-=stake;
				printf("運氣真不好呢...(%d)\n",A.money);
			}
			printf("要繼續遊玩嗎?(Y/N)\n");
			goto play;
		}
	} 
    else if(option1=='n'||option1=='N')
	{
		printf("結束\n");     
	}	
}
void lottery_B(){
	srand(time(NULL));
	int r, stake; 
	char option1;
	printf("只有歐洲人才能抽中大獎!\n");
	sleep(1);
	printf("是否開始遊戲?(Y/N)\n");
	play:
	scanf("%c",&option1);
	while(option1!='Y'&&option1!='y'&&option1!='N'&&option1!='n')
	{
		printf("輸入錯誤！ 請重新輸入(Y/N):");
		fflush(stdin);
		scanf("%c",&option1);
		getchar();
	}
	if(option1=='Y'||option1=='y')
	{ 
		if(B.money<300)
		{
			printf("沒錢勸你還是別玩了\n");
		}
		else 
		{
			printf("請輸入您要遊玩的金額\n");
			fflush(stdin);
			while(scanf("%d",&stake))
			{
			fflush(stdin);
				if(stake>B.money)
				{
					printf("野心別太大，再輸入一次\n");
				}
				else if(stake<=B.money)
					break;
			}
			r=rand()%10;
			if(r==9)
			{
				B.money+=stake*5;
				printf("恭喜你賺到了!!!(%d)\n",B.money);
			}
			else 
			{
				B.money-=stake;
				printf("運氣真不好呢...(%d)\n",B.money);
			}
			printf("要繼續遊玩嗎?(Y/N)\n");
			goto play;
		}
	} 
    else if(option1=='n'||option1=='N')
	{
		printf("結束\n");
	}	
}
void lottery_C(){
	srand(time(NULL));
	int r, stake; 
	char option1;
	printf("只有歐洲人才能抽中大獎!\n");
	sleep(1);
	printf("是否開始遊戲?(Y/N)\n");
	play:
	scanf("%c",&option1);
	while(option1!='Y'&&option1!='y'&&option1!='N'&&option1!='n')
	{
		printf("輸入錯誤！ 請重新輸入(Y/N):");
		fflush(stdin);
		scanf("%c",&option1);
		getchar();
	}
	if(option1=='Y'||option1=='y')
	{ 
		if(C.money<300)
		{
			printf("沒錢勸你還是別玩了\n");
		}
		else 
		{
			printf("請輸入您要遊玩的金額\n");
			fflush(stdin);
			while(scanf("%d",&stake))
			{
			fflush(stdin);
				if(stake>C.money)
				{
					printf("野心別太大，再輸入一次\n");
				}
				else if(stake<=C.money)
					break;
			}
			r=rand()%10;
			if(r==9)
			{
				C.money+=stake*5;
				printf("恭喜你賺到了!!!(%d)\n",C.money);
			}
			else 
			{
				C.money-=stake;
				printf("運氣真不好呢...(%d)\n",C.money);
			}
			printf("要繼續遊玩嗎?(Y/N)\n");
			goto play;
		}
	} 
    else if(option1=='n'||option1=='N')
	{
		printf("結束\n");     
	}	
}
void lottery_D(){
	srand(time(NULL));
	int r, stake; 
	char option1;
	printf("只有歐洲人才能抽中大獎!\n");
	sleep(1);
	printf("是否開始遊戲?(Y/N)\n");
	play:
	scanf("%c",&option1);
	while(option1!='Y'&&option1!='y'&&option1!='N'&&option1!='n')
	{
		printf("輸入錯誤！ 請重新輸入(Y/N):");
		fflush(stdin);
		scanf("%c",&option1);
		getchar();
	}
	if(option1=='Y'||option1=='y')
	{ 
		if(D.money<300)
		{
			printf("沒錢勸你還是別玩了\n");
		}
		else 
		{
			printf("請輸入您要遊玩的金額\n");
			fflush(stdin);
			while(scanf("%d",&stake))
			{
			fflush(stdin);
				if(stake>D.money)
				{
					printf("野心別太大，再輸入一次\n");
				}
				else if(stake<=D.money)
					break;
			}
			r=rand()%10;
			if(r==9)
			{
				D.money+=stake*5;
				printf("恭喜你賺到了!!!(%d)\n",D.money);
			}
			else 
			{
				D.money-=stake;
				printf("運氣真不好呢...(%d)\n",D.money);
			}
			printf("要繼續遊玩嗎?(Y/N)\n");
			goto play;
		}
	} 
    else if(option1=='n'||option1=='N')
	{
		printf("結束\n");     
	}	
}
void randomplaceA(int *stepA){
	int arr[17]={2,3,4,5,7,9,10,12,14,15,16,17,19,20,21,22,24};
	srand(time(NULL));
	int r=rand()%17;
	*stepA=arr[r];
}

void randomplaceB(int *stepB){
	int arr[17]={2,3,4,5,7,9,10,12,14,15,16,17,19,20,21,22,24};
	srand(time(NULL));
	int r=rand()%17;
	*stepB=arr[r];
}

void randomplaceC(int *stepC){
	int arr[17]={2,3,4,5,7,9,10,12,14,15,16,17,19,20,21,22,24};
	srand(time(NULL));
	int r=rand()%17;
	*stepC=arr[r];
}

void randomplaceD(int *stepD){
	int arr[17]={2,3,4,5,7,9,10,12,14,15,16,17,19,20,21,22,24};
	srand(time(NULL));
	int r=rand()%17;
	*stepD=arr[r];
}
//ii的用途跟 [step-1]是一樣的 

int oppo_A(int *stepA){
	srand(time(NULL));
	int card2=rand()%11;
	int choo, walk;
	int ii;
	int r;
	switch (card2){
		case 0:
			lottery_A();
			break;
		case 1:
			printf("其他玩家遭遇金融危機，損失黃金200公斤\n");
			sleep(1);
			if(B.lose!=1)	B.money-=200;
			if(C.lose!=1)	C.money-=200;
			if(D.lose!=1)	D.money-=200;
			break;
		case 2:
			printf("喜宴，其他玩家貢獻黃金100公斤的禮金\n");
			sleep(1);
			if(B.lose!=1){
				B.money-=100;
				A.money+=100;
			}	
			if(C.lose!=1){
				C.money-=100;
				A.money+=100;
			}	
			if(D.lose!=1){
				D.money-=100;
				A.money+=100;
			}	
			break;
		case 3:
			printf("天選之人!\n");
			sleep(1);
			choo=rand()%2+1;
			sleep(1);
			if (choo==1){
				printf("恭喜你獲得黃金1000公斤!\n");
				sleep(1);
				A.money+=1000; 
			} 
			else if(choo==2){
				printf("恭喜你的所有地產等級再上升1等!\n");
				sleep(1);
				for(ii=0;ii<24;ii++){
					if(A.occupied[ii]==1){
						if(b[ii].lvl!=3){
							b[ii].lvl+=1;
							b[ii].price=b[ii].price*b[ii].lvl;
						}
					}
				}
			}
			break;
		case 4:
			printf("一般隨機傳送!\n");
			sleep(1);
			randomplaceA(stepA);
			break;
		case 5:
			printf("抽取所得稅\n");
			sleep(1);
			A.money-=200;
			break;
		case 6:
			printf("投資失利，損失500公斤的黃金\n");
			sleep(1);
			A.money-=500;
			break;
		case 7:
			printf("投資獲利，增加600公斤的黃金\n");
			sleep(1);
			A.money+=600;
			break;
		case 8:
			walk=rand()%3+1;
			printf("再前進%d步\n",walk);
			sleep(1);
			*stepA=*stepA+walk;
			break;
		case 9:
			walk=rand()%3+1;
			printf("再後退%d步\n",walk);
			sleep(1);
			*stepA=*stepA-walk;
			break;
		case 10:
			printf("骰到3(含以上)即可獲得200公斤黃金！\n");
			sleep(1);
			sleep(1);
			r=rand()%6+1;
			printf("骰到%d點\n",r);
			sleep(1);
			if(r>=3)
			{
				printf("恭喜！\n");
				sleep(1);
				B.money+=200; 
			}
			else
				printf("可惜！\n");
				sleep(1);
			break;
	}
}

int oppo_B(int *stepB){
	srand(time(NULL));
	int card2=rand()%11;
	int choo, walk;
	int r;
	int ii;
	switch (card2){
		case 0:
			lottery_B();
			break;
		case 1:
			printf("其他玩家遭遇金融危機，損失黃金200公斤\n");
			sleep(1);
			if(A.lose!=1)	A.money-=200;
			if(C.lose!=1)	C.money-=200;
			if(D.lose!=1)	D.money-=200;
			break;
		case 2:
			printf("喜宴，其他玩家貢獻黃金100公斤的禮金\n");
			sleep(1);
			if(A.lose!=1){
				A.money-=100;
				B.money+=100;
			}	
			if(C.lose!=1){
				C.money-=100;
				B.money+=100;
			}	
			if(D.lose!=1){
				D.money-=100;
				B.money+=100;
			}	
			break;
		case 3:
			printf("天選之人!\n");
			sleep(1);
			choo=rand()%2+1;
			sleep(1);
			if (choo==1){
				printf("恭喜你獲得黃金1000公斤!\n");
				sleep(1);
				B.money+=1000; 
			} 
			else if(choo==2){
				printf("恭喜你的所有地產等級再上升1等!\n");
				sleep(1);
				for(ii=0;ii<24;ii++){
					if(B.occupied[ii]==2){
						if(b[ii].lvl!=3){
							b[ii].lvl+=1;
							b[ii].price=b[ii].price*b[ii].lvl;
						}
					}
				}
			}
			break;
		case 4:
			printf("一般隨機傳送!\n");
			sleep(1);
			randomplaceB(stepB);
			break;
		case 5:
			printf("抽取所得稅\n");
			sleep(1);
			B.money-=200;
			break;
		case 6:
			printf("投資失利，損失500公斤的黃金\n");
			sleep(1);
			B.money-=500;
			break;
		case 7:
			printf("投資獲利，增加600公斤的黃金\n");
			sleep(1);
			B.money+=600;
			break;
		case 8:
			walk=rand()%3+1;
			printf("再前進%d步\n",walk);
			sleep(1);
			*stepB=*stepB+walk;
			break;
		case 9:
			walk=rand()%3+1;
			printf("再後退%d步\n",walk);
			sleep(1);
			*stepB=*stepB-walk;
			break;
		case 10:
			printf("骰到3(含以上)即可獲得200公斤黃金！\n");
			sleep(1);
			sleep(1);
			r=rand()%6+1;
			printf("骰到%d點\n",r);
			if(r>=3)
			{
				printf("恭喜！\n");
				B.money+=200; 
			}
			else
				printf("可惜！\n");
			break;
	}
}

int oppo_C(int *stepC){
	srand(time(NULL));
	int card2=rand()%11;
	int choo, walk;
	int ii;
	int r;
	switch (card2){
		case 0:
			lottery_C();
			break;
		case 1:
			printf("其他玩家遭遇金融危機，損失黃金200公斤\n");
			sleep(1);
			if(A.lose!=1)	A.money-=200;
			if(B.lose!=1)	B.money-=200;
			if(D.lose!=1)	D.money-=200;
			break;
		case 2:
			printf("喜宴，其他玩家貢獻黃金100公斤的禮金\n");
			sleep(1);
			if(A.lose!=1){
				A.money-=100;
				C.money+=100;
			}	
			if(B.lose!=1){
				B.money-=100;
				C.money+=100;
			}	
			if(D.lose!=1){
				D.money-=100;
				C.money+=100;
			}	
			break;
		case 3:
			printf("天選之人!\n");
			sleep(1);
			choo=rand()%2+1;
			sleep(1);
			if (choo==1){
				printf("恭喜你獲得黃金1000公斤!\n");
				sleep(1);
				C.money+=1000; 
			} 
			else if(choo==2){
				printf("恭喜你的所有地產等級再上升1等!\n");
				sleep(1);
				for(ii=0;ii<24;ii++){
					if(C.occupied[ii]==3){
						if(b[ii].lvl!=3){
							b[ii].lvl+=1;
							b[ii].price=b[ii].price*b[ii].lvl;
						}
					}
				}
			}
			break;
		case 4:
			printf("一般隨機傳送!\n");
			sleep(1);
			randomplaceC(stepC);
			break;
		case 5:
			printf("抽取所得稅\n");
			sleep(1);
			C.money-=200;
			break;
		case 6:
			printf("投資失利，損失500公斤的黃金\n");
			sleep(1);
			C.money-=500;
			break;
		case 7:
			printf("投資獲利，增加600公斤的黃金\n");
			sleep(1);
			C.money+=600;
			break;
		case 8:
			walk=rand()%3+1;
			printf("再前進%d步\n",walk);
			sleep(1);
			*stepC=*stepC+walk;
			break;
		case 9:
			walk=rand()%3+1;
			printf("再後退%d步\n",walk);
			sleep(1);
			*stepC=*stepC-walk;
			break;
		case 10:
			printf("骰到3(含以上)即可獲得200公斤黃金！\n");
			sleep(1);
			r=rand()%6+1;
			printf("骰到%d點\n",r);
			if(r>=3)
			{
				printf("恭喜！\n");
				B.money+=200; 
			}
			else
				printf("可惜！\n");
			break;
	}
}

int oppo_D(int *stepD){
	srand(time(NULL));
	int card2=rand()%11;
	int choo, walk;
	int ii;
	int r;
	switch (card2){
		case 0:
			lottery_D();
			break;
		case 1:
			printf("其他玩家遭遇金融危機，損失黃金200公斤\n");
			sleep(1);
			if(A.lose!=1)	A.money-=200;
			if(B.lose!=1)	B.money-=200;
			if(C.lose!=1)	C.money-=200;
			break;
		case 2:
			printf("喜宴，其他玩家貢獻黃金100公斤的禮金\n");
			sleep(1);
			if(A.lose!=1){
				A.money-=100;
				D.money+=100;
			}	
			if(B.lose!=1){
				B.money-=100;
				D.money+=100;
			}	
			if(C.lose!=1){
				C.money-=100;
				D.money+=100;
			}	
			break;
		case 3:
			printf("天選之人!\n");
			sleep(1);
			choo=rand()%2+1;
			sleep(1);
			if (choo==1){
				printf("恭喜你獲得黃金1000公斤!\n");
				sleep(1);
				D.money+=1000; 
			} 
			else if(choo==2){
				printf("恭喜你的所有地產等級再上升1等!\n");
				sleep(1);
				for(ii=0;ii<24;ii++){
					if(D.occupied[ii]==4){
						if(b[ii].lvl!=3){
							b[ii].lvl+=1;
							b[ii].price=b[ii].price*b[ii].lvl;
						}
					}
				}
			}
			break;
		case 4:
			printf("一般隨機傳送!\n");
			sleep(1);
			randomplaceD(stepD);
			break;
		case 5:
			printf("抽取所得稅\n");
			sleep(1);
			D.money-=200;
			break;
		case 6:
			printf("投資失利，損失500公斤的黃金\n");
			sleep(1);
			D.money-=500;
			break;
		case 7:
			printf("投資獲利，增加600公斤的黃金\n");
			sleep(1);
			D.money+=600;
			break;
		case 8:
			walk=rand()%3+1;
			printf("再前進%d步\n",walk);
			sleep(1);
			*stepD=*stepD+walk;
			break;
		case 9:
			walk=rand()%3+1;
			printf("再後退%d步\n",walk);
			sleep(1);
			*stepD=*stepD-walk;
			break;
		case 10:
			printf("骰到3(含以上)即可獲得200公斤黃金！\n");
			sleep(1);
			r=rand()%6+1;
			printf("骰到%d點\n",r);
			if(r>=3)
			{
				printf("恭喜！\n");
				B.money+=200; 
			}
			else
				printf("可惜！\n");
			break;
	}
} 
int walkA(int walkA)
{
	if(walkA==1)
	{
		printf("\n-----------------------------------------------------------------------------------------\n");
		printf("玩家 %c 目前正位於 %s！ 獲得起點獎勵 目前擁有：%d公斤(黃金)\n",A.name,b[0].name,A.money);
	}
	if(walkA==2)
	{
		printf("\n-----------------------------------------------------------------------------------------\n");
		printf("玩家 %c 目前正位於 %s！  目前擁有：%d公斤(黃金)\n",A.name,b[1].name,A.money);
	}
	if(walkA==3)
	{
		printf("\n-----------------------------------------------------------------------------------------\n");
		printf("玩家 %c 目前正位於 %s！  目前擁有：%d公斤(黃金)\n",A.name,b[2].name,A.money);
	}
	if(walkA==4)
	{
		printf("\n-----------------------------------------------------------------------------------------\n");
		printf("玩家 %c 目前正位於 %s！  目前擁有：%d公斤(黃金)\n",A.name,b[3].name,A.money);
	}
	if(walkA==5)
	{
		printf("\n-----------------------------------------------------------------------------------------\n");
		printf("玩家 %c 目前正位於 %s！  目前擁有：%d公斤(黃金)\n",A.name,b[4].name,A.money);
	}
	if(walkA==6)
	{
		printf("\n-----------------------------------------------------------------------------------------\n");
		printf("玩家 %c 目前正位於 %s！  目前擁有：%d公斤(黃金)\n",A.name,b[5].name,A.money);
	}
	if(walkA==7)
	{
		printf("\n-----------------------------------------------------------------------------------------\n");
		printf("玩家 %c 目前正位於 %s！  目前擁有：%d公斤(黃金)\n",A.name,b[6].name,A.money);
	}
	if(walkA==8)
	{
		printf("\n-----------------------------------------------------------------------------------------\n");
		printf("玩家 %c 目前正位於 %s！ 骰到偶數下回合即可離開 \n",A.name,b[7].name);
	}
	if(walkA==9)
	{
		printf("\n-----------------------------------------------------------------------------------------\n");
		printf("玩家 %c 目前正位於 %s！  目前擁有：%d公斤(黃金)\n",A.name,b[8].name,A.money);
	}
	if(walkA==10)
	{
		printf("\n-----------------------------------------------------------------------------------------\n");
		printf("玩家 %c 目前正位於 %s！  目前擁有：%d公斤(黃金)\n",A.name,b[9].name,A.money);
	}
	if(walkA==11)
	{
		printf("\n-----------------------------------------------------------------------------------------\n");
		printf("玩家 %c 目前正位於 %s！  目前擁有：%d公斤(黃金)\n",A.name,b[10].name,A.money);
	}
	if(walkA==12)
	{
		printf("\n-----------------------------------------------------------------------------------------\n");
		printf("玩家 %c 目前正位於 %s！  目前擁有：%d公斤(黃金)\n",A.name,b[11].name,A.money);
	}
	if(walkA==13)
	{
		printf("\n-----------------------------------------------------------------------------------------\n");
		printf("玩家 %c 因接觸確診病患正在醫院中！ 目前擁有：%d公斤(黃金)\n",A.name,A.money); 
	}
	if(walkA==14)
	{
		printf("\n-----------------------------------------------------------------------------------------\n");
		printf("玩家 %c 目前正位於 %s！  目前擁有：%d公斤(黃金)\n",A.name,b[13].name,A.money);
	}
	if(walkA==15)
	{
		printf("\n-----------------------------------------------------------------------------------------\n");
		printf("玩家 %c 目前正位於 %s！  目前擁有：%d公斤(黃金)\n",A.name,b[14].name,A.money);
	}
	if(walkA==16)
	{
		printf("\n-----------------------------------------------------------------------------------------\n");
		printf("玩家 %c 目前正位於 %s！  目前擁有：%d公斤(黃金)\n",A.name,b[15].name,A.money);
	}
	if(walkA==17)
	{
		printf("\n-----------------------------------------------------------------------------------------\n");
		printf("玩家 %c 目前正位於 %s！  目前擁有：%d公斤(黃金)\n",A.name,b[16].name,A.money);
	}
	if(walkA==18)
	{
		printf("\n-----------------------------------------------------------------------------------------\n");
		printf("玩家 %c 目前正位於 %s！  目前擁有：%d公斤(黃金)\n",A.name,b[17].name,A.money);
	}
	if(walkA==19)
	{
		printf("\n-----------------------------------------------------------------------------------------\n");
		printf("玩家 %c 目前正位於 %s！  目前擁有：%d公斤(黃金)\n",A.name,b[18].name,A.money);
	}
	if(walkA==20)
	{
		printf("\n-----------------------------------------------------------------------------------------\n");
		printf("玩家 %c 目前正位於 %s！  目前擁有：%d公斤(黃金)\n",A.name,b[19].name,A.money);
	}
	if(walkA==21)
	{
		printf("\n-----------------------------------------------------------------------------------------\n");
		printf("玩家 %c 目前正位於 %s！  目前擁有：%d公斤(黃金)\n",A.name,b[20].name,A.money);
	}
	if(walkA==22)
	{
		printf("\n-----------------------------------------------------------------------------------------\n");
		printf("玩家 %c 目前正位於 %s！  目前擁有：%d公斤(黃金)\n",A.name,b[21].name,A.money);
	}
	if(walkA==23)
	{
		printf("\n-----------------------------------------------------------------------------------------\n");
		printf("玩家 %c 目前正位於 %s！  目前擁有：%d公斤(黃金)\n",A.name,b[22].name,A.money);
	}
	if(walkA==24)
	{
		printf("\n-----------------------------------------------------------------------------------------\n");
		printf("玩家 %c 目前正位於 %s！  目前擁有：%d公斤(黃金)\n",A.name,b[23].name,A.money);
	}
}
int walkB(int walkB)
{
	if(walkB==1)
	{
		printf("玩家 %c 目前正位於 %s！ 獲得起點獎勵 目前擁有：%d公斤(黃金)\n",B.name,b[0].name,B.money);
	}
	if(walkB==2)
	{
		printf("玩家 %c 目前正位於 %s！  目前擁有：%d公斤(黃金)\n",B.name,b[1].name,B.money);
	}
	if(walkB==3)
	{
		printf("玩家 %c 目前正位於 %s！  目前擁有：%d公斤(黃金)\n",B.name,b[2].name,B.money);
	}
	if(walkB==4)
	{
		printf("玩家 %c 目前正位於 %s！  目前擁有：%d公斤(黃金)\n",B.name,b[3].name,B.money);
	}
	if(walkB==5)
	{
		printf("玩家 %c 目前正位於 %s！  目前擁有：%d公斤(黃金)\n",B.name,b[4].name,B.money);
	}
	if(walkB==6)
	{
		printf("玩家 %c 目前正位於 %s！  目前擁有：%d公斤(黃金)\n",B.name,b[5].name,B.money);
	}
	if(walkB==7)
	{
		printf("玩家 %c 目前正位於 %s！  目前擁有：%d公斤(黃金)\n",B.name,b[6].name,B.money);
	}
	if(walkB==8)
	{
		printf("玩家 %c 目前正位於 %s！ 骰到偶數下回合即可離開 \n",B.name,b[7].name);
	}
	if(walkB==9)
	{
		printf("玩家 %c 目前正位於 %s！  目前擁有：%d公斤(黃金)\n",B.name,b[8].name,B.money);
	}
	if(walkB==10)
	{
		printf("玩家 %c 目前正位於 %s！  目前擁有：%d公斤(黃金)\n",B.name,b[9].name,B.money);
	}
	if(walkB==11)
	{
		printf("玩家 %c 目前正位於 %s！  目前擁有：%d公斤(黃金)\n",B.name,b[10].name,B.money);
	}
	if(walkB==12)
	{
		printf("玩家 %c 目前正位於 %s！  目前擁有：%d公斤(黃金)\n",B.name,b[11].name,B.money);
	}
	if(walkB==13)
	{
		printf("玩家 %c 因接觸確診病患正在醫院中！ 目前擁有：%d公斤(黃金)\n",B.name,B.money); 
	}
	if(walkB==14)
	{
		printf("玩家 %c 目前正位於 %s！  目前擁有：%d公斤(黃金)\n",B.name,b[13].name,B.money);
	}
	if(walkB==15)
	{
		printf("玩家 %c 目前正位於 %s！  目前擁有：%d公斤(黃金)\n",B.name,b[14].name,B.money);
	}
	if(walkB==16)
	{
		printf("玩家 %c 目前正位於 %s！  目前擁有：%d公斤(黃金)\n",B.name,b[15].name,B.money);
	}
	if(walkB==17)
	{
		printf("玩家 %c 目前正位於 %s！  目前擁有：%d公斤(黃金)\n",B.name,b[16].name,B.money);
	}
	if(walkB==18)
	{
		printf("玩家 %c 目前正位於 %s！  目前擁有：%d公斤(黃金)\n",B.name,b[17].name,B.money);
	}
	if(walkB==19)
	{
		printf("玩家 %c 目前正位於 %s！  目前擁有：%d公斤(黃金)\n",B.name,b[18].name,B.money);
	}
	if(walkB==20)
	{
		printf("玩家 %c 目前正位於 %s！  目前擁有：%d公斤(黃金)\n",B.name,b[19].name,B.money);
	}
	if(walkB==21)
	{
		printf("玩家 %c 目前正位於 %s！  目前擁有：%d公斤(黃金)\n",B.name,b[20].name,B.money);
	}
	if(walkB==22)
	{
		printf("玩家 %c 目前正位於 %s！  目前擁有：%d公斤(黃金)\n",B.name,b[21].name,B.money);
	}
	if(walkB==23)
	{
		printf("玩家 %c 目前正位於 %s！  目前擁有：%d公斤(黃金)\n",B.name,b[22].name,B.money);
	}
	if(walkB==24)
	{
		printf("玩家 %c 目前正位於 %s！  目前擁有：%d公斤(黃金)\n",B.name,b[23].name,B.money);
	}
}
int walkC(int walkC)
{
	if(walkC==1)
	{
		printf("玩家 %c 目前正位於 %s！ 獲得起點獎勵 目前擁有：%d公斤(黃金)\n",C.name,b[0].name,C.money);
	}
	if(walkC==2)
	{
		printf("玩家 %c 目前正位於 %s！  目前擁有：%d公斤(黃金)\n",C.name,b[1].name,C.money);
	}
	if(walkC==3)
	{
		printf("玩家 %c 目前正位於 %s！  目前擁有：%d公斤(黃金)\n",C.name,b[2].name,C.money);
	}
	if(walkC==4)
	{
		printf("玩家 %c 目前正位於 %s！  目前擁有：%d公斤(黃金)\n",C.name,b[3].name,C.money);
	}
	if(walkC==5)
	{
		printf("玩家 %c 目前正位於 %s！  目前擁有：%d公斤(黃金)\n",C.name,b[4].name,C.money);
	}
	if(walkC==6)
	{
		printf("玩家 %c 目前正位於 %s！  目前擁有：%d公斤(黃金)\n",C.name,b[5].name,C.money);
	}
	if(walkC==7)
	{
		printf("玩家 %c 目前正位於 %s！  目前擁有：%d公斤(黃金)\n",C.name,b[6].name,C.money);
	}
	if(walkC==8)
	{
		printf("玩家 %c 目前正位於 %s！ 骰到偶數下回合即可離開 \n",C.name,b[7].name);
	}
	if(walkC==9)
	{
		printf("玩家 %c 目前正位於 %s！  目前擁有：%d公斤(黃金)\n",C.name,b[8].name,C.money);
	}
	if(walkC==10)
	{
		printf("玩家 %c 目前正位於 %s！  目前擁有：%d公斤(黃金)\n",C.name,b[9].name,C.money);
	}
	if(walkC==11)
	{
		printf("玩家 %c 目前正位於 %s！  目前擁有：%d公斤(黃金)\n",C.name,b[10].name,C.money);
	}
	if(walkC==12)
	{
		printf("玩家 %c 目前正位於 %s！  目前擁有：%d公斤(黃金)\n",C.name,b[11].name,C.money);
	}
	if(walkC==13)
	{
		printf("玩家 %c 因接觸確診病患正在醫院中！ 目前擁有：%d公斤(黃金)\n",C.name,C.money); 
	}
	if(walkC==14)
	{
		printf("玩家 %c 目前正位於 %s！  目前擁有：%d公斤(黃金)\n",C.name,b[13].name,C.money);
	}
	if(walkC==15)
	{
		printf("玩家 %c 目前正位於 %s！  目前擁有：%d公斤(黃金)\n",C.name,b[14].name,C.money);
	}
	if(walkC==16)
	{
		printf("玩家 %c 目前正位於 %s！  目前擁有：%d公斤(黃金)\n",C.name,b[15].name,C.money);
	}
	if(walkC==17)
	{
		printf("玩家 %c 目前正位於 %s！  目前擁有：%d公斤(黃金)\n",C.name,b[16].name,C.money);
	}
	if(walkC==18)
	{
		printf("玩家 %c 目前正位於 %s！  目前擁有：%d公斤(黃金)\n",C.name,b[17].name,C.money);
	}
	if(walkC==19)
	{
		printf("玩家 %c 目前正位於 %s！  目前擁有：%d公斤(黃金)\n",C.name,b[18].name,C.money);
	}
	if(walkC==20)
	{
		printf("玩家 %c 目前正位於 %s！  目前擁有：%d公斤(黃金)\n",C.name,b[19].name,C.money);
	}
	if(walkC==21)
	{
		printf("玩家 %c 目前正位於 %s！  目前擁有：%d公斤(黃金)\n",C.name,b[20].name,C.money);
	}
	if(walkC==22)
	{
		printf("玩家 %c 目前正位於 %s！  目前擁有：%d公斤(黃金)\n",C.name,b[21].name,C.money);
	}
	if(walkC==23)
	{
		printf("玩家 %c 目前正位於 %s！  目前擁有：%d公斤(黃金)\n",C.name,b[22].name,C.money);
	}
	if(walkC==24)
	{
		printf("玩家 %c 目前正位於 %s！  目前擁有：%d公斤(黃金)\n",C.name,b[23].name,C.money);
	}
}
int walkD(int walkD)
{
	if(walkD==1)
	{
		printf("玩家 %c 目前正位於 %s！ 獲得起點獎勵 目前擁有：%d公斤(黃金)\n",D.name,b[0].name,D.money);
	}
	if(walkD==2)
	{
		printf("玩家 %c 目前正位於 %s！  目前擁有：%d公斤(黃金)\n",D.name,b[1].name,D.money);
	}
	if(walkD==3)
	{
		printf("玩家 %c 目前正位於 %s！  目前擁有：%d公斤(黃金)\n",D.name,b[2].name,D.money);
	}
	if(walkD==4)
	{
		printf("玩家 %c 目前正位於 %s！  目前擁有：%d公斤(黃金)\n",D.name,b[3].name,D.money);
	}
	if(walkD==5)
	{
		printf("玩家 %c 目前正位於 %s！  目前擁有：%d公斤(黃金)\n",D.name,b[4].name,D.money);
	}
	if(walkD==6)
	{
		printf("玩家 %c 目前正位於 %s！  目前擁有：%d公斤(黃金)\n",D.name,b[5].name,D.money);
	}
	if(walkD==7)
	{
		printf("玩家 %c 目前正位於 %s！  目前擁有：%d公斤(黃金)\n",D.name,b[6].name,D.money);
	}
	if(walkD==8)
	{
		printf("玩家 %c 目前正位於 %s！ 骰到偶數下回合即可離開 \n",D.name,b[7].name);
	}
	if(walkD==9)
	{
		printf("玩家 %c 目前正位於 %s！  目前擁有：%d公斤(黃金)\n",D.name,b[8].name,D.money);
	}
	if(walkD==10)
	{
		printf("玩家 %c 目前正位於 %s！  目前擁有：%d公斤(黃金)\n",D.name,b[9].name,D.money);
	}
	if(walkD==11)
	{
		printf("玩家 %c 目前正位於 %s！  目前擁有：%d公斤(黃金)\n",D.name,b[10].name,D.money);
	}
	if(walkD==12)
	{
		printf("玩家 %c 目前正位於 %s！  目前擁有：%d公斤(黃金)\n",D.name,b[11].name,D.money);
	}
	if(walkD==13)
	{
		printf("玩家 %c 因接觸確診病患正在醫院中！  目前擁有：%d公斤(黃金)\n",D.name,D.money); 
	}
	if(walkD==14)
	{
		printf("玩家 %c 目前正位於 %s！  目前擁有：%d公斤(黃金)\n",D.name,b[13].name,D.money);
	}
	if(walkD==15)
	{
		printf("玩家 %c 目前正位於 %s！  目前擁有：%d公斤(黃金)\n",D.name,b[14].name,D.money);
	}
	if(walkD==16)
	{
		printf("玩家 %c 目前正位於 %s！  目前擁有：%d公斤(黃金)\n",D.name,b[15].name,D.money);
	}
	if(walkD==17)
	{
		printf("玩家 %c 目前正位於 %s！  目前擁有：%d公斤(黃金)\n",D.name,b[16].name,D.money);
	}
	if(walkD==18)
	{
		printf("玩家 %c 目前正位於 %s！  目前擁有：%d公斤(黃金)\n",D.name,b[17].name,D.money);
	}
	if(walkD==19)
	{
		printf("玩家 %c 目前正位於 %s！  目前擁有：%d公斤(黃金)\n",D.name,b[18].name,D.money);
	}
	if(walkD==20)
	{
		printf("玩家 %c 目前正位於 %s！  目前擁有：%d公斤(黃金)\n",D.name,b[19].name,D.money);
	}
	if(walkD==21)
	{
		printf("玩家 %c 目前正位於 %s！  目前擁有：%d公斤(黃金)\n",D.name,b[20].name,D.money);
	}
	if(walkD==22)
	{
		printf("玩家 %c 目前正位於 %s！  目前擁有：%d公斤(黃金)\n",D.name,b[21].name,D.money);
	}
	if(walkD==23)
	{
		printf("玩家 %c 目前正位於 %s！  目前擁有：%d公斤(黃金)\n",D.name,b[22].name,D.money);
	}
	if(walkD==24)
	{
		printf("玩家 %c 目前正位於 %s！  目前擁有：%d公斤(黃金)\n",D.name,b[23].name,D.money);
	}
}
//判斷勝利 
int win_judge(int winning,int *round)
{
	if(A.money>0&&B.money<=0&&C.money<=0&&D.money<=0)
		A.win=1;
	if(B.money>0&&A.money<=0&&C.money<=0&&D.money<=0)
		B.win=1;
	if(C.money>0&&B.money<=0&&A.money<=0&&D.money<=0)
		C.win=1;
	if(D.money>0&&B.money<=0&&C.money<=0&&A.money<=0)
		D.win=1;
	if(A.win==1)
	{
		printf("恭喜玩家 A 勝利！\n");
		*round=0;
		winning=1;
		return winning;
	}
	if(B.win==1)
	{
		printf("恭喜玩家 B 勝利！\n");
		*round=0;
		winning=1;
		return winning;
	}
	if(C.win==1)
	{
		printf("恭喜玩家 C 勝利！\n");
		*round=0;
		winning=1;
		return winning;
	}
	if(D.win==1)
	{
		printf("恭喜玩家 D 勝利！\n");
		*round=0;
		winning=1;
		return winning;
	}
}
int main()
{
	int x,round=0,As=0,Bs=0,Cs=0,Ds=0,stepA=1,stepB=1,stepC=1,stepD=1;
	//監獄 
	int jailA=0,jailB=0,jailC=0,jailD=0;
	//醫院 
	int hospitalA=0,hospitalB=0,hospitalC=0,hospitalD=0,round_temp=1;
	int i;
	//判斷勝利 
	int winning=0;
	//地權 
	int O[24]={0};
	//起始地權
	int A_occupied[24]={0},B_occupied[24]={0},C_occupied[24]={0},D_occupied[24]={0},occupied[24]={0};
	//特殊地點 
	occupied[0]=2;
	occupied[5]=2;
	occupied[7]=2;
	occupied[10]=2;
	occupied[12]=2;
	occupied[17]=2;
	occupied[22]=2;
	char c,ch,option,select; 
	//土地起始等級
	for(i=0;i<=24;i++)
	{
		b[i].lvl=0;
	}
	//地點						//地價 
	strcpy(b[0].name,"起點");	O[0]=5;
	strcpy(b[1].name,"逢甲");	b[1].price=120;
	strcpy(b[2].name,"清水");	b[2].price=110;
	strcpy(b[3].name,"鹿港");	b[3].price=150;
	strcpy(b[4].name,"日月潭"); b[4].price=140;
	strcpy(b[5].name,"命運");	O[5]=5;
	strcpy(b[6].name,"阿里山"); b[6].price=230;
	strcpy(b[7].name,"監獄");	O[7]=5;
	strcpy(b[8].name,"安平");   b[8].price=100;
	strcpy(b[9].name,"高雄");   b[9].price=160;	
	strcpy(b[10].name,"機會");  O[10]=5;
	strcpy(b[11].name,"東港");  b[11].price=130;
	strcpy(b[12].name,"醫院");	O[12]=5;
	strcpy(b[13].name,"墾丁");  b[13].price=180;
	strcpy(b[14].name,"台東");  b[14].price=100;
	strcpy(b[15].name,"花蓮");  b[15].price=100;
	strcpy(b[16].name,"合歡山");b[16].price=200;
	strcpy(b[17].name,"機會");	O[17]=5;
	strcpy(b[18].name,"太魯閣");b[18].price=120;
	strcpy(b[19].name,"蘭嶼");  b[19].price=110;
	strcpy(b[20].name,"宜蘭");  b[20].price=150;
	strcpy(b[21].name,"九份");  b[21].price=130;
	strcpy(b[22].name,"命運");	O[22]=5;
	strcpy(b[23].name,"台北");  b[23].price=300;
	//
	srand(time(NULL));
	while(1)
	{
		//全部歸零
		A.lose=0; A.win=0;
		B.lose=0; B.win=0;
		C.lose=0; C.win=0;
		D.lose=0; D.win=0;
		winning=0;
		for(i=0;i<24;i++)
		{
			b[i].lvl=0;
			O[i]=0;
			A_occupied[i]=0;
			B_occupied[i]=0;
			C_occupied[i]=0;
			D_occupied[i]=0;
		}
		//起始金額 
		A.money=600;
		B.money=600;
		C.money=600;
		D.money=600;
		O[0]=5;
		b[1].price=120;
		b[2].price=110;
		b[3].price=150;
		b[4].price=140;
		O[5]=5;
		b[6].price=230;
		O[7]=5;
		b[8].price=100;
		b[9].price=160;	
		O[10]=5;
		b[11].price=130;
		O[12]=5;
		b[13].price=180;
		b[14].price=100;
		b[15].price=100;
		b[16].price=200;
		O[17]=5;
		b[18].price=120;
		b[19].price=110;
		b[20].price=150;
		b[21].price=130;
		O[22]=5;
		b[23].price=300;
		stepA=1;stepB=1;stepC=1;stepD=1;
		// 
		/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
		map_12(stepA,stepB,stepC,stepD,O[12],A_occupied[stepA-1],B_occupied[stepA-1],C_occupied[stepA-1],D_occupied[stepA-1]);
		map_11(stepA,stepB,stepC,stepD,O[11],A_occupied[stepA-1],B_occupied[stepA-1],C_occupied[stepA-1],D_occupied[stepA-1]);
		map_10(stepA,stepB,stepC,stepD,O[10],A_occupied[stepA-1],B_occupied[stepA-1],C_occupied[stepA-1],D_occupied[stepA-1]);
		map_09(stepA,stepB,stepC,stepD,O[9],A_occupied[stepA-1],B_occupied[stepA-1],C_occupied[stepA-1],D_occupied[stepA-1]);
		map_08(stepA,stepB,stepC,stepD,O[8],A_occupied[stepA-1],B_occupied[stepA-1],C_occupied[stepA-1],D_occupied[stepA-1]);
		map_07(stepA,stepB,stepC,stepD,O[7],A_occupied[stepA-1],B_occupied[stepA-1],C_occupied[stepA-1],D_occupied[stepA-1]);
		
		map_13(stepA,stepB,stepC,stepD,O[13],A_occupied[stepA-1],B_occupied[stepA-1],C_occupied[stepA-1],D_occupied[stepA-1]);
		map_14(stepA,stepB,stepC,stepD,O[14],A_occupied[stepA-1],B_occupied[stepA-1],C_occupied[stepA-1],D_occupied[stepA-1]);
		map_15(stepA,stepB,stepC,stepD,O[15],A_occupied[stepA-1],B_occupied[stepA-1],C_occupied[stepA-1],D_occupied[stepA-1]);
		map_16(stepA,stepB,stepC,stepD,O[16],A_occupied[stepA-1],B_occupied[stepA-1],C_occupied[stepA-1],D_occupied[stepA-1]);
		map_17(stepA,stepB,stepC,stepD,O[17],A_occupied[stepA-1],B_occupied[stepA-1],C_occupied[stepA-1],D_occupied[stepA-1]);
		map_18(stepA,stepB,stepC,stepD,O[18],A_occupied[stepA-1],B_occupied[stepA-1],C_occupied[stepA-1],D_occupied[stepA-1]);
		map_19(stepA,stepB,stepC,stepD,O[19],A_occupied[stepA-1],B_occupied[stepA-1],C_occupied[stepA-1],D_occupied[stepA-1]);
		
		map_20(stepA,stepB,stepC,stepD,O[20],A_occupied[stepA-1],B_occupied[stepA-1],C_occupied[stepA-1],D_occupied[stepA-1]);
		map_21(stepA,stepB,stepC,stepD,O[21],A_occupied[stepA-1],B_occupied[stepA-1],C_occupied[stepA-1],D_occupied[stepA-1]);
		map_22(stepA,stepB,stepC,stepD,O[22],A_occupied[stepA-1],B_occupied[stepA-1],C_occupied[stepA-1],D_occupied[stepA-1]);
		map_23(stepA,stepB,stepC,stepD,O[23],A_occupied[stepA-1],B_occupied[stepA-1],C_occupied[stepA-1],D_occupied[stepA-1]);
		map_24(stepA,stepB,stepC,stepD,O[0],A_occupied[stepA-1],B_occupied[stepA-1],C_occupied[stepA-1],D_occupied[stepA-1]);//起點 
		
		map_6(stepA,stepB,stepC,stepD,O[6],A_occupied[stepA-1],B_occupied[stepA-1],C_occupied[stepA-1],D_occupied[stepA-1]);
		map_5(stepA,stepB,stepC,stepD,O[5],A_occupied[stepA-1],B_occupied[stepA-1],C_occupied[stepA-1],D_occupied[stepA-1]);
		map_4(stepA,stepB,stepC,stepD,O[4],A_occupied[stepA-1],B_occupied[stepA-1],C_occupied[stepA-1],D_occupied[stepA-1]);
		map_3(stepA,stepB,stepC,stepD,O[3],A_occupied[stepA-1],B_occupied[stepA-1],C_occupied[stepA-1],D_occupied[stepA-1]);
		map_2(stepA,stepB,stepC,stepD,O[2],A_occupied[stepA-1],B_occupied[stepA-1],C_occupied[stepA-1],D_occupied[stepA-1]);	
		map_1(stepA,stepB,stepC,stepD,O[1],A_occupied[stepA-1],B_occupied[stepA-1],C_occupied[stepA-1],D_occupied[stepA-1]);
		///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
		if(round==0)
		{
			printf("\n\n                                       START GAME?(Y/N):");
			scanf("%c",&option);
			getchar();
			while(option!='Y'&&option!='y'&&option!='N'&&option!='n')
			{
				printf("輸入錯誤！ 請重新輸入 START GAME?(Y/N):");
				fflush(stdin);
				scanf("%c",&option);
				getchar();
			}
			if(option=='Y'||option=='y')
			{
		  		system("CLS");
				printf("\n玩家1: A\n");
				sleep(1);
				A.name='A';
				printf("\n玩家2: B\n");
				sleep(1);
				B.name='B';
				printf("\n玩家3: C\n");
				sleep(1);
				C.name='C';
				printf("\n玩家4: D\n");
				sleep(1);
				D.name='D';
			} 
		    else if(option=='n'||option=='N')
		    {
		        return 0;
		    }	
		}
	    system("CLS");
	    round++;
	    //呈現畫面 
	    while(A.win==0&&B.win==0&&C.win==0&&D.win==0)
	    {
	    	//A
	    	/////////////////////////////////////////////////////////////////////////////////////
			map_12(stepA,stepB,stepC,stepD,O[12],A_occupied[stepD-1],B_occupied[stepD-1],C_occupied[stepD-1],D_occupied[stepD-1]);
			map_11(stepA,stepB,stepC,stepD,O[11],A_occupied[stepD-1],B_occupied[stepD-1],C_occupied[stepD-1],D_occupied[stepD-1]);
			map_10(stepA,stepB,stepC,stepD,O[10],A_occupied[stepD-1],B_occupied[stepD-1],C_occupied[stepA-1],D_occupied[stepD-1]);
			map_09(stepA,stepB,stepC,stepD,O[9],A_occupied[stepD-1],B_occupied[stepD-1],C_occupied[stepA-1],D_occupied[stepD-1]);
			map_08(stepA,stepB,stepC,stepD,O[8],A_occupied[stepD-1],B_occupied[stepD-1],C_occupied[stepA-1],D_occupied[stepD-1]);
			map_07(stepA,stepB,stepC,stepD,O[7],A_occupied[stepD-1],B_occupied[stepD-1],C_occupied[stepA-1],D_occupied[stepD-1]);
			
			map_13(stepA,stepB,stepC,stepD,O[13],A_occupied[stepD-1],B_occupied[stepD-1],C_occupied[stepA-1],D_occupied[stepD-1]);
			map_14(stepA,stepB,stepC,stepD,O[14],A_occupied[stepD-1],B_occupied[stepD-1],C_occupied[stepA-1],D_occupied[stepD-1]);
			map_15(stepA,stepB,stepC,stepD,O[15],A_occupied[stepD-1],B_occupied[stepD-1],C_occupied[stepA-1],D_occupied[stepD-1]);
			map_16(stepA,stepB,stepC,stepD,O[16],A_occupied[stepD-1],B_occupied[stepD-1],C_occupied[stepA-1],D_occupied[stepD-1]);
			map_17(stepA,stepB,stepC,stepD,O[17],A_occupied[stepD-1],B_occupied[stepD-1],C_occupied[stepA-1],D_occupied[stepD-1]);
			map_18(stepA,stepB,stepC,stepD,O[18],A_occupied[stepD-1],B_occupied[stepD-1],C_occupied[stepA-1],D_occupied[stepD-1]);
			map_19(stepA,stepB,stepC,stepD,O[19],A_occupied[stepD-1],B_occupied[stepD-1],C_occupied[stepA-1],D_occupied[stepD-1]);
			
			map_20(stepA,stepB,stepC,stepD,O[20],A_occupied[stepD-1],B_occupied[stepD-1],C_occupied[stepD-1],D_occupied[stepD-1]);
			map_21(stepA,stepB,stepC,stepD,O[21],A_occupied[stepD-1],B_occupied[stepD-1],C_occupied[stepD-1],D_occupied[stepD-1]);
			map_22(stepA,stepB,stepC,stepD,O[22],A_occupied[stepD-1],B_occupied[stepD-1],C_occupied[stepD-1],D_occupied[stepD-1]);
			map_23(stepA,stepB,stepC,stepD,O[23],A_occupied[stepD-1],B_occupied[stepD-1],C_occupied[stepD-1],D_occupied[stepD-1]);
			map_24(stepA,stepB,stepC,stepD,O[0],A_occupied[stepD-1],B_occupied[stepD-1],C_occupied[stepD-1],D_occupied[stepD-1]);//起點 
			
			map_6(stepA,stepB,stepC,stepD,O[6],A_occupied[stepD-1],B_occupied[stepD-1],C_occupied[stepD-1],D_occupied[stepD-1]);
			map_5(stepA,stepB,stepC,stepD,O[5],A_occupied[stepD-1],B_occupied[stepD-1],C_occupied[stepD-1],D_occupied[stepD-1]);
			map_4(stepA,stepB,stepC,stepD,O[4],A_occupied[stepD-1],B_occupied[stepD-1],C_occupied[stepD-1],D_occupied[stepD-1]);
			map_3(stepA,stepB,stepC,stepD,O[3],A_occupied[stepD-1],B_occupied[stepD-1],C_occupied[stepD-1],D_occupied[stepD-1]);
			map_2(stepA,stepB,stepC,stepD,O[2],A_occupied[stepD-1],B_occupied[stepD-1],C_occupied[stepD-1],D_occupied[stepD-1]);	
			map_1(stepA,stepB,stepC,stepD,O[1],A_occupied[stepD-1],B_occupied[stepD-1],C_occupied[stepD-1],D_occupied[stepD-1]);
			/////////////////////////////////////////////////////////////////////////////////////
			//勝利
			if(win_judge(winning,&round)==1)
			{
				system("cls");
				if(A.win==1)
					printf("\n恭喜玩家 A 勝利！即將返回標題介面...");
				if(B.win==1)
					printf("\n恭喜玩家 B 勝利！即將返回標題介面...");
				if(C.win==1)
					printf("\n恭喜玩家 C 勝利！即將返回標題介面...");
				if(D.win==1)
					printf("\n恭喜玩家 D 勝利！即將返回標題介面...");
				sleep(2);
				system("cls");
				break;
			}
			if(A.money>0)
				walkA(stepA);
			else if(A.money<0)
			{
				printf("\n-----------------------------------------------------------------------------------------\n");
				printf("玩家 %c 已破產！無法繼續進行遊戲\n",A.name);
			}
			if(round>1&&B.money>0)
	    		walkB(stepB);
	    	else if(B.money<0)
	    		printf("玩家 %c 已破產！無法繼續進行遊戲\n",B.name);
	    	if(round>1&&C.money>0)
	    		walkC(stepC);
	    	else if(C.money<0)
	    		printf("玩家 %c 已破產！無法繼續進行遊戲\n",C.name);
	    	if(round>1&&D.money>0)
	    		walkD(stepD);
	    	else if(D.money<0)
	    		printf("玩家 %c 已破產！無法繼續進行遊戲\n",D.name);
	    	if(A.money>0)
	    		As=rotationA(round,jailA,hospitalA,stepA);
			if(stepA<=24)
			{			
				//監獄 
				if(jailA==0&&hospitalA==0)
					stepA=stepA+As;
				if(stepA==8)
				{
					jailA=1;
					if(As==2||As==4||As==6)
		    		{
		    			jailA=0;
					}
	    			else if(As==1||As==3||As==5)
	    				stepA=8;
				}
				else
					jailA=0;
				//醫院
				if(stepA==13) 
				{
					hospitalA++;
					if(hospitalA!=0)
					{
						stepA=13;
					}
					if(hospitalA>=2)
					{
						hospitalA=0;
					}
				}
				//命運 
				if(stepA==6||stepA==23)
				{
					fate_A(&stepA,&stepB,&stepC,&stepD);
					if(stepA==8)
						jailA=1;
					if(stepA==13)
						hospitalA=1;
					if(stepA==1)
					{
						A.money=A.money+600;
					}
				}
				//機會
				if(stepA==11||stepA==18)
					oppo_A(&stepA);
			}
			if(stepA>24)
			{
				stepA=stepA-24;
				//經過起點給錢 
				A.money=A.money+600;
			}
			if(A.money>0)
			{
				printf("請按任意鍵繼續......\n");
		    	c=getch();
		    	system("CLS");	
			}
	    	//偵測是否為空地 如果是則詢問是否買地
	    	if(O[stepA-1]==0&&O[stepA-1]!=5&&A.money>0)
			{
				printf("玩家 %c 您目前所在 %s 為空地。\n\n地價為 %d 公斤請問要購買嗎？(Y/N)：",A.name,b[stepA-1].name,b[stepA-1].price); 
				scanf("%c",&select);
				getchar();
				while(select!='Y'&&select!='y'&&select!='N'&&select!='n')
				{
					printf("輸入錯誤！ 請重新輸入(Y/N):");
					fflush(stdin);
					scanf("%c",&select);
					getchar();
				}
				if(select=='Y'||select=='y')
				{
					if(A.money-b[stepA-1].price<0)
					{
						printf("\n\n玩家 %c 您沒有足夠的錢！",A.name);
					}
					else
					{
						A.occupied[stepA-1]=1;
						A_occupied[stepA-1]=1;
						O[stepA-1]=1;
						b[stepA-1].lvl++;
						printf("\n\n玩家 %c 您已購買 %s！",A.name,b[stepA-1].name);
						A.money=A.money-b[stepA-1].price;
						printf("  剩餘金額為 %d ！\n\n",A.money);
						b[stepA-1].price=b[stepA-1].price*b[stepA-1].lvl;
					}
				}
				else
					printf("\n\n取消買地");
			} 
			//土地升級 
			else if(O[stepA-1]==1&&A_occupied[stepA-1]==1&&b[stepA-1].lvl<3&&A.money>0)
			{
				printf("玩家 %c 這是您目前的所在地(%s,等級:%d)\n\n",A.name,b[stepA-1].name,b[stepA-1].lvl);
				printf("請問要花費 %d 公斤升級嗎？(Y/N)\n\n",b[stepA-1].price);
				scanf("%c",&select);
				getchar();
				while(select!='Y'&&select!='y'&&select!='N'&&select!='n')
				{
					printf("輸入錯誤！ 請重新輸入(Y/N):");
					fflush(stdin);
					scanf("%c",&select);
					getchar();
				}
				if(select=='Y'||select=='y')
				{
					if(A.money-b[stepA-1].price<0)
					{
						printf("\n\n玩家 %c 您沒有足夠的錢！",A.name);
					}
					else
					{
						b[stepA-1].lvl++;
						printf("\n\n玩家 %c 您已升級 %s 目前土地等級:%d！",A.name,b[stepA-1].name,b[stepA-1].lvl);
						A.money=A.money-b[stepA-1].price;
						printf("  剩餘金額為 %d ！\n\n",A.money);
						b[stepA-1].price=b[stepA-1].price*b[stepA-1].lvl;
					}
				}
				else
					printf("取消升級");
			}
			//踩到別人的地
			else if(O[stepA-1]!=1&&O[stepA-1]!=0&&O[stepA-1]!=5&&A.money>0)
			{
				printf("玩家 %c 您目前所在 %s 為已被購買。地價為 %d 公斤 已自動扣款給地主\n\n",A.name,b[stepA-1].name,b[stepA-1].price);
				if(B_occupied[stepA-1]==1)
					B.money=B.money+b[stepA-1].price;
				else if(C_occupied[stepA-1]==1)
					C.money=C.money+b[stepA-1].price;
				else if(D_occupied[stepA-1]==1)
					D.money=D.money+b[stepA-1].price;
				A.money=A.money-b[stepA-1].price;
			} 
			//輸掉 
			if(A.money<=0)
			{
				A.money=(-999999);
				for(i=0;i<24;i++)
				{
					if(O[i]==1)
					{
						O[i]=0;
						b[i].lvl=0;
					}
					A_occupied[i]=0;
					A.lose=1;
					stepA=1;
				}
			}
			if(B.money<=0)
			{
				B.money=(-999999);
				for(i=0;i<24;i++)
				{
					if(O[i]==2)
					{
						O[i]=0;
						b[i].lvl=0;
					}
					B_occupied[i]=0;
					B.lose=1;
					stepB=1;
				}
			}
			if(C.money<=0)
			{
				C.money=(-999999);
				for(i=0;i<24;i++)
				{
					if(O[i]==3)
					{
						O[i]=0;
						b[i].lvl=0;
					}
					C_occupied[i]=0;
					C.lose=1;
					stepC=1;
				}
			}
			if(D.money<=0)
			{
				D.money=(-999999);
				for(i=0;i<24;i++)
				{
					if(O[i]==4)
					{
						O[i]=0;
						b[i].lvl=0;
					}
					D_occupied[i]=0;
					D.lose=1;
					stepD=1;
				}
			}
			if(A.money>0)
			{
				printf("\n請按任意鍵繼續......\n");
		    	c=getch();
			}
	    	system("CLS");
	    	
	    	//B
	    	/////////////////////////////////////////////////////////////////////////////////////
	    	map_12(stepA,stepB,stepC,stepD,O[12],A_occupied[stepA-1],B_occupied[stepA-1],C_occupied[stepA-1],D_occupied[stepA-1]);
	    	map_11(stepA,stepB,stepC,stepD,O[11],A_occupied[stepA-1],B_occupied[stepA-1],C_occupied[stepA-1],D_occupied[stepA-1]);
	    	map_10(stepA,stepB,stepC,stepD,O[10],A_occupied[stepA-1],B_occupied[stepA-1],C_occupied[stepA-1],D_occupied[stepA-1]);
	    	map_09(stepA,stepB,stepC,stepD,O[9],A_occupied[stepA-1],B_occupied[stepA-1],C_occupied[stepA-1],D_occupied[stepA-1]);
	    	map_08(stepA,stepB,stepC,stepD,O[8],A_occupied[stepA-1],B_occupied[stepA-1],C_occupied[stepA-1],D_occupied[stepA-1]);
	    	map_07(stepA,stepB,stepC,stepD,O[7],A_occupied[stepA-1],B_occupied[stepA-1],C_occupied[stepA-1],D_occupied[stepA-1]);
	    	
	    	map_13(stepA,stepB,stepC,stepD,O[13],A_occupied[stepA-1],B_occupied[stepA-1],C_occupied[stepA-1],D_occupied[stepA-1]);
	    	map_14(stepA,stepB,stepC,stepD,O[14],A_occupied[stepA-1],B_occupied[stepA-1],C_occupied[stepA-1],D_occupied[stepA-1]);
	    	map_15(stepA,stepB,stepC,stepD,O[15],A_occupied[stepA-1],B_occupied[stepA-1],C_occupied[stepA-1],D_occupied[stepA-1]);
	    	map_16(stepA,stepB,stepC,stepD,O[16],A_occupied[stepA-1],B_occupied[stepA-1],C_occupied[stepA-1],D_occupied[stepA-1]);
	    	map_17(stepA,stepB,stepC,stepD,O[17],A_occupied[stepA-1],B_occupied[stepA-1],C_occupied[stepA-1],D_occupied[stepA-1]);
	    	map_18(stepA,stepB,stepC,stepD,O[18],A_occupied[stepA-1],B_occupied[stepA-1],C_occupied[stepA-1],D_occupied[stepA-1]);
	    	map_19(stepA,stepB,stepC,stepD,O[19],A_occupied[stepA-1],B_occupied[stepA-1],C_occupied[stepA-1],D_occupied[stepA-1]);
	    	
	    	map_20(stepA,stepB,stepC,stepD,O[20],A_occupied[stepA-1],B_occupied[stepA-1],C_occupied[stepA-1],D_occupied[stepA-1]);
	    	map_21(stepA,stepB,stepC,stepD,O[21],A_occupied[stepA-1],B_occupied[stepA-1],C_occupied[stepA-1],D_occupied[stepA-1]);
	    	map_22(stepA,stepB,stepC,stepD,O[22],A_occupied[stepA-1],B_occupied[stepA-1],C_occupied[stepA-1],D_occupied[stepA-1]);
	    	map_23(stepA,stepB,stepC,stepD,O[23],A_occupied[stepA-1],B_occupied[stepA-1],C_occupied[stepA-1],D_occupied[stepA-1]);
	    	map_24(stepA,stepB,stepC,stepD,O[0],A_occupied[stepA-1],B_occupied[stepA-1],C_occupied[stepA-1],D_occupied[stepA-1]);
	    	
	    	map_6(stepA,stepB,stepC,stepD,O[6],A_occupied[stepA-1],B_occupied[stepA-1],C_occupied[stepA-1],D_occupied[stepA-1]);
	    	map_5(stepA,stepB,stepC,stepD,O[5],A_occupied[stepA-1],B_occupied[stepA-1],C_occupied[stepA-1],D_occupied[stepA-1]);
	    	map_4(stepA,stepB,stepC,stepD,O[4],A_occupied[stepA-1],B_occupied[stepA-1],C_occupied[stepA-1],D_occupied[stepA-1]);
	    	map_3(stepA,stepB,stepC,stepD,O[3],A_occupied[stepA-1],B_occupied[stepA-1],C_occupied[stepA-1],D_occupied[stepA-1]);
	    	map_2(stepA,stepB,stepC,stepD,O[2],A_occupied[stepA-1],B_occupied[stepA-1],C_occupied[stepA-1],D_occupied[stepA-1]);
	    	map_1(stepA,stepB,stepC,stepD,O[1],A_occupied[stepA-1],B_occupied[stepA-1],C_occupied[stepA-1],D_occupied[stepA-1]);
	    	/////////////////////////////////////////////////////////////////////////////////////
	    	//勝利
			if(B.win==1&&win_judge(winning,&round)==1)
			{
				system("cls");
				if(A.win==1)
					printf("\n恭喜玩家 A 勝利！即將返回標題介面...");
				if(B.win==1)
					printf("\n恭喜玩家 B 勝利！即將返回標題介面...");
				if(C.win==1)
					printf("\n恭喜玩家 C 勝利！即將返回標題介面...");
				if(D.win==1)
					printf("\n恭喜玩家 D 勝利！即將返回標題介面...");
				sleep(2);
				system("cls");
				break;
			}
	    	if(A.money>0)
				walkA(stepA);
			else if(A.money<0)
			{
				printf("\n-----------------------------------------------------------------------------------------\n");
				printf("玩家 %c 已破產！無法繼續進行遊戲\n",A.name);
			}
			if(B.money>0)
				walkB(stepB);
			else if(B.money<0)
				printf("玩家 %c 已破產！無法繼續進行遊戲\n",B.name);
			if(round>1&&C.money>0)
	    		walkC(stepC);
	    	else if(C.money<0)
	    		printf("玩家 %c 已破產！無法繼續進行遊戲\n",C.name);
	    	if(round>1&&D.money>0)
	    		walkD(stepD);
	    	else if(D.money<0)
	    		printf("玩家 %c 已破產！無法繼續進行遊戲\n",D.name);
	    	if(B.money>0)
	    		Bs=rotationB(round,jailB,hospitalB,stepB);
	    	if(stepB<=24)
			{
				//監獄 
				if(jailB==0)
					stepB=stepB+Bs;
				if(stepB==8)
				{
					jailB=1;
					if(Bs==2||Bs==4||Bs==6)
		    		{
		    			jailB=0;
					}
	    			else if(Bs==1||Bs==3||Bs==5)
	    				stepB=8;
				}
				else
					jailB=0;
				//醫院 
				if(stepB==13) 
				{
					hospitalB++;
					if(hospitalB!=0)
					{
						stepB=13;
					}
					if(hospitalB>=2)
					{
						hospitalB=0;
					}	
				}
				//命運 
				if(stepB==6||stepB==23)
				{
					fate_B(&stepA,&stepB,&stepC,&stepD);
					if(stepB==8)
						jailB=1;
					if(stepB==13)
						hospitalB=1;
					if(stepB==1)
					{
						B.money=B.money+600;
					}
				}
				//機會
				if(stepB==11||stepB==18)
					oppo_B(&stepB); 
			}
			if(stepB>24)
			{ 
				stepB=stepB-24;
				//經過起點給錢
				B.money=B.money+600; 
			} 
	    	if(B.money>0)
	    	{
	    		printf("請按任意鍵繼續......\n");
		    	c=getch();
		    	system("CLS");
			}
	    	//偵測是否為空地 如果是則詢問是否買地
	    	if(O[stepB-1]==0&&O[stepB-1]!=5&&B.money>0)
			{
				printf("玩家 %c 您目前所在 %s 為空地。\n\n地價為 %d 公斤請問要購買嗎？(Y/N)：",B.name,b[stepB-1].name,b[stepB-1].price);
				scanf("%c",&select);
				getchar();
				while(select!='Y'&&select!='y'&&select!='N'&&select!='n')
				{
					printf("輸入錯誤！ 請重新輸入(Y/N):");
					fflush(stdin);
					scanf("%c",&select);
					getchar();
				}
				if(select=='Y'||select=='y')
				{
					if(B.money-b[stepB-1].price<0)
					{
						printf("\n\n玩家 %c 您沒有足夠的錢！",B.name);
					}
					else
					{
						B.occupied[stepB-1]=2;
						B_occupied[stepB-1]=1;
						//土地標記 
						O[stepB-1]=2;
						b[stepB-1].lvl++;
						printf("\n\n玩家 %c 您已購買 %s ！",B.name,b[stepB-1].name);
						B.money=B.money-b[stepB-1].price;
						printf("  剩餘金額為 %d ！\n\n",B.money);
						b[stepB-1].price=b[stepB-1].price*b[stepB-1].lvl;
					}
				}
				else
					printf("\n\n取消買地");
			}
			//土地升級 
			else if(O[stepB-1]==2&&B_occupied[stepB-1]==1&&b[stepB-1].lvl<3&&B.money>0)
			{
				printf("玩家 %c 這是您目前的所在地(%s,等級:%d)\n\n",B.name,b[stepB-1].name,b[stepB-1].lvl);
				printf("請問要花費 %d 公斤升級嗎？(Y/N)\n\n",b[stepB-1].price);
				scanf("%c",&select);
				getchar();
				while(select!='Y'&&select!='y'&&select!='N'&&select!='n')
				{
					printf("輸入錯誤！ 請重新輸入(Y/N):");
					fflush(stdin);
					scanf("%c",&select);
					getchar();
				}
				if(select=='Y'||select=='y')
				{
					if(B.money-b[stepB-1].price<0)
					{
						printf("\n\n玩家 %c 您沒有足夠的錢！",B.name);
					}
					else
					{
						b[stepB-1].lvl++;
						printf("\n\n玩家 %c 您已升級 %s 目前土地等級:%d！",B.name,b[stepB-1].name,b[stepB-1].lvl);
						B.money=B.money-b[stepB-1].price;
						printf("  剩餘金額為 %d ！\n\n",B.money);
						b[stepB-1].price=b[stepB-1].price*b[stepB-1].lvl;
					}
				}
				else
					printf("取消升級");
			}
			//踩到別人的地
			else if(O[stepB-1]!=2&&O[stepB-1]!=0&&O[stepB-1]!=5&&B.money>0)
			{
				printf("玩家 %c 您目前所在 %s 為已被購買。地價為 %d 公斤 已自動扣款給地主\n\n",B.name,b[stepB-1].name,b[stepB-1].price);
				if(A_occupied[stepB-1]==1)
					A.money=A.money+b[stepB-1].price;
				else if(C_occupied[stepB-1]==1)
					C.money=C.money+b[stepB-1].price;
				else if(D_occupied[stepB-1]==1)
					D.money=D.money+b[stepB-1].price;
				B.money=B.money-b[stepB-1].price;
			}
			//輸掉 
			if(A.money<=0)
			{
				A.money=(-999999);
				for(i=0;i<24;i++)
				{
					if(O[i]==1)
					{
						O[i]=0;
						b[i].lvl=0;
					}
					A_occupied[i]=0;
					A.lose=1;
					stepA=1;
				}
			}
			if(B.money<=0)
			{
				B.money=(-999999);
				for(i=0;i<24;i++)
				{
					if(O[i]==2)
					{
						O[i]=0;
						b[i].lvl=0;
					}
					B_occupied[i]=0;
					B.lose=1;
					stepB=1;
				}
			}
			if(C.money<=0)
			{
				C.money=(-999999);
				for(i=0;i<24;i++)
				{
					if(O[i]==3)
					{
						O[i]=0;
						b[i].lvl=0;
					}
					C_occupied[i]=0;
					C.lose=1;
					stepC=1;
				}
			}
			if(D.money<=0)
			{
				D.money=(-999999);
				for(i=0;i<24;i++)
				{
					if(O[i]==4)
					{
						O[i]=0;
						b[i].lvl=0;
					}
					D_occupied[i]=0;
					D.lose=1;
					stepD=1;
				}
			}
			if(B.money>0)
			{
				printf("\n請按任意鍵繼續......\n");
		    	c=getch();
			}
	    	system("CLS");
	    	
	    	//C
	    	/////////////////////////////////////////////////////////////////////////////////////
	    	map_12(stepA,stepB,stepC,stepD,O[12],A_occupied[stepB-1],B_occupied[stepB-1],C_occupied[stepB-1],D_occupied[stepB-1]);
	    	map_11(stepA,stepB,stepC,stepD,O[11],A_occupied[stepB-1],B_occupied[stepB-1],C_occupied[stepB-1],D_occupied[stepB-1]);
	    	map_10(stepA,stepB,stepC,stepD,O[10],A_occupied[stepB-1],B_occupied[stepB-1],C_occupied[stepB-1],D_occupied[stepB-1]);
	    	map_09(stepA,stepB,stepC,stepD,O[9],A_occupied[stepB-1],B_occupied[stepB-1],C_occupied[stepB-1],D_occupied[stepB-1]);
	    	map_08(stepA,stepB,stepC,stepD,O[8],A_occupied[stepB-1],B_occupied[stepB-1],C_occupied[stepB-1],D_occupied[stepB-1]);
	    	map_07(stepA,stepB,stepC,stepD,O[7],A_occupied[stepB-1],B_occupied[stepB-1],C_occupied[stepB-1],D_occupied[stepB-1]);
	    	
	    	map_13(stepA,stepB,stepC,stepD,O[13],A_occupied[stepB-1],B_occupied[stepB-1],C_occupied[stepB-1],D_occupied[stepB-1]);
	    	map_14(stepA,stepB,stepC,stepD,O[14],A_occupied[stepB-1],B_occupied[stepB-1],C_occupied[stepB-1],D_occupied[stepB-1]);
	    	map_15(stepA,stepB,stepC,stepD,O[15],A_occupied[stepB-1],B_occupied[stepB-1],C_occupied[stepB-1],D_occupied[stepB-1]);
	    	map_16(stepA,stepB,stepC,stepD,O[16],A_occupied[stepB-1],B_occupied[stepB-1],C_occupied[stepB-1],D_occupied[stepB-1]);
	    	map_17(stepA,stepB,stepC,stepD,O[17],A_occupied[stepB-1],B_occupied[stepB-1],C_occupied[stepB-1],D_occupied[stepB-1]);
	    	map_18(stepA,stepB,stepC,stepD,O[18],A_occupied[stepB-1],B_occupied[stepB-1],C_occupied[stepB-1],D_occupied[stepB-1]);
	    	map_19(stepA,stepB,stepC,stepD,O[19],A_occupied[stepB-1],B_occupied[stepB-1],C_occupied[stepB-1],D_occupied[stepB-1]);
	    	
	    	map_20(stepA,stepB,stepC,stepD,O[20],A_occupied[stepB-1],B_occupied[stepB-1],C_occupied[stepB-1],D_occupied[stepB-1]);
	    	map_21(stepA,stepB,stepC,stepD,O[21],A_occupied[stepB-1],B_occupied[stepB-1],C_occupied[stepB-1],D_occupied[stepB-1]);
	    	map_22(stepA,stepB,stepC,stepD,O[22],A_occupied[stepB-1],B_occupied[stepB-1],C_occupied[stepB-1],D_occupied[stepB-1]);
	    	map_23(stepA,stepB,stepC,stepD,O[23],A_occupied[stepB-1],B_occupied[stepB-1],C_occupied[stepB-1],D_occupied[stepB-1]);
	    	map_24(stepA,stepB,stepC,stepD,O[0],A_occupied[stepB-1],B_occupied[stepB-1],C_occupied[stepB-1],D_occupied[stepB-1]);
	    	
	    	map_6(stepA,stepB,stepC,stepD,O[6],A_occupied[stepB-1],B_occupied[stepB-1],C_occupied[stepB-1],D_occupied[stepB-1]);
	    	map_5(stepA,stepB,stepC,stepD,O[5],A_occupied[stepB-1],B_occupied[stepB-1],C_occupied[stepB-1],D_occupied[stepB-1]);
	    	map_4(stepA,stepB,stepC,stepD,O[4],A_occupied[stepB-1],B_occupied[stepB-1],C_occupied[stepB-1],D_occupied[stepB-1]);
	    	map_3(stepA,stepB,stepC,stepD,O[3],A_occupied[stepB-1],B_occupied[stepB-1],C_occupied[stepB-1],D_occupied[stepB-1]);
	    	map_2(stepA,stepB,stepC,stepD,O[2],A_occupied[stepB-1],B_occupied[stepB-1],C_occupied[stepB-1],D_occupied[stepB-1]);
	    	map_1(stepA,stepB,stepC,stepD,O[1],A_occupied[stepB-1],B_occupied[stepB-1],C_occupied[stepB-1],D_occupied[stepB-1]);
	    	/////////////////////////////////////////////////////////////////////////////////////
	    	//勝利
			if(win_judge(winning,&round)==1)
			{
				system("cls");
				if(A.win==1)
					printf("\n恭喜玩家 A 勝利！即將返回標題介面...");
				if(B.win==1)
					printf("\n恭喜玩家 B 勝利！即將返回標題介面...");
				if(C.win==1)
					printf("\n恭喜玩家 C 勝利！即將返回標題介面...");
				if(D.win==1)
					printf("\n恭喜玩家 D 勝利！即將返回標題介面...");
				sleep(2);
				system("cls");
				break;
			}
	    	if(A.money>0)
	    		walkA(stepA);
	    	else if(A.money<0)
			{
				printf("\n-----------------------------------------------------------------------------------------\n");
				printf("玩家 %c 已破產！無法繼續進行遊戲\n",A.name);
			}
	    	if(B.money>0)
	    		walkB(stepB);
	    	else if(B.money<0)
	    		printf("玩家 %c 已破產！無法繼續進行遊戲\n",B.name);
	    	if(C.money>0)
	    		walkC(stepC);
	    	else if(C.money<0)
	    		printf("玩家 %c 已破產！無法繼續進行遊戲\n",C.name);
	    	if(round>1&&D.money>0)
	    		walkD(stepD);
	    	else if(D.money<0)
	    		printf("玩家 %c 已破產！無法繼續進行遊戲\n",D.name);
	    	if(C.money>0)
				Cs=rotationC(round,jailC,hospitalC,stepC);
			if(stepC<=24)
			{
				//監獄 
				if(jailC==0)
					stepC=stepC+Cs;
				if(stepC==8)
				{
					jailC=1;
					if(Cs==2||Cs==4||Cs==6)
		    		{
		    			jailC=0;
					}
	    			else if(Cs==1||Cs==3||Cs==5)
	    				stepA=8;
				}
				else
					jailC=0;
				//醫院 
				if(stepC==13) 
				{
					hospitalC++;
					if(hospitalC!=0)
					{
						stepC=13;
					}
					if(hospitalC>=2)
					{
						hospitalC=0;
					}
					
				}
				//命運
				if(stepC==6||stepC==23)
				{
					fate_C(&stepA,&stepB,&stepC,&stepD);
					if(stepC==8)
						jailC=1;
					if(stepC==13)
						hospitalC=1;
					if(stepC==1)
					{
						C.money=C.money+600;
					}
				}
				//機會
				if(stepC==11||stepC==18)
					oppo_C(&stepC);
			}
			if(stepC>24)
			{
				stepC=stepC-24;
				//經過起點給錢
				C.money=C.money+600; 
			}
	    	if(C.money>0)
	    	{
	    		printf("請按任意鍵繼續......\n");
		    	c=getch();
		    	system("CLS");
			}
	    	//偵測是否為空地 如果是則詢問是否買地
	    	if(O[stepC-1]==0&&O[stepC-1]!=5&&C.money>0)
			{
				printf("玩家 %c 您目前所在 %s 為空地。\n\n地價為 %d 公斤請問要購買嗎？(Y/N)：",C.name,b[stepC-1].name,b[stepC-1].price); 
				scanf("%c",&select);
				getchar();
				while(select!='Y'&&select!='y'&&select!='N'&&select!='n')
				{
					printf("輸入錯誤！ 請重新輸入(Y/N):");
					fflush(stdin);
					scanf("%c",&select);
					getchar();
				}
				if(select=='Y'||select=='y')
				{
					if(C.money-b[stepC-1].price<0)
					{
						printf("\n\n玩家 %c 您沒有足夠的錢！",C.name);
					}
					else
					{
						C.occupied[stepC-1]=3;
						C_occupied[stepC-1]=1;
						//土地標記 
						O[stepC-1]=3;
						b[stepC-1].lvl++;
						printf("\n\n玩家 %c 您已購買 %s！",C.name,b[stepC-1].name);
						C.money=C.money-b[stepC-1].price;
						printf("  剩餘金額為 %d ！\n\n",C.money);
						b[stepC-1].price=b[stepC-1].price*b[stepC-1].lvl;
					}
				}
				else
					printf("\n\n取消買地");
			}
			//土地升級 
			else if(O[stepC-1]==3&&C_occupied[stepC-1]==1&&b[stepC-1].lvl<3&&C.money>0)
			{
				printf("玩家 %c 這是您目前的所在地(%s,等級:%d)\n\n",C.name,b[stepC-1].name,b[stepC-1].lvl);
				printf("請問要花費 %d 公斤升級嗎？(Y/N)\n\n",b[stepC-1].price);
				scanf("%c",&select);
				getchar();
				while(select!='Y'&&select!='y'&&select!='N'&&select!='n')
				{
					printf("輸入錯誤！ 請重新輸入(Y/N):");
					fflush(stdin);
					scanf("%c",&select);
					getchar();
				}
				if(select=='Y'||select=='y')
				{
					if(C.money-b[stepC-1].price<0)
					{
						printf("\n\n玩家 %c 您沒有足夠的錢！",C.name);
					}
					else
					{
						b[stepC-1].lvl++;
						printf("\n\n玩家 %c 您已升級 %s 目前土地等級:%d！",C.name,b[stepC-1].name,b[stepC-1].lvl);
						C.money=C.money-b[stepC-1].price;
						printf("  剩餘金額為 %d ！\n\n",C.money);
						b[stepC-1].price=b[stepC-1].price*b[stepC-1].lvl;
					}
				}
				else
					printf("取消升級");
			}
			//踩到別人的地
			else if(O[stepC-1]!=3&&O[stepC-1]!=0&&O[stepC-1]!=5&&C.money>0)
			{
				printf("玩家 %c 您目前所在 %s 為已被購買。地價為 %d 公斤 已自動扣款給地主\n\n",C.name,b[stepC-1].name,b[stepC-1].price);
				if(B_occupied[stepC-1]==1)
					B.money=B.money+b[stepC-1].price;
				else if(A_occupied[stepC-1]==1)
					A.money=A.money+b[stepC-1].price;
				else if(D_occupied[stepC-1]==1)
					D.money=D.money+b[stepC-1].price;
				C.money=C.money-b[stepC-1].price;
			}
			//輸掉 
			if(A.money<=0)
			{
				A.money=(-999999);
				for(i=0;i<24;i++)
				{
					if(O[i]==1)
					{
						O[i]=0;
						b[i].lvl=0;
					}
					A_occupied[i]=0;
					A.lose=1;
					stepA=1;
				}
			}
			if(B.money<=0)
			{
				B.money=(-999999);
				for(i=0;i<24;i++)
				{
					if(O[i]==2)
					{
						O[i]=0;
						b[i].lvl=0;
					}
					B_occupied[i]=0;
					B.lose=1;
					stepB=1;
				}
			}
			if(C.money<=0)
			{
				C.money=(-999999);
				for(i=0;i<24;i++)
				{
					if(O[i]==3)
					{
						O[i]=0;
						b[i].lvl=0;
					}
					C_occupied[i]=0;
					C.lose=1;
					stepC=1;
				}
			}
			if(D.money<=0)
			{
				D.money=(-999999);
				for(i=0;i<24;i++)
				{
					if(O[i]==4)
					{
						O[i]=0;
						b[i].lvl=0;
					}
					D_occupied[i]=0;
					D.lose=1;
					stepD=1;
				}
			}
			if(C.money>0)
			{
				printf("\n請按任意鍵繼續......\n");
	    		c=getch();
			}
			system("CLS");
	    	
	    	//D
	    	/////////////////////////////////////////////////////////////////////////////////////
	    	map_12(stepA,stepB,stepC,stepD,O[12],A_occupied[stepC-1],B_occupied[stepC-1],C_occupied[stepC-1],D_occupied[stepC-1]);
	    	map_11(stepA,stepB,stepC,stepD,O[11],A_occupied[stepC-1],B_occupied[stepC-1],C_occupied[stepC-1],D_occupied[stepC-1]);
	    	map_10(stepA,stepB,stepC,stepD,O[10],A_occupied[stepC-1],B_occupied[stepC-1],C_occupied[stepC-1],D_occupied[stepC-1]);
	    	map_09(stepA,stepB,stepC,stepD,O[9],A_occupied[stepC-1],B_occupied[stepC-1],C_occupied[stepC-1],D_occupied[stepC-1]);
	    	map_08(stepA,stepB,stepC,stepD,O[8],A_occupied[stepC-1],B_occupied[stepC-1],C_occupied[stepC-1],D_occupied[stepC-1]);
	    	map_07(stepA,stepB,stepC,stepD,O[7],A_occupied[stepC-1],B_occupied[stepC-1],C_occupied[stepC-1],D_occupied[stepC-1]);
	    	
	    	map_13(stepA,stepB,stepC,stepD,O[13],A_occupied[stepC-1],B_occupied[stepC-1],C_occupied[stepC-1],D_occupied[stepC-1]);
	    	map_14(stepA,stepB,stepC,stepD,O[14],A_occupied[stepC-1],B_occupied[stepC-1],C_occupied[stepC-1],D_occupied[stepC-1]);
	    	map_15(stepA,stepB,stepC,stepD,O[15],A_occupied[stepC-1],B_occupied[stepC-1],C_occupied[stepC-1],D_occupied[stepC-1]);
	    	map_16(stepA,stepB,stepC,stepD,O[16],A_occupied[stepC-1],B_occupied[stepC-1],C_occupied[stepC-1],D_occupied[stepC-1]);
	    	map_17(stepA,stepB,stepC,stepD,O[17],A_occupied[stepC-1],B_occupied[stepC-1],C_occupied[stepC-1],D_occupied[stepC-1]);
	    	map_18(stepA,stepB,stepC,stepD,O[18],A_occupied[stepC-1],B_occupied[stepC-1],C_occupied[stepC-1],D_occupied[stepC-1]);
	    	map_19(stepA,stepB,stepC,stepD,O[19],A_occupied[stepC-1],B_occupied[stepC-1],C_occupied[stepC-1],D_occupied[stepC-1]);
	    	
	    	map_20(stepA,stepB,stepC,stepD,O[20],A_occupied[stepC-1],B_occupied[stepC-1],C_occupied[stepC-1],D_occupied[stepC-1]);
	    	map_21(stepA,stepB,stepC,stepD,O[21],A_occupied[stepC-1],B_occupied[stepC-1],C_occupied[stepC-1],D_occupied[stepC-1]);
	    	map_22(stepA,stepB,stepC,stepD,O[22],A_occupied[stepC-1],B_occupied[stepC-1],C_occupied[stepC-1],D_occupied[stepC-1]);
	    	map_23(stepA,stepB,stepC,stepD,O[23],A_occupied[stepC-1],B_occupied[stepC-1],C_occupied[stepC-1],D_occupied[stepC-1]);
	    	map_24(stepA,stepB,stepC,stepD,O[0],A_occupied[stepC-1],B_occupied[stepC-1],C_occupied[stepC-1],D_occupied[stepC-1]);
	    	
	    	map_6(stepA,stepB,stepC,stepD,O[6],A_occupied[stepC-1],B_occupied[stepC-1],C_occupied[stepC-1],D_occupied[stepC-1]);
	    	map_5(stepA,stepB,stepC,stepD,O[5],A_occupied[stepC-1],B_occupied[stepC-1],C_occupied[stepC-1],D_occupied[stepC-1]);
	    	map_4(stepA,stepB,stepC,stepD,O[4],A_occupied[stepC-1],B_occupied[stepC-1],C_occupied[stepC-1],D_occupied[stepC-1]);
	    	map_3(stepA,stepB,stepC,stepD,O[3],A_occupied[stepC-1],B_occupied[stepC-1],C_occupied[stepC-1],D_occupied[stepC-1]);
	    	map_2(stepA,stepB,stepC,stepD,O[2],A_occupied[stepC-1],B_occupied[stepC-1],C_occupied[stepC-1],D_occupied[stepC-1]);
	    	map_1(stepA,stepB,stepC,stepD,O[1],A_occupied[stepC-1],B_occupied[stepC-1],C_occupied[stepC-1],D_occupied[stepC-1]);
	    	/////////////////////////////////////////////////////////////////////////////////////
	    	//勝利
			if(win_judge(winning,&round)==1)
			{
				system("cls");
				if(A.win==1)
					printf("\n恭喜玩家 A 勝利！即將返回標題介面...");
				if(B.win==1)
					printf("\n恭喜玩家 B 勝利！即將返回標題介面...");
				if(C.win==1)
					printf("\n恭喜玩家 C 勝利！即將返回標題介面...");
				if(D.win==1)
					printf("\n恭喜玩家 D 勝利！即將返回標題介面...");
				sleep(2);
				system("cls");
				break;
			}
	    	if(A.money>0)
	    		walkA(stepA);
	    	else if(A.money<0)
	    	{
				printf("\n-----------------------------------------------------------------------------------------\n");
				printf("玩家 %c 已破產！無法繼續進行遊戲\n",A.name);
			}
	    	if(B.money>0)
	    		walkB(stepB);
	    	else if(B.money<0)
	    		printf("玩家 %c 已破產！無法繼續進行遊戲\n",B.name);
	    	if(C.money>0)
	    		walkC(stepC);
	    	else if(C.money<0)
	    		printf("玩家 %c 已破產！無法繼續進行遊戲\n",C.name);
	    	if(D.money>0)
	    		walkD(stepD);
	    	else if(D.money<0)
	    		printf("玩家 %c 已破產！無法繼續進行遊戲\n",D.name);
	    	if(D.money>0)
	    		Ds=rotationD(round,jailD,hospitalD,stepD);
	    	if(stepD<=24)
			{
				//監獄 
				if(jailD==0)
					stepD=stepD+Ds;
				if(stepD==8)
				{
					jailD=1;
					if(Ds==2||Ds==4||Ds==6)
		    		{
		    			jailD=0;
					}
	    			else if(Ds==1||Ds==3||Ds==5)
	    				stepD=8;
				}
				else
					jailD=0;
				//醫院 
				if(stepD==13) 
				{
					hospitalD++;
					if(hospitalD!=0)
					{
						stepD=13;
					}
					if(hospitalD>=2)
					{
						hospitalD=0;
					}
				}
				//命運 
				if(stepD==6||stepD==23)
				{
					fate_D(&stepA,&stepB,&stepC,&stepD);
					if(stepD==8)
						jailD=1;
					if(stepD==13)
						hospitalD=1;
					if(stepD==1)
					{
						D.money=D.money+600;
					}
				}
				//機會
				if(stepD==11||stepD==18)
					oppo_D(&stepD);
			}
			if(stepD>24)
			{
				stepD=stepD-24;
				//經過起點給錢
				D.money=D.money+600; 
			}
	    	if(D.money>0)
	    	{
	    		printf("請按任意鍵繼續......\n");
		    	c=getch();
		    	system("CLS");
			}
	    	//偵測是否為空地 如果是則詢問是否買地
	    	if(O[stepD-1]==0&&O[stepD-1]!=5&&D.money>0)
			{
				printf("玩家 %c 您目前所在 %s 為空地。\n\n地價為 %d 公斤請問要購買嗎？(Y/N)：",D.name,b[stepD-1].name,b[stepD-1].price); 
				scanf("%c",&select);
				getchar();
				while(select!='Y'&&select!='y'&&select!='N'&&select!='n')
				{
					printf("輸入錯誤！ 請重新輸入(Y/N):");
					fflush(stdin);
					scanf("%c",&select);
					getchar();
				}
				if(select=='Y'||select=='y')
				{
					if(D.money-b[stepD-1].price<0)
					{
						printf("\n\n玩家 %c 您沒有足夠的錢！",D.name);
					}
					else
					{
						D_occupied[stepD-1]=1;
						D.occupied[stepD-1]=4;
						//土地標記 
						O[stepD-1]=4;
						b[stepD-1].lvl++;
						printf("\n\n玩家 %c 您已購買 %s！",D.name,b[stepD-1].name);
						D.money=D.money-b[stepD-1].price;
						printf("  剩餘金額為 %d ！\n\n",D.money);
						b[stepD-1].price=b[stepD-1].price*b[stepD-1].lvl;
					}
				}
				else
					printf("\n\n取消買地");
			}
			//土地升級 
			else if(O[stepD-1]==4&&D_occupied[stepD-1]==1&&D.money>0)
			{
				printf("玩家 %c 這是您目前的所在地(%s,等級:%d)\n\n",D.name,b[stepD-1].name,b[stepD-1].lvl);
				printf("請問要花費 %d 公斤升級嗎？(Y/N)\n\n",b[stepD-1].price);
				scanf("%c",&select);
				getchar();
				while(select!='Y'&&select!='y'&&select!='N'&&select!='n')
				{
					printf("輸入錯誤！ 請重新輸入(Y/N):");
					fflush(stdin);
					scanf("%c",&select);
					getchar();
				}
				if(select=='Y'||select=='y')
				{
					if(D.money-b[stepD-1].price<0)
					{
						printf("\n\n玩家 %c 您沒有足夠的錢！",D.name);
					}
					else
					{
						b[stepD-1].lvl++;
						printf("\n\n玩家 %c 您已升級 %s 目前土地等級:%d！",D.name,b[stepD-1].name,b[stepD-1].lvl);
						D.money=D.money-b[stepD-1].price;
						printf("  剩餘金額為 %d ！\n\n",D.money);
						b[stepD-1].price=b[stepD-1].price*b[stepD-1].lvl;
					}
				}
				else
					printf("取消升級");
			}
			//踩到別人的地
			else if(O[stepD-1]!=4&&O[stepD-1]!=0&&O[stepD-1]!=5&&D.money>0)
			{
				printf("玩家 %c 您目前所在 %s 為已被購買。地價為 %d 公斤 已自動扣款給地主\n\n",D.name,b[stepD-1].name,b[stepD-1].price);
				if(B_occupied[stepD-1]==1)
					B.money=B.money+b[stepD-1].price;
				else if(A_occupied[stepD-1]==1)
					A.money=A.money+b[stepD-1].price;
				else if(C_occupied[stepD-1]==1)
					C.money=C.money+b[stepD-1].price;
				D.money=D.money-b[stepD-1].price;
			} 
			//輸掉 
			if(A.money<=0)
			{
				A.money=(-999999);
				for(i=0;i<24;i++)
				{
					if(O[i]==1)
					{
						O[i]=0;
						b[i].lvl=0;
					}
					A_occupied[i]=0;
					A.lose=1;
					stepA=1;
				}
			}
			if(B.money<=0)
			{
				B.money=(-999999);
				for(i=0;i<24;i++)
				{
					if(O[i]==2)
					{
						O[i]=0;
						b[i].lvl=0;
					}
					B_occupied[i]=0;
					B.lose=1;
					stepB=1;
				}
			}
			if(C.money<=0)
			{
				C.money=(-999999);
				for(i=0;i<24;i++)
				{
					if(O[i]==3)
					{
						O[i]=0;
						b[i].lvl=0;
					}
					C_occupied[i]=0;
					C.lose=1;
					stepC=1;
				}
			}
			if(D.money<=0)
			{
				D.money=(-999999);
				for(i=0;i<24;i++)
				{
					if(O[i]==4)
					{
						O[i]=0;
						b[i].lvl=0;
					}
					D_occupied[i]=0;
					D.lose=1;
					stepD=1;
				}
			}
			if(D.money>0)
			{
				printf("\n請按任意鍵繼續......\n");
	    		c=getch();
			}
			system("CLS");
	    	round++;
		}
	}
	return 0;
}
