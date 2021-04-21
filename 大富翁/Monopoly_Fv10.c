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
//�w���Ц�m����w�y��
void goto_xy(int x, int y)
{   
	HANDLE hOut;
	hOut=GetStdHandle(STD_OUTPUT_HANDLE);
	COORD pos={x,y};
	SetConsoleCursorPosition(hOut,pos);
}
//�a��b01
void map_1(int stepA,int stepB,int stepC,int stepD,int occupied,int A_occupied,int B_occupied,int C_occupied,int D_occupied)
{
	char as[1]={'A'},bs[1]={'B'},cs[1]={'C'},ds[1]={'D'};
	goto_xy(67,30);
	printf(" ======== +");
	goto_xy(67,31);
	printf("   �{��   |");
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
//�a��b02
void map_2(int stepA,int stepB,int stepC,int stepD,int occupied,int A_occupied,int B_occupied,int C_occupied,int D_occupied)
{
	char as[1]={'A'},bs[1]={'B'},cs[1]={'C'},ds[1]={'D'};
	goto_xy(56,30);
	printf(" ======== +");
	goto_xy(56,31);
	printf("   �M��   |");
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
//�a��b03
void map_3(int stepA,int stepB,int stepC,int stepD,int occupied,int A_occupied,int B_occupied,int C_occupied,int D_occupied)
{
	char as[1]={'A'},bs[1]={'B'},cs[1]={'C'},ds[1]={'D'};
	goto_xy(45,30);
	printf(" ======== +");
	goto_xy(45,31);
	printf("   ����   |");
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
//�a��b04
void map_4(int stepA,int stepB,int stepC,int stepD,int occupied,int A_occupied,int B_occupied,int C_occupied,int D_occupied)
{
	char as[1]={'A'},bs[1]={'B'},cs[1]={'C'},ds[1]={'D'};
	goto_xy(34,30);
	printf(" ======== +");
	goto_xy(34,31);
	printf("  ����  |");
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
//�a��b05 �R�B 
void map_5(int stepA,int stepB,int stepC,int stepD,int occupied,int A_occupied,int B_occupied,int C_occupied,int D_occupied)
{
	char as[1]={'A'},bs[1]={'B'},cs[1]={'C'},ds[1]={'D'};
	goto_xy(23,30);
	printf(" ======== +");
	goto_xy(23,31);
	printf("   �R�B   |");
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
//�a��b06
void map_6(int stepA,int stepB,int stepC,int stepD,int occupied,int A_occupied,int B_occupied,int C_occupied,int D_occupied)
{
	char as[1]={'A'},bs[1]={'B'},cs[1]={'C'},ds[1]={'D'};
	goto_xy(12,30);
	printf(" ======== +");
	goto_xy(12,31);
	printf("  �����s  |");
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
//�a��b07 �ʺ� 
void map_07(int stepA,int stepB,int stepC,int stepD,int occupied,int A_occupied,int B_occupied,int C_occupied,int D_occupied)
{
	char as[1]={'A'},bs[1]={'B'},cs[1]={'C'},ds[1]={'D'};
	
	printf("|   �ʺ�   |\n");
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
//�a��b08 
void map_08(int stepA,int stepB,int stepC,int stepD,int occupied,int A_occupied,int B_occupied,int C_occupied,int D_occupied)
{
	char as[1]={'A'},bs[1]={'B'},cs[1]={'C'},ds[1]={'D'};
	printf("|   �w��   |\n");
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
//�a��b09 
void map_09(int stepA,int stepB,int stepC,int stepD,int occupied,int A_occupied,int B_occupied,int C_occupied,int D_occupied)
{
	char as[1]={'A'},bs[1]={'B'},cs[1]={'C'},ds[1]={'D'};
	printf("|   ����   |\n");
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
//�a��b10 ���| 
void map_10(int stepA,int stepB,int stepC,int stepD,int occupied,int A_occupied,int B_occupied,int C_occupied,int D_occupied)
{
	char as[1]={'A'},bs[1]={'B'},cs[1]={'C'},ds[1]={'D'};
	printf("|   ���|   |\n");
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
//�a��b11
void map_11(int stepA,int stepB,int stepC,int stepD,int occupied,int A_occupied,int B_occupied,int C_occupied,int D_occupied)
{
	char as[1]={'A'},bs[1]={'B'},cs[1]={'C'},ds[1]={'D'};
	printf("|   �F��   |\n");
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
//�a��b12 
void map_12(int stepA,int stepB,int stepC,int stepD,int occupied,int A_occupied,int B_occupied,int C_occupied,int D_occupied)
{
	char as[1]={'A'},bs[1]={'B'},cs[1]={'C'},ds[1]={'D'};
	printf("+ ======== +\n");
	printf("|   ��|   |\n");
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
//�a��b13
void map_13(int stepA,int stepB,int stepC,int stepD,int occupied,int A_occupied,int B_occupied,int C_occupied,int D_occupied)
{
	char as[1]={'A'},bs[1]={'B'},cs[1]={'C'},ds[1]={'D'};
	goto_xy(12,0);
	printf(" ======== +");
	goto_xy(12,1);
	printf("   ���B   |");
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
//�a��b14 
void map_14(int stepA,int stepB,int stepC,int stepD,int occupied,int A_occupied,int B_occupied,int C_occupied,int D_occupied)
{
	char as[1]={'A'},bs[1]={'B'},cs[1]={'C'},ds[1]={'D'};
	goto_xy(23,0);
	printf(" ======== +");
	goto_xy(23,1);
	printf("   �x�F   |");
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
//�a��b15 
void map_15(int stepA,int stepB,int stepC,int stepD,int occupied,int A_occupied,int B_occupied,int C_occupied,int D_occupied)
{
	char as[1]={'A'},bs[1]={'B'},cs[1]={'C'},ds[1]={'D'};
	goto_xy(34,0);
	printf(" ======== +");
	goto_xy(34,1);
	printf("   �Ὤ   |");
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
//�a��b16
void map_16(int stepA,int stepB,int stepC,int stepD,int occupied,int A_occupied,int B_occupied,int C_occupied,int D_occupied)
{
	char as[1]={'A'},bs[1]={'B'},cs[1]={'C'},ds[1]={'D'};
	goto_xy(45,0);
	printf(" ======== +");
	goto_xy(45,1);
	printf("  �X�w�s  |");
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
//�a��b17 ���| 
void map_17(int stepA,int stepB,int stepC,int stepD,int occupied,int A_occupied,int B_occupied,int C_occupied,int D_occupied)
{
	char as[1]={'A'},bs[1]={'B'},cs[1]={'C'},ds[1]={'D'};
	goto_xy(56,0);
	printf(" ======== +");
	goto_xy(56,1);
	printf("   ���|   |");
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
//�a��b18 
void map_18(int stepA,int stepB,int stepC,int stepD,int occupied,int A_occupied,int B_occupied,int C_occupied,int D_occupied)
{
	char as[1]={'A'},bs[1]={'B'},cs[1]={'C'},ds[1]={'D'};
	goto_xy(67,0);
	printf(" ======== +");
	goto_xy(67,1);
	printf("  �Ӿ|��  |");
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
//�a��b19
void map_19(int stepA,int stepB,int stepC,int stepD,int occupied,int A_occupied,int B_occupied,int C_occupied,int D_occupied)
{
	char as[1]={'A'},bs[1]={'B'},cs[1]={'C'},ds[1]={'D'};
	goto_xy(78,0);
	printf(" ======== +");
	goto_xy(78,1);
	printf("   ����   |");
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
//�a��b20
void map_20(int stepA,int stepB,int stepC,int stepD,int occupied,int A_occupied,int B_occupied,int C_occupied,int D_occupied)
{
	char as[1]={'A'},bs[1]={'B'},cs[1]={'C'},ds[1]={'D'};
	goto_xy(77,7);
	printf("|   �y��   |");
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
//�a��b21 
void map_21(int stepA,int stepB,int stepC,int stepD,int occupied,int A_occupied,int B_occupied,int C_occupied,int D_occupied)
{
	char as[1]={'A'},bs[1]={'B'},cs[1]={'C'},ds[1]={'D'};
	goto_xy(77,13);
	printf("|   �E��   |");
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
//�a��b22 �R�B 
void map_22(int stepA,int stepB,int stepC,int stepD,int occupied,int A_occupied,int B_occupied,int C_occupied,int D_occupied)
{
	char as[1]={'A'},bs[1]={'B'},cs[1]={'C'},ds[1]={'D'};
	goto_xy(77,19);
	printf("|   �R�B   |");
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
//�a��b23
void map_23(int stepA,int stepB,int stepC,int stepD,int occupied,int A_occupied,int B_occupied,int C_occupied,int D_occupied)
{
	char as[1]={'A'},bs[1]={'B'},cs[1]={'C'},ds[1]={'D'};
	goto_xy(77,25);
	printf("|   �x�_   |");
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
//�a��b24
void map_24(int stepA,int stepB,int stepC,int stepD,int occupied,int A_occupied,int B_occupied,int C_occupied,int D_occupied)
{
	char as[1]={'A'},bs[1]={'B'},cs[1]={'C'},ds[1]={'D'};
	//ø�� 
	goto_xy(77,31);
	printf("|   �_�I   |");
	goto_xy(77,32);
	printf("| -------- |");
	goto_xy(77,33);
	//�B�z���� 
	if(stepA!=1||A.lose==1) as[0]=' ';else as[0]='A';
	printf("|   %c",as[0]);
	if(stepB!=1||B.lose==1) bs[0]=' ';else bs[0]='B';
	printf("%c",bs[0]);
	if(stepC!=1||C.lose==1) cs[0]=' ';else cs[0]='C';
	printf("%c",cs[0]);
	if(stepD!=1||D.lose==1) ds[0]=' ';else ds[0]='D';
	//ø�� 
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
	map_24(stepA,stepB,stepC,stepD,occupied,A_occupied,B_occupied,C_occupied,D_occupied);//�_�I 
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
//���aA��� 
int rotationA(int round,int jailA,int hospitalA,int stepA)
{
	int step;
	if(jailA==0&&hospitalA==0)
	{
		step=moveA(round);
		printf("-----------------------------------------------------------------------------------------\n");
		printf("�{�b�O�� %d �^�X\n",round);
		printf("���쪱�a %c�I\n",A.name);
		sleep(1);
		printf("�Y��l�I\n"); 
		sleep(1);
		printf("���a %c ���F %d�I�I\n",A.name,step);
		printf("���ʤ�...\n");
		sleep(1);
		return step;
	}
	else if(jailA==1)
	{
		printf("-----------------------------------------------------------------------------------------\n");
		printf("�{�b�O�� %d �^�X\n",round);
	
		printf("���쪱�a %c�I\n",A.name);
		sleep(1);
		printf("���a %c ���b�ʺ����I��참�ƤU�^�X�Y�i�X��\n",A.name); 
		
		printf("�Y��l�I\n"); 
		step=moveA(round);
		sleep(1);
		printf("���a %c ���F %d�I�I\n",A.name,step);
		
		if(step==2||step==4||step==6)
			printf("��� %d ���ߥX���I\n",step);
		else if(step==1||step==3||step==5)
			printf("��� %d �~�����I\n",step);
		return step;
	}
	else if(hospitalA!=0)
	{
		printf("-----------------------------------------------------------------------------------------\n");
		printf("�{�b�O�� %d �^�X\n",round);
		printf("���쪱�a %c�I\n",A.name);
		sleep(1);
		printf("���a %c �]��Ĳ�T�E�f�w���b��|���I�U�^�X�Y�i�X�|\n",A.name);
		if(hospitalA>=2)
			step=rand()%6+1;
		return step;
	}
}
//���aB��� 
int rotationB(int round,int jailB,int hospitalB,int stepB)
{
	int step;
	if(jailB==0&&hospitalB==0)
	{
		step=moveB(round);
		printf("-----------------------------------------------------------------------------------------\n");
		printf("�{�b�O�� %d �^�X\n",round);
	
		printf("���쪱�a %c�I\n",B.name);
		sleep(1);
		printf("�Y��l�I\n"); 
		sleep(1);
		printf("���a %c ���F %d�I�I\n",B.name,step);
	
		printf("���ʤ�...\n");
		sleep(1);
		return step;
	}
	else if(jailB==1)
	{
		printf("-----------------------------------------------------------------------------------------\n");
		printf("�{�b�O�� %d �^�X\n",round);
	
		printf("���쪱�a %c�I\n",B.name);
		
		printf("���a %c ���b�ʺ����I��참�ƤU�^�X�Y�i�X��\n",B.name); 
		sleep(1);
		printf("�Y��l�I\n"); 
		step=moveB(round);
		sleep(1);
		printf("���a %c ���F %d�I�I\n",B.name,step);
		
		if(step==2||step==4||step==6)
			printf("��� %d ���ߥX���I\n",step);
		else if(step==1||step==3||step==5)
			printf("��� %d �~�����I\n",step);
		return step;
	}
	else if(hospitalB!=0)
	{
		printf("-----------------------------------------------------------------------------------------\n");
		printf("�{�b�O�� %d �^�X\n",round);
		printf("���쪱�a %c�I\n",B.name);
		sleep(1);
		printf("���a %c �]��Ĳ�T�E�f�w���b��|���I�U�^�X�Y�i�X�|\n",B.name);
		if(hospitalB>=2)
			step=rand()%6+1;
		return step;
	}
}
//���aC��� 
int rotationC(int round,int jailC,int hospitalC,int stepC)
{
	int step;
	if(jailC==0&&hospitalC==0)
	{
		step=moveC(round);
		printf("-----------------------------------------------------------------------------------------\n");
		printf("�{�b�O�� %d �^�X\n",round);
		
		printf("���쪱�a %c�I\n",C.name);
		sleep(1);
		printf("�Y��l�I\n"); 
		sleep(1);
		printf("���a %c ���F %d�I�I\n",C.name,step);
	
		printf("���ʤ�...\n");
		sleep(1);
		return step;
	}
	else if(jailC==1)
	{
		printf("-----------------------------------------------------------------------------------------\n");
		printf("�{�b�O�� %d �^�X\n",round);
	
		printf("���쪱�a %c�I\n",C.name);
		
		printf("���a %c ���b�ʺ����I��참�ƤU�^�X�Y�i�X��\n",C.name); 
		sleep(1);
		printf("�Y��l�I\n"); 
		step=moveC(round);
		sleep(1);
		printf("���a %c ���F %d�I�I\n",C.name,step);
		
		if(step==2||step==4||step==6)
			printf("��� %d ���ߥX���I\n",step);
		else if(step==1||step==3||step==5)
			printf("��� %d �~�����I\n",step);
		return step;
	}
	else if(hospitalC!=0)
	{
		printf("-----------------------------------------------------------------------------------------\n");
		printf("�{�b�O�� %d �^�X\n",round);
		printf("���쪱�a %c�I\n",C.name);
		sleep(1);
		printf("���a %c �]��Ĳ�T�E�f�w���b��|���I�U�^�X�Y�i�X�|\n",C.name);
		if(hospitalC>=2)
			step=rand()%6+1;
		return step;
	}
}
//���aD��� 
int rotationD(int round,int jailD,int hospitalD,int stepD)
{
	int step;
	if(jailD==0&&hospitalD==0)
	{
		step=moveD(round);
		printf("-----------------------------------------------------------------------------------------\n");
		printf("�{�b�O�� %d �^�X\n",round);
		
		printf("���쪱�a %c�I\n",D.name);
		sleep(1);
		printf("�Y��l�I\n"); 
		sleep(1);
		printf("���a %c ���F %d�I�I\n",D.name,step);
	
		printf("���ʤ�...\n");
		sleep(1);
		return step;
	}
	else if(jailD==1)
	{
		printf("-----------------------------------------------------------------------------------------\n");
		printf("�{�b�O�� %d �^�X\n",round);
	
		printf("���쪱�a %c�I\n",D.name);
		sleep(1);
		printf("���a %c ���b�ʺ����I��참�ƤU�^�X�Y�i�X��\n",D.name); 
		
		printf("�Y��l�I\n"); 
		step=moveD(round);
		sleep(1);
		printf("���a %c ���F %d�I�I\n",D.name,step);
		
		if(step==2||step==4||step==6)
			printf("��� %d ���ߥX���I\n",step);
		else if(step==1||step==3||step==5)
			printf("��� %d �~�����I\n",step);
		return step;
	}
	else if(hospitalD!=0)
	{
		printf("-----------------------------------------------------------------------------------------\n");
		printf("�{�b�O�� %d �^�X\n",round);
		printf("���쪱�a %c�I\n",D.name);
		sleep(1);
		printf("���a %c �]��Ĳ�T�E�f�w���b��|���I�U�^�X�Y�i�X�|\n",D.name);
		if(hospitalD>=2)
			step=rand()%6+1;
		return step;
	}
}
//���|
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
			printf("�������a�H������\n");
			sleep(1);
			changeplace(stepA,stepB,stepC,stepD);
			break;
		case 2:
			printf("���a %c ���A�e���ʺ�\n",A.name);
			sleep(1);
			*stepA=8;
			break;
		case 3:
			printf("���a %c �B��u�n�A�i�H�����h�_�I���_�I���y\n",A.name);
			sleep(1);
			*stepA=1;
			break;
		case 4:
			printf("���a %c �b���W�X���סA�e��|\n",A.name);
			sleep(1);
			*stepA=13;
			break;
		case 5:
			printf("���a %c �D��ū�A�l������300����\n",A.name);
			sleep(1);
			A.money=A.money-300;
			break;
		case 6:
			maxMoney=B.money;
			if(maxMoney<C.money)	maxMoney=C.money; 
			if(maxMoney<D.money)	maxMoney=D.money;
			if(maxMoney<=A.money){
					maxMoney=A.money;
					printf("���a %c ���W���@���A�����W�[ 50 ����\n",A.name);
					sleep(1);
					A.money=A.money+50;
			}
			else if(maxMoney>A.money){
				A.money=maxMoney;
				printf("���a %c ���W���@���A�����j�T����\n",A.name);
				sleep(1);
			}
			break;
		case 7:
			printf("���a %c ���A�e���ʺ�\n",A.name);
			sleep(1);
			*stepA=8;
			break;
		case 8:
			printf("���a %c �B��u�n�A�i�H�����h�_�I���_�I���y\n",A.name);
			sleep(1);
			*stepA=1;
			break;
		case 9:
			printf("���a %c �b���W�X���סA�e��|\n",A.name);
			sleep(1);
			*stepA=13;
			break;
		case 10:
			printf("���a %c �D��ū�A�l������300����\n",A.name);
			sleep(1);
			A.money=A.money-300;
			break;
		case 11:
			maxMoney=B.money;
			if(maxMoney<C.money)	maxMoney=C.money; 
			if(maxMoney<D.money)	maxMoney=D.money;
			if(maxMoney<=A.money){
					maxMoney=A.money;
					printf("���a %c ���W���@���A�����W�[ 50 ����\n",A.name);
					sleep(1);
					A.money=A.money+50;
			}
			else if(maxMoney>A.money)
			{
				A.money=A.money+2000;
				printf("���a %c ���W���@���A�����j�T����\n",A.name);
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
			printf("�������a�H������\n");
			sleep(1);
			changeplace(stepA,stepB,stepC,stepD);
			break;
		case 2:
			printf("���a %c ���A�e���ʺ�\n",B.name);
			sleep(1);
			*stepB=8;
			break;
		case 3:
			printf("���a %c �B��u�n�A�i�H�����h�_�I���_�I���y\n",B.name);
			sleep(1);
			*stepB=1;
			break;
		case 4:
			printf("���a %c �b���W�X���סA�e��|\n",B.name);
			sleep(1);
			*stepB=13;
			break;
		case 5:
			printf("���a %c �D��ū�A�l������300����\n",B.name);
			sleep(1);
			B.money=B.money-300;
			break;
		case 6:
			maxMoney=A.money;
			if(maxMoney<C.money)	maxMoney=C.money; 
			if(maxMoney<D.money)	maxMoney=D.money;
			if(maxMoney<=B.money){
					maxMoney=B.money;
					printf("���a %c ���W���@���A�����W�[ 50 ����\n",B.name);
					sleep(1);
					B.money=B.money+50;
			}
			else if(maxMoney>B.money){
				B.money=maxMoney;
				printf("���a %c ���W���@���A�����j�T����\n",B.name);
				sleep(1);
			}
			break;
		case 7:
			printf("���a %c ���A�e���ʺ�\n",B.name);
			sleep(1);
			*stepB=8;
			break;
		case 8:
			printf("���a %c �B��u�n�A�i�H�����h�_�I���_�I���y\n",B.name);
			sleep(1);
			*stepB=1;
			break;
		case 9:
			printf("���a %c �b���W�X���סA�e��|\n",B.name);
			sleep(1);
			*stepB=13;
			break;
		case 10:
			printf("���a %c �D��ū�A�l������300����\n",B.name);
			sleep(1);
			B.money=B.money-300;
			break;
		case 11:
			maxMoney=A.money;
			if(maxMoney<C.money)	maxMoney=C.money; 
			if(maxMoney<D.money)	maxMoney=D.money;
			if(maxMoney<=B.money){
					maxMoney=B.money;
					printf("���a %c ���W���@���A�����W�[ 50 ����\n",B.name);
					sleep(1);
					B.money=B.money+50;
			}
			else if(maxMoney>B.money){
				B.money=B.money+2000;
				printf("���a %c ���W���@���A�����j�T����\n",B.name);
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
			printf("�������a�H������\n");
			sleep(1);
			changeplace(stepA,stepB,stepC,stepD);
			break;
		case 2:
			printf("���a %c ���A�e���ʺ�\n",C.name);
			sleep(1);
			*stepC=8;
			break;
		case 3:
			printf("���a %c �B��u�n�A�i�H�����h�_�I���_�I���y\n",C.name);
			sleep(1);
			*stepC=1;
			break;
		case 4:
			printf("���a %c �b���W�X���סA�e��|\n",C.name);
			sleep(1);
			*stepC=13;
			break;
		case 5:
			printf("���a %c �D��ū�A�l������300����\n",C.name);
			sleep(1);
			C.money=C.money-300;
			break;
		case 6:
			maxMoney=A.money;
			if(maxMoney<B.money)	maxMoney=B.money; 
			if(maxMoney<D.money)	maxMoney=D.money;
			if(maxMoney<=C.money){
					maxMoney=C.money;
					printf("���a %c ���W���@���A�����W�[ 50 ����\n",C.name);
					sleep(1);
					C.money=C.money+50;
			}
			else if(maxMoney>C.money){
				C.money=maxMoney;
				printf("���a %c ���W���@���A�����j�T����\n",C.name);
				sleep(1);
			}
			break;
		case 7:
			printf("���a %c ���A�e���ʺ�\n",C.name);
			sleep(1);
			*stepC=8;
			break;
		case 8:
			printf("���a %c �B��u�n�A�i�H�����h�_�I���_�I���y\n",C.name);
			sleep(1);
			*stepC=1;
			break;
		case 9:
			printf("���a %c �b���W�X���סA�e��|\n",C.name);
			sleep(1);
			*stepC=13;
			break;
		case 10:
			printf("���a %c �D��ū�A�l������300����\n",C.name);
			sleep(1);
			C.money=C.money-300;
			break;
		case 11:
			maxMoney=A.money;
			if(maxMoney<B.money)	maxMoney=B.money; 
			if(maxMoney<D.money)	maxMoney=D.money;
			if(maxMoney<=C.money){
					maxMoney=C.money;
					printf("���a %c ���W���@���A�����W�[ 50 ����\n",C.name);
					sleep(1);
					C.money=C.money+50;
			}
			else if(maxMoney>C.money){
				C.money=C.money+2000;
				printf("���a %c ���W���@���A�����j�T����\n",C.name);
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
			printf("�������a�H������\n");
			sleep(1);
			changeplace(stepA,stepB,stepC,stepD);
			break;
		case 2:
			printf("���a %c ���A�e���ʺ�\n",D.name);
			
			sleep(1);
			*stepD=8;
			break;
		case 3:
			printf("���a %c �B��u�n�A�i�H�����h�_�I���_�I���y\n",D.name);
			sleep(1);
			*stepD=1;
			break;
		case 4:
			printf("���a %c �b���W�X���סA�e��|\n",D.name);
			sleep(1);
			*stepD=13;
			break;
		case 5:
			printf("���a %c �D��ū�A�l������300����\n",D.name);
			sleep(1);
			D.money=D.money-300;
			break;
		case 6:
			maxMoney=A.money;
			if(maxMoney<C.money)	maxMoney=C.money; 
			if(maxMoney<B.money)	maxMoney=B.money;
			if(maxMoney<=D.money){
					maxMoney=D.money;
					printf("���a %c ���W���@���A�����W�[ 50 ����\n",D.name);
					sleep(1);
					D.money=D.money+50;
			}
			else if(maxMoney>D.money){
				D.money=maxMoney;
				printf("���a %c ���W���@���A�����j�T����\n",D.name);
				sleep(1);
			}
			break;
		case 7:
			printf("���a %c ���A�e���ʺ�\n",D.name);
			sleep(1);
			*stepD=8;
			break;
		case 8:
			printf("���a %c �B��u�n�A�i�H�����h�_�I���_�I���y\n",D.name);
			sleep(1);
			*stepD=1;
			break;
		case 9:
			printf("���a %c �b���W�X���סA�e��|\n",D.name);
			sleep(1);
			*stepD=13;
			break;
		case 10:
			printf("���a %c �D��ū�A�l������300����\n",D.name);
			sleep(1);
			D.money=D.money-300;
			break;
		case 11:
			maxMoney=A.money;
			if(maxMoney<C.money)	maxMoney=C.money; 
			if(maxMoney<B.money)	maxMoney=B.money;
			if(maxMoney<=D.money){
					maxMoney=D.money;
					printf("���a %c ���W���@���A�����W�[ 50 ����\n",D.name);
					sleep(1);
					D.money=D.money+50;
			}
			else if(maxMoney>D.money){
				D.money=D.money+2000;
				printf("���a %c ���W���@���A�����j�T����\n",D.name);
				sleep(1);
			}
			break;
	}
}
//���|
void lottery_A(){
	srand(time(NULL));
	int r, stake; 
	char option1;
	printf("�u���ڬw�H�~��⤤�j��!\n");
	sleep(1);
	printf("�O�_�}�l�C��?(Y/N)\n");
	play:
	scanf("%c",&option1);
	while(option1!='Y'&&option1!='y'&&option1!='N'&&option1!='n')
	{
		printf("��J���~�I �Э��s��J(Y/N):");
		fflush(stdin);
		scanf("%c",&option1);
		getchar();
	}
	if(option1=='Y'||option1=='y')
	{ 
		if(A.money<300)
		{
			printf("�S���U�A�٬O�O���F\n");
		}
		else 
		{
			printf("�п�J�z�n�C�������B\n");
			fflush(stdin);
			while(scanf("%d",&stake))
			{
			fflush(stdin);
				if(stake>A.money)
				{
					printf("���ߧO�Ӥj�A�A��J�@��\n");
				}
				else if(stake<=A.money)
					break;
			}
			r=rand()%10;
			if(r==9)
			{
				A.money+=stake*5;
				printf("���ߧA�Ȩ�F!!!(%d)\n",A.money);
			}
			else 
			{
				A.money-=stake;
				printf("�B��u���n�O...(%d)\n",A.money);
			}
			printf("�n�~��C����?(Y/N)\n");
			goto play;
		}
	} 
    else if(option1=='n'||option1=='N')
	{
		printf("����\n");     
	}	
}
void lottery_B(){
	srand(time(NULL));
	int r, stake; 
	char option1;
	printf("�u���ڬw�H�~��⤤�j��!\n");
	sleep(1);
	printf("�O�_�}�l�C��?(Y/N)\n");
	play:
	scanf("%c",&option1);
	while(option1!='Y'&&option1!='y'&&option1!='N'&&option1!='n')
	{
		printf("��J���~�I �Э��s��J(Y/N):");
		fflush(stdin);
		scanf("%c",&option1);
		getchar();
	}
	if(option1=='Y'||option1=='y')
	{ 
		if(B.money<300)
		{
			printf("�S���U�A�٬O�O���F\n");
		}
		else 
		{
			printf("�п�J�z�n�C�������B\n");
			fflush(stdin);
			while(scanf("%d",&stake))
			{
			fflush(stdin);
				if(stake>B.money)
				{
					printf("���ߧO�Ӥj�A�A��J�@��\n");
				}
				else if(stake<=B.money)
					break;
			}
			r=rand()%10;
			if(r==9)
			{
				B.money+=stake*5;
				printf("���ߧA�Ȩ�F!!!(%d)\n",B.money);
			}
			else 
			{
				B.money-=stake;
				printf("�B��u���n�O...(%d)\n",B.money);
			}
			printf("�n�~��C����?(Y/N)\n");
			goto play;
		}
	} 
    else if(option1=='n'||option1=='N')
	{
		printf("����\n");
	}	
}
void lottery_C(){
	srand(time(NULL));
	int r, stake; 
	char option1;
	printf("�u���ڬw�H�~��⤤�j��!\n");
	sleep(1);
	printf("�O�_�}�l�C��?(Y/N)\n");
	play:
	scanf("%c",&option1);
	while(option1!='Y'&&option1!='y'&&option1!='N'&&option1!='n')
	{
		printf("��J���~�I �Э��s��J(Y/N):");
		fflush(stdin);
		scanf("%c",&option1);
		getchar();
	}
	if(option1=='Y'||option1=='y')
	{ 
		if(C.money<300)
		{
			printf("�S���U�A�٬O�O���F\n");
		}
		else 
		{
			printf("�п�J�z�n�C�������B\n");
			fflush(stdin);
			while(scanf("%d",&stake))
			{
			fflush(stdin);
				if(stake>C.money)
				{
					printf("���ߧO�Ӥj�A�A��J�@��\n");
				}
				else if(stake<=C.money)
					break;
			}
			r=rand()%10;
			if(r==9)
			{
				C.money+=stake*5;
				printf("���ߧA�Ȩ�F!!!(%d)\n",C.money);
			}
			else 
			{
				C.money-=stake;
				printf("�B��u���n�O...(%d)\n",C.money);
			}
			printf("�n�~��C����?(Y/N)\n");
			goto play;
		}
	} 
    else if(option1=='n'||option1=='N')
	{
		printf("����\n");     
	}	
}
void lottery_D(){
	srand(time(NULL));
	int r, stake; 
	char option1;
	printf("�u���ڬw�H�~��⤤�j��!\n");
	sleep(1);
	printf("�O�_�}�l�C��?(Y/N)\n");
	play:
	scanf("%c",&option1);
	while(option1!='Y'&&option1!='y'&&option1!='N'&&option1!='n')
	{
		printf("��J���~�I �Э��s��J(Y/N):");
		fflush(stdin);
		scanf("%c",&option1);
		getchar();
	}
	if(option1=='Y'||option1=='y')
	{ 
		if(D.money<300)
		{
			printf("�S���U�A�٬O�O���F\n");
		}
		else 
		{
			printf("�п�J�z�n�C�������B\n");
			fflush(stdin);
			while(scanf("%d",&stake))
			{
			fflush(stdin);
				if(stake>D.money)
				{
					printf("���ߧO�Ӥj�A�A��J�@��\n");
				}
				else if(stake<=D.money)
					break;
			}
			r=rand()%10;
			if(r==9)
			{
				D.money+=stake*5;
				printf("���ߧA�Ȩ�F!!!(%d)\n",D.money);
			}
			else 
			{
				D.money-=stake;
				printf("�B��u���n�O...(%d)\n",D.money);
			}
			printf("�n�~��C����?(Y/N)\n");
			goto play;
		}
	} 
    else if(option1=='n'||option1=='N')
	{
		printf("����\n");     
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
//ii���γ~�� [step-1]�O�@�˪� 

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
			printf("��L���a�D�J���ĦM���A�l������200����\n");
			sleep(1);
			if(B.lose!=1)	B.money-=200;
			if(C.lose!=1)	C.money-=200;
			if(D.lose!=1)	D.money-=200;
			break;
		case 2:
			printf("�߮b�A��L���a�^�m����100���窺§��\n");
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
			printf("�ѿ蠟�H!\n");
			sleep(1);
			choo=rand()%2+1;
			sleep(1);
			if (choo==1){
				printf("���ߧA��o����1000����!\n");
				sleep(1);
				A.money+=1000; 
			} 
			else if(choo==2){
				printf("���ߧA���Ҧ��a�����ŦA�W��1��!\n");
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
			printf("�@���H���ǰe!\n");
			sleep(1);
			randomplaceA(stepA);
			break;
		case 5:
			printf("����ұo�|\n");
			sleep(1);
			A.money-=200;
			break;
		case 6:
			printf("��ꥢ�Q�A�l��500���窺����\n");
			sleep(1);
			A.money-=500;
			break;
		case 7:
			printf("�����Q�A�W�[600���窺����\n");
			sleep(1);
			A.money+=600;
			break;
		case 8:
			walk=rand()%3+1;
			printf("�A�e�i%d�B\n",walk);
			sleep(1);
			*stepA=*stepA+walk;
			break;
		case 9:
			walk=rand()%3+1;
			printf("�A��h%d�B\n",walk);
			sleep(1);
			*stepA=*stepA-walk;
			break;
		case 10:
			printf("���3(�t�H�W)�Y�i��o200��������I\n");
			sleep(1);
			sleep(1);
			r=rand()%6+1;
			printf("���%d�I\n",r);
			sleep(1);
			if(r>=3)
			{
				printf("���ߡI\n");
				sleep(1);
				B.money+=200; 
			}
			else
				printf("�i���I\n");
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
			printf("��L���a�D�J���ĦM���A�l������200����\n");
			sleep(1);
			if(A.lose!=1)	A.money-=200;
			if(C.lose!=1)	C.money-=200;
			if(D.lose!=1)	D.money-=200;
			break;
		case 2:
			printf("�߮b�A��L���a�^�m����100���窺§��\n");
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
			printf("�ѿ蠟�H!\n");
			sleep(1);
			choo=rand()%2+1;
			sleep(1);
			if (choo==1){
				printf("���ߧA��o����1000����!\n");
				sleep(1);
				B.money+=1000; 
			} 
			else if(choo==2){
				printf("���ߧA���Ҧ��a�����ŦA�W��1��!\n");
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
			printf("�@���H���ǰe!\n");
			sleep(1);
			randomplaceB(stepB);
			break;
		case 5:
			printf("����ұo�|\n");
			sleep(1);
			B.money-=200;
			break;
		case 6:
			printf("��ꥢ�Q�A�l��500���窺����\n");
			sleep(1);
			B.money-=500;
			break;
		case 7:
			printf("�����Q�A�W�[600���窺����\n");
			sleep(1);
			B.money+=600;
			break;
		case 8:
			walk=rand()%3+1;
			printf("�A�e�i%d�B\n",walk);
			sleep(1);
			*stepB=*stepB+walk;
			break;
		case 9:
			walk=rand()%3+1;
			printf("�A��h%d�B\n",walk);
			sleep(1);
			*stepB=*stepB-walk;
			break;
		case 10:
			printf("���3(�t�H�W)�Y�i��o200��������I\n");
			sleep(1);
			sleep(1);
			r=rand()%6+1;
			printf("���%d�I\n",r);
			if(r>=3)
			{
				printf("���ߡI\n");
				B.money+=200; 
			}
			else
				printf("�i���I\n");
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
			printf("��L���a�D�J���ĦM���A�l������200����\n");
			sleep(1);
			if(A.lose!=1)	A.money-=200;
			if(B.lose!=1)	B.money-=200;
			if(D.lose!=1)	D.money-=200;
			break;
		case 2:
			printf("�߮b�A��L���a�^�m����100���窺§��\n");
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
			printf("�ѿ蠟�H!\n");
			sleep(1);
			choo=rand()%2+1;
			sleep(1);
			if (choo==1){
				printf("���ߧA��o����1000����!\n");
				sleep(1);
				C.money+=1000; 
			} 
			else if(choo==2){
				printf("���ߧA���Ҧ��a�����ŦA�W��1��!\n");
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
			printf("�@���H���ǰe!\n");
			sleep(1);
			randomplaceC(stepC);
			break;
		case 5:
			printf("����ұo�|\n");
			sleep(1);
			C.money-=200;
			break;
		case 6:
			printf("��ꥢ�Q�A�l��500���窺����\n");
			sleep(1);
			C.money-=500;
			break;
		case 7:
			printf("�����Q�A�W�[600���窺����\n");
			sleep(1);
			C.money+=600;
			break;
		case 8:
			walk=rand()%3+1;
			printf("�A�e�i%d�B\n",walk);
			sleep(1);
			*stepC=*stepC+walk;
			break;
		case 9:
			walk=rand()%3+1;
			printf("�A��h%d�B\n",walk);
			sleep(1);
			*stepC=*stepC-walk;
			break;
		case 10:
			printf("���3(�t�H�W)�Y�i��o200��������I\n");
			sleep(1);
			r=rand()%6+1;
			printf("���%d�I\n",r);
			if(r>=3)
			{
				printf("���ߡI\n");
				B.money+=200; 
			}
			else
				printf("�i���I\n");
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
			printf("��L���a�D�J���ĦM���A�l������200����\n");
			sleep(1);
			if(A.lose!=1)	A.money-=200;
			if(B.lose!=1)	B.money-=200;
			if(C.lose!=1)	C.money-=200;
			break;
		case 2:
			printf("�߮b�A��L���a�^�m����100���窺§��\n");
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
			printf("�ѿ蠟�H!\n");
			sleep(1);
			choo=rand()%2+1;
			sleep(1);
			if (choo==1){
				printf("���ߧA��o����1000����!\n");
				sleep(1);
				D.money+=1000; 
			} 
			else if(choo==2){
				printf("���ߧA���Ҧ��a�����ŦA�W��1��!\n");
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
			printf("�@���H���ǰe!\n");
			sleep(1);
			randomplaceD(stepD);
			break;
		case 5:
			printf("����ұo�|\n");
			sleep(1);
			D.money-=200;
			break;
		case 6:
			printf("��ꥢ�Q�A�l��500���窺����\n");
			sleep(1);
			D.money-=500;
			break;
		case 7:
			printf("�����Q�A�W�[600���窺����\n");
			sleep(1);
			D.money+=600;
			break;
		case 8:
			walk=rand()%3+1;
			printf("�A�e�i%d�B\n",walk);
			sleep(1);
			*stepD=*stepD+walk;
			break;
		case 9:
			walk=rand()%3+1;
			printf("�A��h%d�B\n",walk);
			sleep(1);
			*stepD=*stepD-walk;
			break;
		case 10:
			printf("���3(�t�H�W)�Y�i��o200��������I\n");
			sleep(1);
			r=rand()%6+1;
			printf("���%d�I\n",r);
			if(r>=3)
			{
				printf("���ߡI\n");
				B.money+=200; 
			}
			else
				printf("�i���I\n");
			break;
	}
} 
int walkA(int walkA)
{
	if(walkA==1)
	{
		printf("\n-----------------------------------------------------------------------------------------\n");
		printf("���a %c �ثe����� %s�I ��o�_�I���y �ثe�֦��G%d����(����)\n",A.name,b[0].name,A.money);
	}
	if(walkA==2)
	{
		printf("\n-----------------------------------------------------------------------------------------\n");
		printf("���a %c �ثe����� %s�I  �ثe�֦��G%d����(����)\n",A.name,b[1].name,A.money);
	}
	if(walkA==3)
	{
		printf("\n-----------------------------------------------------------------------------------------\n");
		printf("���a %c �ثe����� %s�I  �ثe�֦��G%d����(����)\n",A.name,b[2].name,A.money);
	}
	if(walkA==4)
	{
		printf("\n-----------------------------------------------------------------------------------------\n");
		printf("���a %c �ثe����� %s�I  �ثe�֦��G%d����(����)\n",A.name,b[3].name,A.money);
	}
	if(walkA==5)
	{
		printf("\n-----------------------------------------------------------------------------------------\n");
		printf("���a %c �ثe����� %s�I  �ثe�֦��G%d����(����)\n",A.name,b[4].name,A.money);
	}
	if(walkA==6)
	{
		printf("\n-----------------------------------------------------------------------------------------\n");
		printf("���a %c �ثe����� %s�I  �ثe�֦��G%d����(����)\n",A.name,b[5].name,A.money);
	}
	if(walkA==7)
	{
		printf("\n-----------------------------------------------------------------------------------------\n");
		printf("���a %c �ثe����� %s�I  �ثe�֦��G%d����(����)\n",A.name,b[6].name,A.money);
	}
	if(walkA==8)
	{
		printf("\n-----------------------------------------------------------------------------------------\n");
		printf("���a %c �ثe����� %s�I ��참�ƤU�^�X�Y�i���} \n",A.name,b[7].name);
	}
	if(walkA==9)
	{
		printf("\n-----------------------------------------------------------------------------------------\n");
		printf("���a %c �ثe����� %s�I  �ثe�֦��G%d����(����)\n",A.name,b[8].name,A.money);
	}
	if(walkA==10)
	{
		printf("\n-----------------------------------------------------------------------------------------\n");
		printf("���a %c �ثe����� %s�I  �ثe�֦��G%d����(����)\n",A.name,b[9].name,A.money);
	}
	if(walkA==11)
	{
		printf("\n-----------------------------------------------------------------------------------------\n");
		printf("���a %c �ثe����� %s�I  �ثe�֦��G%d����(����)\n",A.name,b[10].name,A.money);
	}
	if(walkA==12)
	{
		printf("\n-----------------------------------------------------------------------------------------\n");
		printf("���a %c �ثe����� %s�I  �ثe�֦��G%d����(����)\n",A.name,b[11].name,A.money);
	}
	if(walkA==13)
	{
		printf("\n-----------------------------------------------------------------------------------------\n");
		printf("���a %c �]��Ĳ�T�E�f�w���b��|���I �ثe�֦��G%d����(����)\n",A.name,A.money); 
	}
	if(walkA==14)
	{
		printf("\n-----------------------------------------------------------------------------------------\n");
		printf("���a %c �ثe����� %s�I  �ثe�֦��G%d����(����)\n",A.name,b[13].name,A.money);
	}
	if(walkA==15)
	{
		printf("\n-----------------------------------------------------------------------------------------\n");
		printf("���a %c �ثe����� %s�I  �ثe�֦��G%d����(����)\n",A.name,b[14].name,A.money);
	}
	if(walkA==16)
	{
		printf("\n-----------------------------------------------------------------------------------------\n");
		printf("���a %c �ثe����� %s�I  �ثe�֦��G%d����(����)\n",A.name,b[15].name,A.money);
	}
	if(walkA==17)
	{
		printf("\n-----------------------------------------------------------------------------------------\n");
		printf("���a %c �ثe����� %s�I  �ثe�֦��G%d����(����)\n",A.name,b[16].name,A.money);
	}
	if(walkA==18)
	{
		printf("\n-----------------------------------------------------------------------------------------\n");
		printf("���a %c �ثe����� %s�I  �ثe�֦��G%d����(����)\n",A.name,b[17].name,A.money);
	}
	if(walkA==19)
	{
		printf("\n-----------------------------------------------------------------------------------------\n");
		printf("���a %c �ثe����� %s�I  �ثe�֦��G%d����(����)\n",A.name,b[18].name,A.money);
	}
	if(walkA==20)
	{
		printf("\n-----------------------------------------------------------------------------------------\n");
		printf("���a %c �ثe����� %s�I  �ثe�֦��G%d����(����)\n",A.name,b[19].name,A.money);
	}
	if(walkA==21)
	{
		printf("\n-----------------------------------------------------------------------------------------\n");
		printf("���a %c �ثe����� %s�I  �ثe�֦��G%d����(����)\n",A.name,b[20].name,A.money);
	}
	if(walkA==22)
	{
		printf("\n-----------------------------------------------------------------------------------------\n");
		printf("���a %c �ثe����� %s�I  �ثe�֦��G%d����(����)\n",A.name,b[21].name,A.money);
	}
	if(walkA==23)
	{
		printf("\n-----------------------------------------------------------------------------------------\n");
		printf("���a %c �ثe����� %s�I  �ثe�֦��G%d����(����)\n",A.name,b[22].name,A.money);
	}
	if(walkA==24)
	{
		printf("\n-----------------------------------------------------------------------------------------\n");
		printf("���a %c �ثe����� %s�I  �ثe�֦��G%d����(����)\n",A.name,b[23].name,A.money);
	}
}
int walkB(int walkB)
{
	if(walkB==1)
	{
		printf("���a %c �ثe����� %s�I ��o�_�I���y �ثe�֦��G%d����(����)\n",B.name,b[0].name,B.money);
	}
	if(walkB==2)
	{
		printf("���a %c �ثe����� %s�I  �ثe�֦��G%d����(����)\n",B.name,b[1].name,B.money);
	}
	if(walkB==3)
	{
		printf("���a %c �ثe����� %s�I  �ثe�֦��G%d����(����)\n",B.name,b[2].name,B.money);
	}
	if(walkB==4)
	{
		printf("���a %c �ثe����� %s�I  �ثe�֦��G%d����(����)\n",B.name,b[3].name,B.money);
	}
	if(walkB==5)
	{
		printf("���a %c �ثe����� %s�I  �ثe�֦��G%d����(����)\n",B.name,b[4].name,B.money);
	}
	if(walkB==6)
	{
		printf("���a %c �ثe����� %s�I  �ثe�֦��G%d����(����)\n",B.name,b[5].name,B.money);
	}
	if(walkB==7)
	{
		printf("���a %c �ثe����� %s�I  �ثe�֦��G%d����(����)\n",B.name,b[6].name,B.money);
	}
	if(walkB==8)
	{
		printf("���a %c �ثe����� %s�I ��참�ƤU�^�X�Y�i���} \n",B.name,b[7].name);
	}
	if(walkB==9)
	{
		printf("���a %c �ثe����� %s�I  �ثe�֦��G%d����(����)\n",B.name,b[8].name,B.money);
	}
	if(walkB==10)
	{
		printf("���a %c �ثe����� %s�I  �ثe�֦��G%d����(����)\n",B.name,b[9].name,B.money);
	}
	if(walkB==11)
	{
		printf("���a %c �ثe����� %s�I  �ثe�֦��G%d����(����)\n",B.name,b[10].name,B.money);
	}
	if(walkB==12)
	{
		printf("���a %c �ثe����� %s�I  �ثe�֦��G%d����(����)\n",B.name,b[11].name,B.money);
	}
	if(walkB==13)
	{
		printf("���a %c �]��Ĳ�T�E�f�w���b��|���I �ثe�֦��G%d����(����)\n",B.name,B.money); 
	}
	if(walkB==14)
	{
		printf("���a %c �ثe����� %s�I  �ثe�֦��G%d����(����)\n",B.name,b[13].name,B.money);
	}
	if(walkB==15)
	{
		printf("���a %c �ثe����� %s�I  �ثe�֦��G%d����(����)\n",B.name,b[14].name,B.money);
	}
	if(walkB==16)
	{
		printf("���a %c �ثe����� %s�I  �ثe�֦��G%d����(����)\n",B.name,b[15].name,B.money);
	}
	if(walkB==17)
	{
		printf("���a %c �ثe����� %s�I  �ثe�֦��G%d����(����)\n",B.name,b[16].name,B.money);
	}
	if(walkB==18)
	{
		printf("���a %c �ثe����� %s�I  �ثe�֦��G%d����(����)\n",B.name,b[17].name,B.money);
	}
	if(walkB==19)
	{
		printf("���a %c �ثe����� %s�I  �ثe�֦��G%d����(����)\n",B.name,b[18].name,B.money);
	}
	if(walkB==20)
	{
		printf("���a %c �ثe����� %s�I  �ثe�֦��G%d����(����)\n",B.name,b[19].name,B.money);
	}
	if(walkB==21)
	{
		printf("���a %c �ثe����� %s�I  �ثe�֦��G%d����(����)\n",B.name,b[20].name,B.money);
	}
	if(walkB==22)
	{
		printf("���a %c �ثe����� %s�I  �ثe�֦��G%d����(����)\n",B.name,b[21].name,B.money);
	}
	if(walkB==23)
	{
		printf("���a %c �ثe����� %s�I  �ثe�֦��G%d����(����)\n",B.name,b[22].name,B.money);
	}
	if(walkB==24)
	{
		printf("���a %c �ثe����� %s�I  �ثe�֦��G%d����(����)\n",B.name,b[23].name,B.money);
	}
}
int walkC(int walkC)
{
	if(walkC==1)
	{
		printf("���a %c �ثe����� %s�I ��o�_�I���y �ثe�֦��G%d����(����)\n",C.name,b[0].name,C.money);
	}
	if(walkC==2)
	{
		printf("���a %c �ثe����� %s�I  �ثe�֦��G%d����(����)\n",C.name,b[1].name,C.money);
	}
	if(walkC==3)
	{
		printf("���a %c �ثe����� %s�I  �ثe�֦��G%d����(����)\n",C.name,b[2].name,C.money);
	}
	if(walkC==4)
	{
		printf("���a %c �ثe����� %s�I  �ثe�֦��G%d����(����)\n",C.name,b[3].name,C.money);
	}
	if(walkC==5)
	{
		printf("���a %c �ثe����� %s�I  �ثe�֦��G%d����(����)\n",C.name,b[4].name,C.money);
	}
	if(walkC==6)
	{
		printf("���a %c �ثe����� %s�I  �ثe�֦��G%d����(����)\n",C.name,b[5].name,C.money);
	}
	if(walkC==7)
	{
		printf("���a %c �ثe����� %s�I  �ثe�֦��G%d����(����)\n",C.name,b[6].name,C.money);
	}
	if(walkC==8)
	{
		printf("���a %c �ثe����� %s�I ��참�ƤU�^�X�Y�i���} \n",C.name,b[7].name);
	}
	if(walkC==9)
	{
		printf("���a %c �ثe����� %s�I  �ثe�֦��G%d����(����)\n",C.name,b[8].name,C.money);
	}
	if(walkC==10)
	{
		printf("���a %c �ثe����� %s�I  �ثe�֦��G%d����(����)\n",C.name,b[9].name,C.money);
	}
	if(walkC==11)
	{
		printf("���a %c �ثe����� %s�I  �ثe�֦��G%d����(����)\n",C.name,b[10].name,C.money);
	}
	if(walkC==12)
	{
		printf("���a %c �ثe����� %s�I  �ثe�֦��G%d����(����)\n",C.name,b[11].name,C.money);
	}
	if(walkC==13)
	{
		printf("���a %c �]��Ĳ�T�E�f�w���b��|���I �ثe�֦��G%d����(����)\n",C.name,C.money); 
	}
	if(walkC==14)
	{
		printf("���a %c �ثe����� %s�I  �ثe�֦��G%d����(����)\n",C.name,b[13].name,C.money);
	}
	if(walkC==15)
	{
		printf("���a %c �ثe����� %s�I  �ثe�֦��G%d����(����)\n",C.name,b[14].name,C.money);
	}
	if(walkC==16)
	{
		printf("���a %c �ثe����� %s�I  �ثe�֦��G%d����(����)\n",C.name,b[15].name,C.money);
	}
	if(walkC==17)
	{
		printf("���a %c �ثe����� %s�I  �ثe�֦��G%d����(����)\n",C.name,b[16].name,C.money);
	}
	if(walkC==18)
	{
		printf("���a %c �ثe����� %s�I  �ثe�֦��G%d����(����)\n",C.name,b[17].name,C.money);
	}
	if(walkC==19)
	{
		printf("���a %c �ثe����� %s�I  �ثe�֦��G%d����(����)\n",C.name,b[18].name,C.money);
	}
	if(walkC==20)
	{
		printf("���a %c �ثe����� %s�I  �ثe�֦��G%d����(����)\n",C.name,b[19].name,C.money);
	}
	if(walkC==21)
	{
		printf("���a %c �ثe����� %s�I  �ثe�֦��G%d����(����)\n",C.name,b[20].name,C.money);
	}
	if(walkC==22)
	{
		printf("���a %c �ثe����� %s�I  �ثe�֦��G%d����(����)\n",C.name,b[21].name,C.money);
	}
	if(walkC==23)
	{
		printf("���a %c �ثe����� %s�I  �ثe�֦��G%d����(����)\n",C.name,b[22].name,C.money);
	}
	if(walkC==24)
	{
		printf("���a %c �ثe����� %s�I  �ثe�֦��G%d����(����)\n",C.name,b[23].name,C.money);
	}
}
int walkD(int walkD)
{
	if(walkD==1)
	{
		printf("���a %c �ثe����� %s�I ��o�_�I���y �ثe�֦��G%d����(����)\n",D.name,b[0].name,D.money);
	}
	if(walkD==2)
	{
		printf("���a %c �ثe����� %s�I  �ثe�֦��G%d����(����)\n",D.name,b[1].name,D.money);
	}
	if(walkD==3)
	{
		printf("���a %c �ثe����� %s�I  �ثe�֦��G%d����(����)\n",D.name,b[2].name,D.money);
	}
	if(walkD==4)
	{
		printf("���a %c �ثe����� %s�I  �ثe�֦��G%d����(����)\n",D.name,b[3].name,D.money);
	}
	if(walkD==5)
	{
		printf("���a %c �ثe����� %s�I  �ثe�֦��G%d����(����)\n",D.name,b[4].name,D.money);
	}
	if(walkD==6)
	{
		printf("���a %c �ثe����� %s�I  �ثe�֦��G%d����(����)\n",D.name,b[5].name,D.money);
	}
	if(walkD==7)
	{
		printf("���a %c �ثe����� %s�I  �ثe�֦��G%d����(����)\n",D.name,b[6].name,D.money);
	}
	if(walkD==8)
	{
		printf("���a %c �ثe����� %s�I ��참�ƤU�^�X�Y�i���} \n",D.name,b[7].name);
	}
	if(walkD==9)
	{
		printf("���a %c �ثe����� %s�I  �ثe�֦��G%d����(����)\n",D.name,b[8].name,D.money);
	}
	if(walkD==10)
	{
		printf("���a %c �ثe����� %s�I  �ثe�֦��G%d����(����)\n",D.name,b[9].name,D.money);
	}
	if(walkD==11)
	{
		printf("���a %c �ثe����� %s�I  �ثe�֦��G%d����(����)\n",D.name,b[10].name,D.money);
	}
	if(walkD==12)
	{
		printf("���a %c �ثe����� %s�I  �ثe�֦��G%d����(����)\n",D.name,b[11].name,D.money);
	}
	if(walkD==13)
	{
		printf("���a %c �]��Ĳ�T�E�f�w���b��|���I  �ثe�֦��G%d����(����)\n",D.name,D.money); 
	}
	if(walkD==14)
	{
		printf("���a %c �ثe����� %s�I  �ثe�֦��G%d����(����)\n",D.name,b[13].name,D.money);
	}
	if(walkD==15)
	{
		printf("���a %c �ثe����� %s�I  �ثe�֦��G%d����(����)\n",D.name,b[14].name,D.money);
	}
	if(walkD==16)
	{
		printf("���a %c �ثe����� %s�I  �ثe�֦��G%d����(����)\n",D.name,b[15].name,D.money);
	}
	if(walkD==17)
	{
		printf("���a %c �ثe����� %s�I  �ثe�֦��G%d����(����)\n",D.name,b[16].name,D.money);
	}
	if(walkD==18)
	{
		printf("���a %c �ثe����� %s�I  �ثe�֦��G%d����(����)\n",D.name,b[17].name,D.money);
	}
	if(walkD==19)
	{
		printf("���a %c �ثe����� %s�I  �ثe�֦��G%d����(����)\n",D.name,b[18].name,D.money);
	}
	if(walkD==20)
	{
		printf("���a %c �ثe����� %s�I  �ثe�֦��G%d����(����)\n",D.name,b[19].name,D.money);
	}
	if(walkD==21)
	{
		printf("���a %c �ثe����� %s�I  �ثe�֦��G%d����(����)\n",D.name,b[20].name,D.money);
	}
	if(walkD==22)
	{
		printf("���a %c �ثe����� %s�I  �ثe�֦��G%d����(����)\n",D.name,b[21].name,D.money);
	}
	if(walkD==23)
	{
		printf("���a %c �ثe����� %s�I  �ثe�֦��G%d����(����)\n",D.name,b[22].name,D.money);
	}
	if(walkD==24)
	{
		printf("���a %c �ثe����� %s�I  �ثe�֦��G%d����(����)\n",D.name,b[23].name,D.money);
	}
}
//�P�_�ӧQ 
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
		printf("���ߪ��a A �ӧQ�I\n");
		*round=0;
		winning=1;
		return winning;
	}
	if(B.win==1)
	{
		printf("���ߪ��a B �ӧQ�I\n");
		*round=0;
		winning=1;
		return winning;
	}
	if(C.win==1)
	{
		printf("���ߪ��a C �ӧQ�I\n");
		*round=0;
		winning=1;
		return winning;
	}
	if(D.win==1)
	{
		printf("���ߪ��a D �ӧQ�I\n");
		*round=0;
		winning=1;
		return winning;
	}
}
int main()
{
	int x,round=0,As=0,Bs=0,Cs=0,Ds=0,stepA=1,stepB=1,stepC=1,stepD=1;
	//�ʺ� 
	int jailA=0,jailB=0,jailC=0,jailD=0;
	//��| 
	int hospitalA=0,hospitalB=0,hospitalC=0,hospitalD=0,round_temp=1;
	int i;
	//�P�_�ӧQ 
	int winning=0;
	//�a�v 
	int O[24]={0};
	//�_�l�a�v
	int A_occupied[24]={0},B_occupied[24]={0},C_occupied[24]={0},D_occupied[24]={0},occupied[24]={0};
	//�S��a�I 
	occupied[0]=2;
	occupied[5]=2;
	occupied[7]=2;
	occupied[10]=2;
	occupied[12]=2;
	occupied[17]=2;
	occupied[22]=2;
	char c,ch,option,select; 
	//�g�a�_�l����
	for(i=0;i<=24;i++)
	{
		b[i].lvl=0;
	}
	//�a�I						//�a�� 
	strcpy(b[0].name,"�_�I");	O[0]=5;
	strcpy(b[1].name,"�{��");	b[1].price=120;
	strcpy(b[2].name,"�M��");	b[2].price=110;
	strcpy(b[3].name,"����");	b[3].price=150;
	strcpy(b[4].name,"����"); b[4].price=140;
	strcpy(b[5].name,"�R�B");	O[5]=5;
	strcpy(b[6].name,"�����s"); b[6].price=230;
	strcpy(b[7].name,"�ʺ�");	O[7]=5;
	strcpy(b[8].name,"�w��");   b[8].price=100;
	strcpy(b[9].name,"����");   b[9].price=160;	
	strcpy(b[10].name,"���|");  O[10]=5;
	strcpy(b[11].name,"�F��");  b[11].price=130;
	strcpy(b[12].name,"��|");	O[12]=5;
	strcpy(b[13].name,"���B");  b[13].price=180;
	strcpy(b[14].name,"�x�F");  b[14].price=100;
	strcpy(b[15].name,"�Ὤ");  b[15].price=100;
	strcpy(b[16].name,"�X�w�s");b[16].price=200;
	strcpy(b[17].name,"���|");	O[17]=5;
	strcpy(b[18].name,"�Ӿ|��");b[18].price=120;
	strcpy(b[19].name,"����");  b[19].price=110;
	strcpy(b[20].name,"�y��");  b[20].price=150;
	strcpy(b[21].name,"�E��");  b[21].price=130;
	strcpy(b[22].name,"�R�B");	O[22]=5;
	strcpy(b[23].name,"�x�_");  b[23].price=300;
	//
	srand(time(NULL));
	while(1)
	{
		//�����k�s
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
		//�_�l���B 
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
		map_24(stepA,stepB,stepC,stepD,O[0],A_occupied[stepA-1],B_occupied[stepA-1],C_occupied[stepA-1],D_occupied[stepA-1]);//�_�I 
		
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
				printf("��J���~�I �Э��s��J START GAME?(Y/N):");
				fflush(stdin);
				scanf("%c",&option);
				getchar();
			}
			if(option=='Y'||option=='y')
			{
		  		system("CLS");
				printf("\n���a1: A\n");
				sleep(1);
				A.name='A';
				printf("\n���a2: B\n");
				sleep(1);
				B.name='B';
				printf("\n���a3: C\n");
				sleep(1);
				C.name='C';
				printf("\n���a4: D\n");
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
	    //�e�{�e�� 
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
			map_24(stepA,stepB,stepC,stepD,O[0],A_occupied[stepD-1],B_occupied[stepD-1],C_occupied[stepD-1],D_occupied[stepD-1]);//�_�I 
			
			map_6(stepA,stepB,stepC,stepD,O[6],A_occupied[stepD-1],B_occupied[stepD-1],C_occupied[stepD-1],D_occupied[stepD-1]);
			map_5(stepA,stepB,stepC,stepD,O[5],A_occupied[stepD-1],B_occupied[stepD-1],C_occupied[stepD-1],D_occupied[stepD-1]);
			map_4(stepA,stepB,stepC,stepD,O[4],A_occupied[stepD-1],B_occupied[stepD-1],C_occupied[stepD-1],D_occupied[stepD-1]);
			map_3(stepA,stepB,stepC,stepD,O[3],A_occupied[stepD-1],B_occupied[stepD-1],C_occupied[stepD-1],D_occupied[stepD-1]);
			map_2(stepA,stepB,stepC,stepD,O[2],A_occupied[stepD-1],B_occupied[stepD-1],C_occupied[stepD-1],D_occupied[stepD-1]);	
			map_1(stepA,stepB,stepC,stepD,O[1],A_occupied[stepD-1],B_occupied[stepD-1],C_occupied[stepD-1],D_occupied[stepD-1]);
			/////////////////////////////////////////////////////////////////////////////////////
			//�ӧQ
			if(win_judge(winning,&round)==1)
			{
				system("cls");
				if(A.win==1)
					printf("\n���ߪ��a A �ӧQ�I�Y�N��^���D����...");
				if(B.win==1)
					printf("\n���ߪ��a B �ӧQ�I�Y�N��^���D����...");
				if(C.win==1)
					printf("\n���ߪ��a C �ӧQ�I�Y�N��^���D����...");
				if(D.win==1)
					printf("\n���ߪ��a D �ӧQ�I�Y�N��^���D����...");
				sleep(2);
				system("cls");
				break;
			}
			if(A.money>0)
				walkA(stepA);
			else if(A.money<0)
			{
				printf("\n-----------------------------------------------------------------------------------------\n");
				printf("���a %c �w�}���I�L�k�~��i��C��\n",A.name);
			}
			if(round>1&&B.money>0)
	    		walkB(stepB);
	    	else if(B.money<0)
	    		printf("���a %c �w�}���I�L�k�~��i��C��\n",B.name);
	    	if(round>1&&C.money>0)
	    		walkC(stepC);
	    	else if(C.money<0)
	    		printf("���a %c �w�}���I�L�k�~��i��C��\n",C.name);
	    	if(round>1&&D.money>0)
	    		walkD(stepD);
	    	else if(D.money<0)
	    		printf("���a %c �w�}���I�L�k�~��i��C��\n",D.name);
	    	if(A.money>0)
	    		As=rotationA(round,jailA,hospitalA,stepA);
			if(stepA<=24)
			{			
				//�ʺ� 
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
				//��|
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
				//�R�B 
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
				//���|
				if(stepA==11||stepA==18)
					oppo_A(&stepA);
			}
			if(stepA>24)
			{
				stepA=stepA-24;
				//�g�L�_�I���� 
				A.money=A.money+600;
			}
			if(A.money>0)
			{
				printf("�Ы����N���~��......\n");
		    	c=getch();
		    	system("CLS");	
			}
	    	//�����O�_���Ŧa �p�G�O�h�߰ݬO�_�R�a
	    	if(O[stepA-1]==0&&O[stepA-1]!=5&&A.money>0)
			{
				printf("���a %c �z�ثe�Ҧb %s ���Ŧa�C\n\n�a���� %d ����аݭn�ʶR�ܡH(Y/N)�G",A.name,b[stepA-1].name,b[stepA-1].price); 
				scanf("%c",&select);
				getchar();
				while(select!='Y'&&select!='y'&&select!='N'&&select!='n')
				{
					printf("��J���~�I �Э��s��J(Y/N):");
					fflush(stdin);
					scanf("%c",&select);
					getchar();
				}
				if(select=='Y'||select=='y')
				{
					if(A.money-b[stepA-1].price<0)
					{
						printf("\n\n���a %c �z�S�����������I",A.name);
					}
					else
					{
						A.occupied[stepA-1]=1;
						A_occupied[stepA-1]=1;
						O[stepA-1]=1;
						b[stepA-1].lvl++;
						printf("\n\n���a %c �z�w�ʶR %s�I",A.name,b[stepA-1].name);
						A.money=A.money-b[stepA-1].price;
						printf("  �Ѿl���B�� %d �I\n\n",A.money);
						b[stepA-1].price=b[stepA-1].price*b[stepA-1].lvl;
					}
				}
				else
					printf("\n\n�����R�a");
			} 
			//�g�a�ɯ� 
			else if(O[stepA-1]==1&&A_occupied[stepA-1]==1&&b[stepA-1].lvl<3&&A.money>0)
			{
				printf("���a %c �o�O�z�ثe���Ҧb�a(%s,����:%d)\n\n",A.name,b[stepA-1].name,b[stepA-1].lvl);
				printf("�аݭn��O %d ����ɯŶܡH(Y/N)\n\n",b[stepA-1].price);
				scanf("%c",&select);
				getchar();
				while(select!='Y'&&select!='y'&&select!='N'&&select!='n')
				{
					printf("��J���~�I �Э��s��J(Y/N):");
					fflush(stdin);
					scanf("%c",&select);
					getchar();
				}
				if(select=='Y'||select=='y')
				{
					if(A.money-b[stepA-1].price<0)
					{
						printf("\n\n���a %c �z�S�����������I",A.name);
					}
					else
					{
						b[stepA-1].lvl++;
						printf("\n\n���a %c �z�w�ɯ� %s �ثe�g�a����:%d�I",A.name,b[stepA-1].name,b[stepA-1].lvl);
						A.money=A.money-b[stepA-1].price;
						printf("  �Ѿl���B�� %d �I\n\n",A.money);
						b[stepA-1].price=b[stepA-1].price*b[stepA-1].lvl;
					}
				}
				else
					printf("�����ɯ�");
			}
			//���O�H���a
			else if(O[stepA-1]!=1&&O[stepA-1]!=0&&O[stepA-1]!=5&&A.money>0)
			{
				printf("���a %c �z�ثe�Ҧb %s ���w�Q�ʶR�C�a���� %d ���� �w�۰ʦ��ڵ��a�D\n\n",A.name,b[stepA-1].name,b[stepA-1].price);
				if(B_occupied[stepA-1]==1)
					B.money=B.money+b[stepA-1].price;
				else if(C_occupied[stepA-1]==1)
					C.money=C.money+b[stepA-1].price;
				else if(D_occupied[stepA-1]==1)
					D.money=D.money+b[stepA-1].price;
				A.money=A.money-b[stepA-1].price;
			} 
			//�鱼 
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
				printf("\n�Ы����N���~��......\n");
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
	    	//�ӧQ
			if(B.win==1&&win_judge(winning,&round)==1)
			{
				system("cls");
				if(A.win==1)
					printf("\n���ߪ��a A �ӧQ�I�Y�N��^���D����...");
				if(B.win==1)
					printf("\n���ߪ��a B �ӧQ�I�Y�N��^���D����...");
				if(C.win==1)
					printf("\n���ߪ��a C �ӧQ�I�Y�N��^���D����...");
				if(D.win==1)
					printf("\n���ߪ��a D �ӧQ�I�Y�N��^���D����...");
				sleep(2);
				system("cls");
				break;
			}
	    	if(A.money>0)
				walkA(stepA);
			else if(A.money<0)
			{
				printf("\n-----------------------------------------------------------------------------------------\n");
				printf("���a %c �w�}���I�L�k�~��i��C��\n",A.name);
			}
			if(B.money>0)
				walkB(stepB);
			else if(B.money<0)
				printf("���a %c �w�}���I�L�k�~��i��C��\n",B.name);
			if(round>1&&C.money>0)
	    		walkC(stepC);
	    	else if(C.money<0)
	    		printf("���a %c �w�}���I�L�k�~��i��C��\n",C.name);
	    	if(round>1&&D.money>0)
	    		walkD(stepD);
	    	else if(D.money<0)
	    		printf("���a %c �w�}���I�L�k�~��i��C��\n",D.name);
	    	if(B.money>0)
	    		Bs=rotationB(round,jailB,hospitalB,stepB);
	    	if(stepB<=24)
			{
				//�ʺ� 
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
				//��| 
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
				//�R�B 
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
				//���|
				if(stepB==11||stepB==18)
					oppo_B(&stepB); 
			}
			if(stepB>24)
			{ 
				stepB=stepB-24;
				//�g�L�_�I����
				B.money=B.money+600; 
			} 
	    	if(B.money>0)
	    	{
	    		printf("�Ы����N���~��......\n");
		    	c=getch();
		    	system("CLS");
			}
	    	//�����O�_���Ŧa �p�G�O�h�߰ݬO�_�R�a
	    	if(O[stepB-1]==0&&O[stepB-1]!=5&&B.money>0)
			{
				printf("���a %c �z�ثe�Ҧb %s ���Ŧa�C\n\n�a���� %d ����аݭn�ʶR�ܡH(Y/N)�G",B.name,b[stepB-1].name,b[stepB-1].price);
				scanf("%c",&select);
				getchar();
				while(select!='Y'&&select!='y'&&select!='N'&&select!='n')
				{
					printf("��J���~�I �Э��s��J(Y/N):");
					fflush(stdin);
					scanf("%c",&select);
					getchar();
				}
				if(select=='Y'||select=='y')
				{
					if(B.money-b[stepB-1].price<0)
					{
						printf("\n\n���a %c �z�S�����������I",B.name);
					}
					else
					{
						B.occupied[stepB-1]=2;
						B_occupied[stepB-1]=1;
						//�g�a�аO 
						O[stepB-1]=2;
						b[stepB-1].lvl++;
						printf("\n\n���a %c �z�w�ʶR %s �I",B.name,b[stepB-1].name);
						B.money=B.money-b[stepB-1].price;
						printf("  �Ѿl���B�� %d �I\n\n",B.money);
						b[stepB-1].price=b[stepB-1].price*b[stepB-1].lvl;
					}
				}
				else
					printf("\n\n�����R�a");
			}
			//�g�a�ɯ� 
			else if(O[stepB-1]==2&&B_occupied[stepB-1]==1&&b[stepB-1].lvl<3&&B.money>0)
			{
				printf("���a %c �o�O�z�ثe���Ҧb�a(%s,����:%d)\n\n",B.name,b[stepB-1].name,b[stepB-1].lvl);
				printf("�аݭn��O %d ����ɯŶܡH(Y/N)\n\n",b[stepB-1].price);
				scanf("%c",&select);
				getchar();
				while(select!='Y'&&select!='y'&&select!='N'&&select!='n')
				{
					printf("��J���~�I �Э��s��J(Y/N):");
					fflush(stdin);
					scanf("%c",&select);
					getchar();
				}
				if(select=='Y'||select=='y')
				{
					if(B.money-b[stepB-1].price<0)
					{
						printf("\n\n���a %c �z�S�����������I",B.name);
					}
					else
					{
						b[stepB-1].lvl++;
						printf("\n\n���a %c �z�w�ɯ� %s �ثe�g�a����:%d�I",B.name,b[stepB-1].name,b[stepB-1].lvl);
						B.money=B.money-b[stepB-1].price;
						printf("  �Ѿl���B�� %d �I\n\n",B.money);
						b[stepB-1].price=b[stepB-1].price*b[stepB-1].lvl;
					}
				}
				else
					printf("�����ɯ�");
			}
			//���O�H���a
			else if(O[stepB-1]!=2&&O[stepB-1]!=0&&O[stepB-1]!=5&&B.money>0)
			{
				printf("���a %c �z�ثe�Ҧb %s ���w�Q�ʶR�C�a���� %d ���� �w�۰ʦ��ڵ��a�D\n\n",B.name,b[stepB-1].name,b[stepB-1].price);
				if(A_occupied[stepB-1]==1)
					A.money=A.money+b[stepB-1].price;
				else if(C_occupied[stepB-1]==1)
					C.money=C.money+b[stepB-1].price;
				else if(D_occupied[stepB-1]==1)
					D.money=D.money+b[stepB-1].price;
				B.money=B.money-b[stepB-1].price;
			}
			//�鱼 
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
				printf("\n�Ы����N���~��......\n");
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
	    	//�ӧQ
			if(win_judge(winning,&round)==1)
			{
				system("cls");
				if(A.win==1)
					printf("\n���ߪ��a A �ӧQ�I�Y�N��^���D����...");
				if(B.win==1)
					printf("\n���ߪ��a B �ӧQ�I�Y�N��^���D����...");
				if(C.win==1)
					printf("\n���ߪ��a C �ӧQ�I�Y�N��^���D����...");
				if(D.win==1)
					printf("\n���ߪ��a D �ӧQ�I�Y�N��^���D����...");
				sleep(2);
				system("cls");
				break;
			}
	    	if(A.money>0)
	    		walkA(stepA);
	    	else if(A.money<0)
			{
				printf("\n-----------------------------------------------------------------------------------------\n");
				printf("���a %c �w�}���I�L�k�~��i��C��\n",A.name);
			}
	    	if(B.money>0)
	    		walkB(stepB);
	    	else if(B.money<0)
	    		printf("���a %c �w�}���I�L�k�~��i��C��\n",B.name);
	    	if(C.money>0)
	    		walkC(stepC);
	    	else if(C.money<0)
	    		printf("���a %c �w�}���I�L�k�~��i��C��\n",C.name);
	    	if(round>1&&D.money>0)
	    		walkD(stepD);
	    	else if(D.money<0)
	    		printf("���a %c �w�}���I�L�k�~��i��C��\n",D.name);
	    	if(C.money>0)
				Cs=rotationC(round,jailC,hospitalC,stepC);
			if(stepC<=24)
			{
				//�ʺ� 
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
				//��| 
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
				//�R�B
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
				//���|
				if(stepC==11||stepC==18)
					oppo_C(&stepC);
			}
			if(stepC>24)
			{
				stepC=stepC-24;
				//�g�L�_�I����
				C.money=C.money+600; 
			}
	    	if(C.money>0)
	    	{
	    		printf("�Ы����N���~��......\n");
		    	c=getch();
		    	system("CLS");
			}
	    	//�����O�_���Ŧa �p�G�O�h�߰ݬO�_�R�a
	    	if(O[stepC-1]==0&&O[stepC-1]!=5&&C.money>0)
			{
				printf("���a %c �z�ثe�Ҧb %s ���Ŧa�C\n\n�a���� %d ����аݭn�ʶR�ܡH(Y/N)�G",C.name,b[stepC-1].name,b[stepC-1].price); 
				scanf("%c",&select);
				getchar();
				while(select!='Y'&&select!='y'&&select!='N'&&select!='n')
				{
					printf("��J���~�I �Э��s��J(Y/N):");
					fflush(stdin);
					scanf("%c",&select);
					getchar();
				}
				if(select=='Y'||select=='y')
				{
					if(C.money-b[stepC-1].price<0)
					{
						printf("\n\n���a %c �z�S�����������I",C.name);
					}
					else
					{
						C.occupied[stepC-1]=3;
						C_occupied[stepC-1]=1;
						//�g�a�аO 
						O[stepC-1]=3;
						b[stepC-1].lvl++;
						printf("\n\n���a %c �z�w�ʶR %s�I",C.name,b[stepC-1].name);
						C.money=C.money-b[stepC-1].price;
						printf("  �Ѿl���B�� %d �I\n\n",C.money);
						b[stepC-1].price=b[stepC-1].price*b[stepC-1].lvl;
					}
				}
				else
					printf("\n\n�����R�a");
			}
			//�g�a�ɯ� 
			else if(O[stepC-1]==3&&C_occupied[stepC-1]==1&&b[stepC-1].lvl<3&&C.money>0)
			{
				printf("���a %c �o�O�z�ثe���Ҧb�a(%s,����:%d)\n\n",C.name,b[stepC-1].name,b[stepC-1].lvl);
				printf("�аݭn��O %d ����ɯŶܡH(Y/N)\n\n",b[stepC-1].price);
				scanf("%c",&select);
				getchar();
				while(select!='Y'&&select!='y'&&select!='N'&&select!='n')
				{
					printf("��J���~�I �Э��s��J(Y/N):");
					fflush(stdin);
					scanf("%c",&select);
					getchar();
				}
				if(select=='Y'||select=='y')
				{
					if(C.money-b[stepC-1].price<0)
					{
						printf("\n\n���a %c �z�S�����������I",C.name);
					}
					else
					{
						b[stepC-1].lvl++;
						printf("\n\n���a %c �z�w�ɯ� %s �ثe�g�a����:%d�I",C.name,b[stepC-1].name,b[stepC-1].lvl);
						C.money=C.money-b[stepC-1].price;
						printf("  �Ѿl���B�� %d �I\n\n",C.money);
						b[stepC-1].price=b[stepC-1].price*b[stepC-1].lvl;
					}
				}
				else
					printf("�����ɯ�");
			}
			//���O�H���a
			else if(O[stepC-1]!=3&&O[stepC-1]!=0&&O[stepC-1]!=5&&C.money>0)
			{
				printf("���a %c �z�ثe�Ҧb %s ���w�Q�ʶR�C�a���� %d ���� �w�۰ʦ��ڵ��a�D\n\n",C.name,b[stepC-1].name,b[stepC-1].price);
				if(B_occupied[stepC-1]==1)
					B.money=B.money+b[stepC-1].price;
				else if(A_occupied[stepC-1]==1)
					A.money=A.money+b[stepC-1].price;
				else if(D_occupied[stepC-1]==1)
					D.money=D.money+b[stepC-1].price;
				C.money=C.money-b[stepC-1].price;
			}
			//�鱼 
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
				printf("\n�Ы����N���~��......\n");
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
	    	//�ӧQ
			if(win_judge(winning,&round)==1)
			{
				system("cls");
				if(A.win==1)
					printf("\n���ߪ��a A �ӧQ�I�Y�N��^���D����...");
				if(B.win==1)
					printf("\n���ߪ��a B �ӧQ�I�Y�N��^���D����...");
				if(C.win==1)
					printf("\n���ߪ��a C �ӧQ�I�Y�N��^���D����...");
				if(D.win==1)
					printf("\n���ߪ��a D �ӧQ�I�Y�N��^���D����...");
				sleep(2);
				system("cls");
				break;
			}
	    	if(A.money>0)
	    		walkA(stepA);
	    	else if(A.money<0)
	    	{
				printf("\n-----------------------------------------------------------------------------------------\n");
				printf("���a %c �w�}���I�L�k�~��i��C��\n",A.name);
			}
	    	if(B.money>0)
	    		walkB(stepB);
	    	else if(B.money<0)
	    		printf("���a %c �w�}���I�L�k�~��i��C��\n",B.name);
	    	if(C.money>0)
	    		walkC(stepC);
	    	else if(C.money<0)
	    		printf("���a %c �w�}���I�L�k�~��i��C��\n",C.name);
	    	if(D.money>0)
	    		walkD(stepD);
	    	else if(D.money<0)
	    		printf("���a %c �w�}���I�L�k�~��i��C��\n",D.name);
	    	if(D.money>0)
	    		Ds=rotationD(round,jailD,hospitalD,stepD);
	    	if(stepD<=24)
			{
				//�ʺ� 
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
				//��| 
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
				//�R�B 
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
				//���|
				if(stepD==11||stepD==18)
					oppo_D(&stepD);
			}
			if(stepD>24)
			{
				stepD=stepD-24;
				//�g�L�_�I����
				D.money=D.money+600; 
			}
	    	if(D.money>0)
	    	{
	    		printf("�Ы����N���~��......\n");
		    	c=getch();
		    	system("CLS");
			}
	    	//�����O�_���Ŧa �p�G�O�h�߰ݬO�_�R�a
	    	if(O[stepD-1]==0&&O[stepD-1]!=5&&D.money>0)
			{
				printf("���a %c �z�ثe�Ҧb %s ���Ŧa�C\n\n�a���� %d ����аݭn�ʶR�ܡH(Y/N)�G",D.name,b[stepD-1].name,b[stepD-1].price); 
				scanf("%c",&select);
				getchar();
				while(select!='Y'&&select!='y'&&select!='N'&&select!='n')
				{
					printf("��J���~�I �Э��s��J(Y/N):");
					fflush(stdin);
					scanf("%c",&select);
					getchar();
				}
				if(select=='Y'||select=='y')
				{
					if(D.money-b[stepD-1].price<0)
					{
						printf("\n\n���a %c �z�S�����������I",D.name);
					}
					else
					{
						D_occupied[stepD-1]=1;
						D.occupied[stepD-1]=4;
						//�g�a�аO 
						O[stepD-1]=4;
						b[stepD-1].lvl++;
						printf("\n\n���a %c �z�w�ʶR %s�I",D.name,b[stepD-1].name);
						D.money=D.money-b[stepD-1].price;
						printf("  �Ѿl���B�� %d �I\n\n",D.money);
						b[stepD-1].price=b[stepD-1].price*b[stepD-1].lvl;
					}
				}
				else
					printf("\n\n�����R�a");
			}
			//�g�a�ɯ� 
			else if(O[stepD-1]==4&&D_occupied[stepD-1]==1&&D.money>0)
			{
				printf("���a %c �o�O�z�ثe���Ҧb�a(%s,����:%d)\n\n",D.name,b[stepD-1].name,b[stepD-1].lvl);
				printf("�аݭn��O %d ����ɯŶܡH(Y/N)\n\n",b[stepD-1].price);
				scanf("%c",&select);
				getchar();
				while(select!='Y'&&select!='y'&&select!='N'&&select!='n')
				{
					printf("��J���~�I �Э��s��J(Y/N):");
					fflush(stdin);
					scanf("%c",&select);
					getchar();
				}
				if(select=='Y'||select=='y')
				{
					if(D.money-b[stepD-1].price<0)
					{
						printf("\n\n���a %c �z�S�����������I",D.name);
					}
					else
					{
						b[stepD-1].lvl++;
						printf("\n\n���a %c �z�w�ɯ� %s �ثe�g�a����:%d�I",D.name,b[stepD-1].name,b[stepD-1].lvl);
						D.money=D.money-b[stepD-1].price;
						printf("  �Ѿl���B�� %d �I\n\n",D.money);
						b[stepD-1].price=b[stepD-1].price*b[stepD-1].lvl;
					}
				}
				else
					printf("�����ɯ�");
			}
			//���O�H���a
			else if(O[stepD-1]!=4&&O[stepD-1]!=0&&O[stepD-1]!=5&&D.money>0)
			{
				printf("���a %c �z�ثe�Ҧb %s ���w�Q�ʶR�C�a���� %d ���� �w�۰ʦ��ڵ��a�D\n\n",D.name,b[stepD-1].name,b[stepD-1].price);
				if(B_occupied[stepD-1]==1)
					B.money=B.money+b[stepD-1].price;
				else if(A_occupied[stepD-1]==1)
					A.money=A.money+b[stepD-1].price;
				else if(C_occupied[stepD-1]==1)
					C.money=C.money+b[stepD-1].price;
				D.money=D.money-b[stepD-1].price;
			} 
			//�鱼 
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
				printf("\n�Ы����N���~��......\n");
	    		c=getch();
			}
			system("CLS");
	    	round++;
		}
	}
	return 0;
}
