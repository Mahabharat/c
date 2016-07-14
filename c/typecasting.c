#include<stdio.h>
main()
{
	float avgprofit;
	int profitperpumpkin=10;
	int sales=59;
	int workingday=7;
	avgprofit=((float)profitperpumpkin*(float)sales)/(float)workingday;
	printf("avg profit per day:%.2f\n",avgprofit);
}
