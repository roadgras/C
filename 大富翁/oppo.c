#include <stdio.h>
#include <time.h>
#include <stdlib.h> 
#include <string.h>



//註，這個檔案我有用.lose來寫是否投降

void lottery(int coin){
	srand(time(NULL));
	int r, stake; 
	char option1;
	printf("只有歐洲人才能抽中大獎!\n");
	printf("是否開始遊戲?(Y/N)\n");
	play:
	getchar();
	while(option1!='Y'&&option1!='y'&&option1!='N'&&option1!='n'){
		printf("輸入錯誤！ 請重新輸入(Y/N):");
		scanf("%c",&option1);
		getchar();
	}
	if(option1=='Y'||option1=='y'){ 
		if(coin<300){
			printf("沒錢勸你還是別玩了\n");
			break;
		}
		else {
			printf("請輸入您要遊玩的金額\n");
			while(scanf("%d",&stake)){
				if(stake>coin){
					printf("野心別太大，再輸入一次\n");
				}
				else if(stake<=coin)	break;
			}
			r=rand()%10;
			if(r==9){
				printf("恭喜你賺到了!!!\n");
				coin+=stake*5;
			}
			else {
				printf("運氣真不好呢...\n");
				coin-=stake;
			}
			printf("要繼續遊玩嗎?(Y/N)\n");
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
//ii的用途跟 [step-1]是一樣的 

void oppo_A(int *stepA){
	srand(time(NULL));
	int card2=rand()%10;
	int choo, walk;
	int ii;
	switch (card2){
		case 0:
			lottery(A.money);
		case 1:
			printf("金融危機，所有玩家損失黃金300公斤\n");
			if(A.lose!=0)	A.money-=300;
			if(B.lose!=0)	B.money-=300;
			if(C.lose!=0)	C.money-=300;
			if(D.lose!=0)	D.money-=300;
			break;
		case 2:
			printf("喜宴，其他玩家貢獻黃金200公斤的禮金\n");
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
			printf("天選之人!\n");
			choo=rand()%2+1;
			sleep(1);
			if (choo==1){
				printf("恭喜你獲得黃金1000公斤!\n");
				A.money+=1000; 
			} 
			else if(choo==2){
				printf("恭喜你的所有地產等級再上升1等!\n");
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
			printf("一般隨機傳送!\n");
			randomplaceA(*stepA);
			break;
		case 5:
			printf("抽取所得稅\n");
			A.money-=200;
			break;
		case 6:
			printf("投資失利，損失500公斤的黃金\n");
			A.money-=500;
			break;
		case 7:
			printf("投資獲利，增加600公斤的黃金\n");
			A.money+=600;
			break;
		case 8:
			walk=rand()%3+1;
			printf("再前進%d步\n",walk);
			*stepA=*stepA+walk;
			break;
		case 9:
			walk=rand()%3+1;
			printf("再後退%d步\n",walk);
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
			printf("金融危機，所有玩家損失黃金300公斤\n");
			if(A.lose!=0)	A.money-=300;
			if(B.lose!=0)	B.money-=300;
			if(C.lose!=0)	C.money-=300;
			if(D.lose!=0)	D.money-=300;
			break;
		case 2:
			printf("喜宴，其他玩家貢獻黃金200公斤的禮金\n");
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
			printf("天選之人!\n");
			choo=rand()%2+1;
			sleep(1);
			if (choo==1){
				printf("恭喜你獲得黃金1000公斤!\n");
				B.money+=1000; 
			} 
			else if(choo==2){
				printf("恭喜你的所有地產等級再上升1等!\n");
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
			printf("一般隨機傳送!\n");
			randomplaceB(*stepB);
			break;
		case 5:
			printf("抽取所得稅\n");
			B.money-=200;
			break;
		case 6:
			printf("投資失利，損失500公斤的黃金\n");
			B.money-=500;
			break;
		case 7:
			printf("投資獲利，增加600公斤的黃金\n");
			B.money+=600;
			break;
		case 8:
			walk=rand()%3+1;
			printf("再前進%d步\n",walk);
			*stepB=*stepB+walk;
			break;
		case 9:
			walk=rand()%3+1;
			printf("再後退%d步\n",walk);
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
			printf("金融危機，所有玩家損失黃金300公斤\n");
			if(A.lose!=0)	A.money-=300;
			if(B.lose!=0)	B.money-=300;
			if(C.lose!=0)	C.money-=300;
			if(D.lose!=0)	D.money-=300;
			break;
		case 2:
			printf("喜宴，其他玩家貢獻黃金200公斤的禮金\n");
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
			printf("天選之人!\n");
			choo=rand()%2+1;
			sleep(1);
			if (choo==1){
				printf("恭喜你獲得黃金1000公斤!\n");
				C.money+=1000; 
			} 
			else if(choo==2){
				printf("恭喜你的所有地產等級再上升1等!\n");
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
			printf("一般隨機傳送!\n");
			randomplaceC(*stepC);
			break;
		case 5:
			printf("抽取所得稅\n");
			C.money-=200;
			break;
		case 6:
			printf("投資失利，損失500公斤的黃金\n");
			C.money-=500;
			break;
		case 7:
			printf("投資獲利，增加600公斤的黃金\n");
			C.money+=600;
			break;
		case 8:
			walk=rand()%3+1;
			printf("再前進%d步\n",walk);
			*stepC=*stepC+walk;
			break;
		case 9:
			walk=rand()%3+1;
			printf("再後退%d步\n",walk);
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
			printf("金融危機，所有玩家損失黃金300公斤\n");
			if(A.lose!=0)	A.money-=300;
			if(B.lose!=0)	B.money-=300;
			if(C.lose!=0)	C.money-=300;
			if(D.lose!=0)	D.money-=300;
			break;
		case 2:
			printf("喜宴，其他玩家貢獻黃金200公斤的禮金\n");
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
			printf("天選之人!\n");
			choo=rand()%2+1;
			sleep(1);
			if (choo==1){
				printf("恭喜你獲得黃金1000公斤!\n");
				D.money+=1000; 
			} 
			else if(choo==2){
				printf("恭喜你的所有地產等級再上升1等!\n");
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
			printf("一般隨機傳送!\n");
			randomplaceD(*stepD);
			break;
		case 5:
			printf("抽取所得稅\n");
			D.money-=200;
			break;
		case 6:
			printf("投資失利，損失500公斤的黃金\n");
			D.money-=500;
			break;
		case 7:
			printf("投資獲利，增加600公斤的黃金\n");
			D.money+=600;
			break;
		case 8:
			walk=rand()%3+1;
			printf("再前進%d步\n",walk);
			*stepD=*stepD+walk;
			break;
		case 9:
			walk=rand()%3+1;
			printf("再後退%d步\n",walk);
			*stepD=*stepD-walk;
			break;
	}
}
