#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int i,j,index=0;
    char str[1000][1000],temp[1000];

    while(scanf("%s",str[index])!=EOF){
        index=index+1;
    }

    for(i=0;i<index-1;i++) {
        for(j=i+1;j<index;j++)
        {
            if(strcmp(str[i],str[j])>0)
            {
                strcpy(temp,str[i]);
                strcpy(str[i],str[j]);
                strcpy(str[j],temp);
            }
        }
    }
    for(i=0;i<index;i++)
    {
        puts(str[i]);
    }
    return 0;
}
