#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]){
	int a;
	int b;
	int c;
	int t;
	int max;
	printf("叫à娩(计 计 计)\n");
	scanf("%d%d%d",&a,&b,&c);
	if(a>b){
		t=b;b=a;a=t;//逼 
	}
	if(a>c){
		t=c;c=a;a=t;
	}
	if(b>c){
		t=c;c=b;b=t;
	}
	if(c*c>a*a+b*b){
		printf("ぃ琌à");
	}
   	else {
   		printf("à娩");
   		printf("%d %d %d\n",a,b,c);
	   }
	if(a==b&&b==c){
		printf("%d %d %d琌タà",a,b,c);
	}
	if(a==b||b==c){
		printf("%d %d %d琌单竬à",a,b,c);
	}
	if(c*c==a*a+b*b){
		printf("%d %d %d琌àà",a,b,c);
	}		
	return 0;
}
