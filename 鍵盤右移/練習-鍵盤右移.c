#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(){
	char wrongStr[1000][1000]={{' '}};
	char key[]="`1234567890-=qwertyuiop[]\\asdfghjkl;'zxcvbnm,./";
	int index=0;
	int i,j,k;
	while(gets(wrongStr[index])!=NULL){
		index=index+1;
	}
	for(i=0;i<index;i++){
		for(j=0;j<strlen(wrongStr[i]);j++){
			for(k=0;k<=strlen(key);k++){
				if(wrongStr[i][j]==key[k]){
					printf("%c",key[k-2]);
					break;
				}
				else if(wrongStr[i][j]==' '){
					printf(" ");
					break;
				}
			}
		}
		if(i==index-1)
        {

		}
		else
		{
			printf("\n");
		}
	}
	return 0;
}
