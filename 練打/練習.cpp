#include<stdlib.h> 
#include<stdio.h>

void save_output();
void save_input();

int humanLv,humanHp;


int main()
{
	save_output();
	save_input();
	printf("%d %d", humanLv, humanHp);
    return 0;
}



void save_output()
{
    FILE *fp;
    fp=fopen("save.txt","a");
    fprintf(fp,"%d %d", humanLv, humanHp);
    fclose(fp);
}

void save_input()
{
	FILE *fP;
	fP=fopen("save.txt","a");
	fscanf(fp, "%d %d %d %d", &human.Lv, &human.Hp, &human.Profession, &human.exp);
	fclose(fP);
}
