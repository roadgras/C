#include <stdio.h>
#include <time.h>
#include <stdlib.h> 
#include <string.h>



//���A�o���ɮקڦ���.lose�Ӽg�O�_�뭰

void lottery(int coin){
	srand(time(NULL));
	int r, stake; 
	char option1;
	printf("�u���ڬw�H�~��⤤�j��!\n");
	printf("�O�_�}�l�C��?(Y/N)\n");
	play:
	getchar();
	while(option1!='Y'&&option1!='y'&&option1!='N'&&option1!='n'){
		printf("��J���~�I �Э��s��J(Y/N):");
		scanf("%c",&option1);
		getchar();
	}
	if(option1=='Y'||option1=='y'){ 
		if(coin<300){
			printf("�S���U�A�٬O�O���F\n");
			break;
		}
		else {
			printf("�п�J�z�n�C�������B\n");
			while(scanf("%d",&stake)){
				if(stake>coin){
					printf("���ߧO�Ӥj�A�A��J�@��\n");
				}
				else if(stake<=coin)	break;
			}
			r=rand()%10;
			if(r==9){
				printf("���ߧA�Ȩ�F!!!\n");
				coin+=stake*5;
			}
			else {
				printf("�B��u���n�O...\n");
				coin-=stake;
			}
			printf("�n�~��C����?(Y/N)\n");
			goto play;
		}
	} 
    else if(option=='n'||option=='N'){
		break;       
	}	
}

void randomplaceA(int *stepA){
	int arr[17]={2,3,4,5,7,9,10,12,14,15,16,17,19,20,21,22,24};
	srand(time(NULL));
	int r=rand()%17;
	*stepA=arr[r];
}

void randomplaceB(int *stepB){
	int arr[17]={2,3,4,5,7,9,10,12,14,15,16,17,19,20,21,22,24};
	srand(time(NULL));
	int r=rand()%17;
	*stepB=arr[r];
}

void randomplaceC(int *stepC){
	int arr[17]={2,3,4,5,7,9,10,12,14,15,16,17,19,20,21,22,24};
	srand(time(NULL));
	int r=rand()%17;
	*stepC=arr[r];
}

void randomplaceD(int *stepD){
	int arr[17]={2,3,4,5,7,9,10,12,14,15,16,17,19,20,21,22,24};
	srand(time(NULL));
	int r=rand()%17;
	*stepD=arr[r];
}
//ii���γ~�� [step-1]�O�@�˪� 

void oppo_A(int *stepA){
	srand(time(NULL));
	int card2=rand()%10;
	int choo, walk;
	int ii;
	switch (card2){
		case 0:
			lottery(A.money);
		case 1:
			printf("���ĦM���A�Ҧ����a�l������300����\n");
			if(A.lose!=0)	A.money-=300;
			if(B.lose!=0)	B.money-=300;
			if(C.lose!=0)	C.money-=300;
			if(D.lose!=0)	D.money-=300;
			break;
		case 2:
			printf("�߮b�A��L���a�^�m����200���窺§��\n");
			if(B.lose!=0){
				B.money-=200;
				A.money+=200;
			}	
			if(C.lose!=0){
				C.money-=200;
				A.money+=200;
			}	
			if(D.lose!=0){
				D.money-=200;
				A.money+=200;
			}	
			break;
		case 3:
			printf("�ѿ蠟�H!\n");
			choo=rand()%2+1;
			sleep(1);
			if (choo==1){
				printf("���ߧA��o����1000����!\n");
				A.money+=1000; 
			} 
			else if(choo==2){
				printf("���ߧA���Ҧ��a�����ŦA�W��1��!\n");
				for(ii=0;ii<24;ii++){
					if(A_occupied[ii]=1){
						if(b[ii].lvl!=3){
							b[ii].lvl+=1;
							b[ii].price=b[ii].price*b[ii].lvl;
						}
					}
				}
			}
			break;
		case 4:
			printf("�@���H���ǰe!\n");
			randomplaceA(*stepA);
			break;
		case 5:
			printf("����ұo�|\n");
			A.money-=200;
			break;
		case 6:
			printf("��ꥢ�Q�A�l��500���窺����\n");
			A.money-=500;
			break;
		case 7:
			printf("�����Q�A�W�[600���窺����\n");
			A.money+=600;
			break;
		case 8:
			walk=rand()%3+1;
			printf("�A�e�i%d�B\n",walk);
			*stepA=*stepA+walk;
			break;
		case 9:
			walk=rand()%3+1;
			printf("�A��h%d�B\n",walk);
			*stepA=*stepA-walk;
			break;
	}
}

