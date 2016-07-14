#include<stdio.h>
#include<math.h>

main()
{
	int roll;
	for(roll=0;roll<10;roll++)
	{
		printf(" %d\n",(rand()%6+1));
	}
}
