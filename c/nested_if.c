#include<stdio.h>
main()
{
	int age;
	char gender;
	printf("Enter your age\n");
	scanf(" %d",&age);//give space before %d
	printf("Enter your gender(m/f)\n");
	scanf(" %c",&gender);//give space before %c to avoid error
	if(age>=18)
	{
		if(gender=='m')//keep m under singlequote
		{
			printf("Welcome dude!\n");
		}
		else
		{
			printf("welcome lady\n");
		}
	}
	else
	{
		printf("nothing to see here\n");
	}
}