void oppo_B(int *stepB){
	srand(time(NULL));
	int card2=rand()%10;
	int choo, walk;
	int ii;
	switch (card2){
		case 0:
			lottery(B.money);
		case 1:
			printf("���ĦM���A�Ҧ����a�l������300����\n");
			if(A.lose!=0)	A.money-=300;
			if(B.lose!=0)	B.money-=300;
			if(C.lose!=0)	C.money-=300;
			if(D.lose!=0)	D.money-=300;
			break;
		case 2:
			printf("�߮b�A��L���a�^�m����200���窺§��\n");
			if(A.lose!=0){
				A.money-=200;
				B.money+=200;
			}	
			if(C.lose!=0){
				C.money-=200;
				B.money+=200;
			}	
			if(D.lose!=0){
				D.money-=200;
				B.money+=200;
			}	
			break;
		case 3:
			printf("�ѿ蠟�H!\n");
			choo=rand()%2+1;
			sleep(1);
			if (choo==1){
				printf("���ߧA��o����1000����!\n");
				B.money+=1000; 
			} 
			else if(choo==2){
				printf("���ߧA���Ҧ��a�����ŦA�W��1��!\n");
				for(ii=0;ii<24;ii++){
					if(B_occupied[ii]=1){
						if(b[ii].lvl!=3){
							b[ii].lvl+=1;
							b[ii].price=b[ii].price*b[ii].lvl;
						}
					}
				}
			}
			break;
		case 4:
			printf("�@���H���ǰe!\n");
			randomplaceB(*stepB);
			break;
		case 5:
			printf("����ұo�|\n");
			B.money-=200;
			break;
		case 6:
			printf("��ꥢ�Q�A�l��500���窺����\n");
			B.money-=500;
			break;
		case 7:
			printf("�����Q�A�W�[600���窺����\n");
			B.money+=600;
			break;
		case 8:
			walk=rand()%3+1;
			printf("�A�e�i%d�B\n",walk);
			*stepB=*stepB+walk;
			break;
		case 9:
			walk=rand()%3+1;
			printf("�A��h%d�B\n",walk);
			*stepB=*stepB-walk;
			break;
	}
}

void oppo_C(int *stepC){
	srand(time(NULL));
	int card2=rand()%10;
	int choo, walk;
	int ii;
	switch (card2){
		case 0:
			lottery(C.money);
		case 1:
			printf("���ĦM���A�Ҧ����a�l������300����\n");
			if(A.lose!=0)	A.money-=300;
			if(B.lose!=0)	B.money-=300;
			if(C.lose!=0)	C.money-=300;
			if(D.lose!=0)	D.money-=300;
			break;
		case 2:
			printf("�߮b�A��L���a�^�m����200���窺§��\n");
			if(A.lose!=0){
				A.money-=200;
				C.money+=200;
			}	
			if(B.lose!=0){
				B.money-=200;
				C.money+=200;
			}	
			if(D.lose!=0){
				D.money-=200;
				C.money+=200;
			}	
			break;
		case 3:
			printf("�ѿ蠟�H!\n");
			choo=rand()%2+1;
			sleep(1);
			if (choo==1){
				printf("���ߧA��o����1000����!\n");
				C.money+=1000; 
			} 
			else if(choo==2){
				printf("���ߧA���Ҧ��a�����ŦA�W��1��!\n");
				for(ii=0;ii<24;ii++){
					if(C_occupied[ii]=1){
						if(b[ii].lvl!=3){
							b[ii].lvl+=1;
							b[ii].price=b[ii].price*b[ii].lvl;
						}
					}
				}
			}
			break;
		case 4:
			printf("�@���H���ǰe!\n");
			randomplaceC(*stepC);
			break;
		case 5:
			printf("����ұo�|\n");
			C.money-=200;
			break;
		case 6:
			printf("��ꥢ�Q�A�l��500���窺����\n");
			C.money-=500;
			break;
		case 7:
			printf("�����Q�A�W�[600���窺����\n");
			C.money+=600;
			break;
		case 8:
			walk=rand()%3+1;
			printf("�A�e�i%d�B\n",walk);
			*stepC=*stepC+walk;
			break;
		case 9:
			walk=rand()%3+1;
			printf("�A��h%d�B\n",walk);
			*stepC=*stepC-walk;
			break;
	}
}

void oppo_D(int *stepD){
	srand(time(NULL));
	int card2=rand()%10;
	int choo, walk;
	int ii;
	switch (card2){
		case 0:
			lottery(D.money);
		case 1:
			printf("���ĦM���A�Ҧ����a�l������300����\n");
			if(A.lose!=0)	A.money-=300;
			if(B.lose!=0)	B.money-=300;
			if(C.lose!=0)	C.money-=300;
			if(D.lose!=0)	D.money-=300;
			break;
		case 2:
			printf("�߮b�A��L���a�^�m����200���窺§��\n");
			if(A.lose!=0){
				A.money-=200;
				D.money+=200;
			}	
			if(B.lose!=0){
				B.money-=200;
				D.money+=200;
			}	
			if(C.lose!=0){
				C.money-=200;
				D.money+=200;
			}	
			break;
		case 3:
			printf("�ѿ蠟�H!\n");
			choo=rand()%2+1;
			sleep(1);
			if (choo==1){
				printf("���ߧA��o����1000����!\n");
				D.money+=1000; 
			} 
			else if(choo==2){
				printf("���ߧA���Ҧ��a�����ŦA�W��1��!\n");
				for(ii=0;ii<24;ii++){
					if(D_occupied[ii]=1){
						if(b[ii].lvl!=3){
							b[ii].lvl+=1;
							b[ii].price=b[ii].price*b[ii].lvl;
						}
					}
				}
			}
			break;
		case 4:
			printf("�@���H���ǰe!\n");
			randomplaceD(*stepD);
			break;
		case 5:
			printf("����ұo�|\n");
			D.money-=200;
			break;
		case 6:
			printf("��ꥢ�Q�A�l��500���窺����\n");
			D.money-=500;
			break;
		case 7:
			printf("�����Q�A�W�[600���窺����\n");
			D.money+=600;
			break;
		case 8:
			walk=rand()%3+1;
			printf("�A�e�i%d�B\n",walk);
			*stepD=*stepD+walk;
			break;
		case 9:
			walk=rand()%3+1;
			printf("�A��h%d�B\n",walk);
			*stepD=*stepD-walk;
			break;
	}
}
