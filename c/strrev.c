#include<stdio.h>
#include<string.h>
main()
{
	char name[10];
	char a[10];
	printf("Enter string");
	scanf("%s",name);
	a=strrev(name);
	printf("%s",a);
}
