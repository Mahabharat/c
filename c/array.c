#include<stdio.h>
main()
{
	int banana[5];
	int total=0;
	int i;
	for(i=0;i<5;i++)
	{
		printf("How many bananas you eat on day %d\n",i+1);
		scanf(" %d",&banana[i]);
	}
	for(i=0;i<5;i++)
	{
		total+=banana[i];
	}
	int avg=total/5;
	printf("you ate total %d bananas and an average of %d per day\n",total, avg);
}
