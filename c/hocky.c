#include<stdio.h>


main()
{
	int players[5]={22, 33, 44, 55, 66};
	int goals[5]={23, 40, 29, 38, 35};
	int games[5]={21, 20, 30, 29, 29};
	
	float ppg[5];
	float bestppg=0.00;
	float bestplayers;
	
	int i;
	printf("players\tgames\tgoals\tppg\n");
	for(i=0;i<5;i++)
	{
		ppg[i]=(float)goals[i]/(float)games[i];
		
		if(ppg[i]>bestppg)
		{
			bestppg=ppg[i];
			bestplayers=players[i];
		}
		printf("%d\t%d\t%d\t%.2f\n",players[i],games[i],goals[i],ppg[i]);
	}
	
		
	printf("%.2f is the bestppg of bestplayer %.2f\n",bestppg,bestplayers);
}
