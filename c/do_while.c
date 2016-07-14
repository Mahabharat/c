#include<stdio.h>
main()
{
	float average=0;
	float no_of_tests=0;
	float grade=0;
	float marks;
	printf("Enter non-zero marks\n");
	do
	{
		printf("tests:%d  average:%.2f ", (int)no_of_tests, average);
		printf("\nEnter scoremarks");
		scanf(" %f",&marks);
		grade+=marks;
		no_of_tests++;
		average=grade/no_of_tests;
	}
	while(marks!=0);
}
		
