int Length,width;
int position_x[] = {0};
int position_y[] = {0};
int i,j,k,a,b;
int fruit;
char input_move;

void init()
{
	a = 0;
	Length = 50;
	width = 24;
	position_x[a] = Length/2;
	position_y[a] = width/2;
}

void map_print()
{
	printf("  ");
	for(i=0; i<=Length; i++)
	{
		printf("¢b");
	}
	printf("\n");
	for(i=0; i<=width; i++)
	{
		printf("¢y");
		for(j=0; j<=Length; j++)
		{
			if(i==position_y[a]&&j==position_x[a]-1)
			{
				printf("³D");
			}
			else
			{
				printf("  ");
			}
		}
		printf("¢j\n");
	}
	printf("  ");
	for(i=0; i<=Length; i++)
	{
		printf("¢v");
	}
}

void move_pocess()
{
	do
	{
		input_move = getch();
		switch(input_move)
		{
			case 'w':
				position_y[0]--;
				input_move = 'p';
		 		break;
			case 'a':
				position_x[0]--;
				input_move = 'p';
		 		break;
			case 's':
				position_y[0]++;
				input_move = 'p';
		 		break;
			case 'd':
				position_x[0]++;
				input_move = 'p';
		 		break;
		 	default:
		 		break;
		}
	}while(input_move != 'p');
}

void follow_pwocess()
{
	
}

void rule_pocess()
{

}

void dobug_pocess()
{
	
}




