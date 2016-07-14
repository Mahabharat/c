#include<stdio.h>
/*
main()
{
	char name[15];
	printf("Enter team name");
	scanf(" %s",name);
	(name[0]>'M')?printf("Red team\n"):printf("Blue team\n");
}*/
main()
{
	int freinds;
	scanf(" %d",&freinds);
	printf("I have %d freind%s\n",freinds,((freinds!=1)?"s":""));
}
