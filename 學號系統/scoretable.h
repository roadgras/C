//file name: scoretable.h

void sortByScore(int Score[],int save_persons[],int persons);//以分數排序 

void sortBySID(char SID[][1000],int save_persons[],int persons);//以學號排序 

double getSum(int Score[],int persons);//計算總和 

double getAverage(double sum,int persons);//計算平均 

double getQuartile(int Score[],int save_persons2[],int persons,int Q);//計算四分位數 
