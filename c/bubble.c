#include<stdio.h>

main()
{
	int i,temp;
	int goals[10];
	for(i=0;i<10;i++)
	{
		goals[i]=(rand()%25+1);
	}
	
	printf("original list\n");
	for(i=0;i<10;i++)
	{
		printf(" %d ",goals[i]);
	}
	
	while(1)//infinite loop while true
	{
		int sorting=0;
		for(i=0;i<10-1;i++)//it should be i<n-1
		{
			if(goals[i]>goals[i+1])
			{
				temp=goals[i];
				goals[i]=goals[i+1];
				goals[i+1]=temp;
				sorting=1;
			}
		}
		
		if(sorting==0)
			break;
	}
	
	printf("\nsorted list\n");
	for(i=0;i<10;i++)
	{
		printf(" %d ",goals[i]);
	}
	printf("\n");
	
}			
