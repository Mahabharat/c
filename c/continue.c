#include<stdio.h>
main()
{
	int num=1;
	do
	{
		if(num==4||num==8)
		{
			num++;
			continue;
		}
		printf("%d\n",num);
		num++;
	}while(num<10);
}
		
