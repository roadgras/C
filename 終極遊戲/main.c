#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) 
{
	int a;
	int d;
	int x,i,h,e,f;
start:
	printf("單人遊戲輸入0\n\n多人遊戲輸入任意數\n\n");
	scanf("%d",&a);
	srand(time(NULL));//隨機亂數 
	for(i=0;i<3;i++)
	{
		x=rand()%10;
		if(i==0)
		h=x;
		if(i==1)
		e=x;
		if(i==2)
		f=x;
	}
	x=h*100+e*10+f ;
	int c;c=999;
	int b;b=1;
	if(a==0)
	{
		a=x;
		goto wut;
	}
	printf("\n出題者出題\n\n");
	printf("請隨機出一個在1~999範圍內的整數\n\n");
	fflush(stdin);//清除輸入緩衝區 
	scanf("%d",&a);
	if(a<1||a>999)
	{
		printf("\n超過範圍\n\n");
		goto start;//不建議使用(但是想不到方法)
		 
	}
wut:
	system("CLS");//畫面清空
	printf("已出題完畢\n\n");
	printf("請開始猜數字(範圍1~999)\n\n");
process:
	fflush(stdin);
	scanf("%d",&d);
	if(d>c||d<b)
	{
		printf("\n已超出範圍\n\n");
		goto process;
	}
	if(d==a)
	{
		printf("答案正確\n\n");
		goto stop;
	}
	if(d<a)
	{
		b=d;
		printf("範圍%d~%d\n\n",b,c);
		printf("請再出一個數字\n\n");
		goto process;
	}
	if(d>a)
	{
		c=d;
		printf("範圍%d~%d\n\n",b,c);
		printf("請再出一個數字\n\n");
		goto process;
	}
stop:
	printf("\n\n如果想繼續玩請輸入0\n\n");
	printf("如果不想繼續玩請輸入任意數字\n\n");
	scanf("%d",&a);
	if(a==0) 
	{
		system("CLS");
		goto start;
	}
	else
	{
		system("CLS");
		printf("遊戲結束\n\n");
		printf("感謝你的遊玩\n\n");
	}	
	return 0;
}
