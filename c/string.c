#include<stdio.h>
#include<string.h>
main()
{
	//1.
	char s1[12];
	strcpy(s1,"Raman");		//string copy
	printf("The string is %s\n",s1);
	
	//2.
	char s2[12];
	strncpy(s2, "Ramayana", 2);
	s2[2]='\0';
	printf("The string is %s\n",s2);
	
	//3.
	int a;
	a=strlen("Partha");
	printf("length is=%d\n",a);
	
	//4.
	int b;
	char s3[12]="Aman";
	char s4[13]="Baman";
	b=strcmp(s3,s4);		//comparison by ascii value
	if(b>0)
	{
		printf("s3 is greater than s4");
	}
	else if(b<0)
	{
		printf("s4 is greater than s3\n");
	}
	else
	{
		printf("s3=s4");
	}
	
	//5.
	char s5[]="Pritam";
	//strrev(s5);			//reverse
	printf("reversed is =%s",s5);
	
	//6.
	char s6[10]="Partha ";
	char s7[11]="Paul";
	strcat(s6,s7);			//concattenation
	printf("name is %s\n",s6);
	
	//7.
	char s8[]="Partha ";
	char s9[]="Paul";
	strncat(s8,s9,2);			//concattenation
	printf("name is %s\n",s8);
	
}
