#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]){
	int a;
	int b;
	int c;
	int t;
	int max;
	printf("�ХX�J�T���Ϊ��T��(�Ʀr �Ʀr �Ʀr)\n");
	scanf("%d%d%d",&a,&b,&c);
	if(a>b){
		t=b;b=a;a=t;//�p��j�ƦC 
	}
	if(a>c){
		t=c;c=a;a=t;
	}
	if(b>c){
		t=c;c=b;b=t;
	}
	if(c*c>a*a+b*b){
		printf("���O�T����");
	}
   	else {
   		printf("�T���Ϊ��T�䬰");
   		printf("%d %d %d\n",a,b,c);
	   }
	if(a==b&&b==c){
		printf("%d %d %d�O���T����",a,b,c);
	}
	if(a==b||b==c){
		printf("%d %d %d�O���y�T����",a,b,c);
	}
	if(c*c==a*a+b*b){
		printf("%d %d %d�O�����T����",a,b,c);
	}		
	return 0;
}
