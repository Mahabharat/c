#include<stdio.h>

main()
{
	int howmany;
	printf("How many times do you want to loop the loop?");
	scanf(" %d",&howmany);
	int a;
	for(a=1;a<=10;a++)
	{
		printf(" %d\n",a);
		if(a==howmany)
			break;
	}
}
