#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>
#include<math.h>


main()
{
	/*char name[100];
	printf("Enter your name?\n");
	scanf(" %s",name);//scanf doesn't take spaces, one space should be used before %s
	printf("My name is %s\n",name);*/
	
	char catsName[15];
	char catsFood[20];
	char sentence[100]="";
	
	puts("Enter your cats name:");//it doesn't need \n
	gets(catsName);
	puts("What does he eat?");
	gets(catsFood);
	
	strcat(sentence, catsName);//add two string in first one
	strcat(sentence, " likes to eat ");
	strcat(sentence, catsFood);
	
	puts(sentence);
	
	
	
}
