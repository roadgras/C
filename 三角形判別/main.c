#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]){
	int a;
	int b;
	int c;
	int t;
	int max;
	printf("請出入三角形的三邊(數字 數字 數字)\n");
	scanf("%d%d%d",&a,&b,&c);
	if(a>b){
		t=b;b=a;a=t;//小到大排列 
	}
	if(a>c){
		t=c;c=a;a=t;
	}
	if(b>c){
		t=c;c=b;b=t;
	}
	if(c*c>a*a+b*b){
		printf("不是三角形");
	}
   	else {
   		printf("三角形的三邊為");
   		printf("%d %d %d\n",a,b,c);
	   }
	if(a==b&&b==c){
		printf("%d %d %d是正三角形",a,b,c);
	}
	if(a==b||b==c){
		printf("%d %d %d是等腰三角形",a,b,c);
	}
	if(c*c==a*a+b*b){
		printf("%d %d %d是直角三角形",a,b,c);
	}		
	return 0;
}
