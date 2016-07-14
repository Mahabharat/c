#include<stdio.h>
#include<ctype.h>
#include<string.h>
main()
{
	char tuna='a';
	char bucky='A';
	char ppp='7';
	char paul='A';
	
	printf("uppercase of 'a'=%c\n",toupper('a'));
	printf("lowercase of 'A'=%c\n",tolower(bucky));
	printf("uppercase of '7'=%c\n",toupper(ppp));
	printf("uppercase of 'A'=%c\n",toupper(paul));
	
	char name[100]="Partha ";
	strcat(name, "Pritam");//add two string
	printf("%s\n",name);
	
	strcpy(name, "Partha Pritam Paul");//paste second string on first
	printf("%s \n",name);
}
