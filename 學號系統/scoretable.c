//file name: scoretable.c

/*
https://hackmd.io/@E5bHXDIXQg-H5nuppEj5Jg/B2Gan
感謝善心人士的排序教學 
*/
void sortBySID(char SID[][1000],int save_persons[],int persons)
{
    int temp=0,i;
    save_persons[persons]=persons;
    for(i=persons;i>0;i--)
    {
        if(strcmp(SID[save_persons[i]],SID[save_persons[i-1]])<0)//如果前項>後項 則進入排序 
        {
            temp=save_persons[i-1];
            save_persons[i-1]=save_persons[i];
            save_persons[i]=temp;
        }
        else
			return;
    }
    return;
}

void sortByScore(int Score[],int save_persons2[],int persons)
{ 
    int temp=0,i;
    save_persons2[persons]=persons;
    for(i=persons;i>0;i--)
    {
        if(Score[save_persons2[i]]<Score[save_persons2[i-1]])//如果前項>後項 則進入排序 
        {
            temp=save_persons2[i-1];
            save_persons2[i-1]=save_persons2[i];
            save_persons2[i]=temp;
        }
        else
			return;
    }
    return;
}

double getSum(int Score[],int persons)//計算總和 
{
	double sum=0;
	sum=sum+Score[persons];
	return sum;//回傳計算結果 
}

double getAverage(double sum,int persons)//計算平均 
{
	return sum/(persons);//回傳計算結果 
}

double getQuartile(int Score[],int save_persons2[],int persons,int Q)//計算四分位數 
{
	int Q1=0;
	int S=0;//位置計算 
	double Q2=0;
	if((persons+2)%4==0)//當中間數只有一個時 
		Q1=(persons+2)/4;
	if((persons+2)%4!=0)//當中間數有兩個時 
		Q1=(persons+3)/4;
	if(Q==1)
		return Score[save_persons2[Q1-1]];//回傳計算結果  
	if(Q==2)
	{
		if((persons+2)%2!=0)
		{
			S=(persons+1)/2;
			Q2=Score[save_persons2[S-1]];
		}
		else if(persons%2==0)
		{
			S=(persons+1)/2;
			Q2=(Score[save_persons2[S-1]]+Score[save_persons2[S]])/2;
		}
		return Q2;//回傳計算結果 
	}
	if(Q==3)
		return Score[save_persons2[persons-Q1]];//回傳計算結果 
}
