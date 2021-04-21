//file name: scoretable.c

/*
https://hackmd.io/@E5bHXDIXQg-H5nuppEj5Jg/B2Gan
�P�µ��ߤH�h���ƧǱо� 
*/
void sortBySID(char SID[][1000],int save_persons[],int persons)
{
    int temp=0,i;
    save_persons[persons]=persons;
    for(i=persons;i>0;i--)
    {
        if(strcmp(SID[save_persons[i]],SID[save_persons[i-1]])<0)//�p�G�e��>�ᶵ �h�i�J�Ƨ� 
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
        if(Score[save_persons2[i]]<Score[save_persons2[i-1]])//�p�G�e��>�ᶵ �h�i�J�Ƨ� 
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

double getSum(int Score[],int persons)//�p���`�M 
{
	double sum=0;
	sum=sum+Score[persons];
	return sum;//�^�ǭp�⵲�G 
}

double getAverage(double sum,int persons)//�p�⥭�� 
{
	return sum/(persons);//�^�ǭp�⵲�G 
}

double getQuartile(int Score[],int save_persons2[],int persons,int Q)//�p��|����� 
{
	int Q1=0;
	int S=0;//��m�p�� 
	double Q2=0;
	if((persons+2)%4==0)//�����ƥu���@�Ӯ� 
		Q1=(persons+2)/4;
	if((persons+2)%4!=0)//�����Ʀ���Ӯ� 
		Q1=(persons+3)/4;
	if(Q==1)
		return Score[save_persons2[Q1-1]];//�^�ǭp�⵲�G  
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
		return Q2;//�^�ǭp�⵲�G 
	}
	if(Q==3)
		return Score[save_persons2[persons-Q1]];//�^�ǭp�⵲�G 
}
