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
	printf("��H�C����J0\n\n�h�H�C����J���N��\n\n");
	scanf("%d",&a);
	srand(time(NULL));//�H���ü� 
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
	printf("\n�X�D�̥X�D\n\n");
	printf("���H���X�@�Ӧb1~999�d�򤺪����\n\n");
	fflush(stdin);//�M����J�w�İ� 
	scanf("%d",&a);
	if(a<1||a>999)
	{
		printf("\n�W�L�d��\n\n");
		goto start;//����ĳ�ϥ�(���O�Q�����k)
		 
	}
wut:
	system("CLS");//�e���M��
	printf("�w�X�D����\n\n");
	printf("�ж}�l�q�Ʀr(�d��1~999)\n\n");
process:
	fflush(stdin);
	scanf("%d",&d);
	if(d>c||d<b)
	{
		printf("\n�w�W�X�d��\n\n");
		goto process;
	}
	if(d==a)
	{
		printf("���ץ��T\n\n");
		goto stop;
	}
	if(d<a)
	{
		b=d;
		printf("�d��%d~%d\n\n",b,c);
		printf("�ЦA�X�@�ӼƦr\n\n");
		goto process;
	}
	if(d>a)
	{
		c=d;
		printf("�d��%d~%d\n\n",b,c);
		printf("�ЦA�X�@�ӼƦr\n\n");
		goto process;
	}
stop:
	printf("\n\n�p�G�Q�~�򪱽п�J0\n\n");
	printf("�p�G���Q�~�򪱽п�J���N�Ʀr\n\n");
	scanf("%d",&a);
	if(a==0) 
	{
		system("CLS");
		goto start;
	}
	else
	{
		system("CLS");
		printf("�C������\n\n");
		printf("�P�§A���C��\n\n");
	}	
	return 0;
}
