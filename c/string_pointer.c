#include<stdio.h>
#include<ctype.h>
#include<string.h>
main()
{
	//difference between twe part is first one is constant(assign one string),Second one assign many string, all rules are same	
	
	printf("FIRST PART");
	
	char name[]="Partha";
	printf("\nname[]=%s\n",name);
	puts(name);
	printf("\n");
	
	//name="Pritam";/*we can't assign constant pointer like these
	//name[]="Paul";
	
	printf("name[0]=%c\n",name[0]);
	printf("name=%p\n",name);//string name is the pointer to the first element, 
	printf("*name=%c\n",*name); //name is the pointer constant, we can't write it in LHS and assigning another address 
	printf("name+1=%p\n",name+1);
	printf("*(name+1)=%c\n",*(name+1));
	
	
	printf("\n\nSECOND PART\n");
	
	char *p="Paul ";//variable pointer, it can stores address of anything, 
	puts(p);
	printf("\np=%s\n",p);
	printf("p=%p\n",p);//here it stores address of the first element string
	printf("*p=%c\n",*p);
	
	printf("\n");
	p="Pritam";
	puts(p);
	printf("\n");
	printf("p=%p\n",p);//here it stores address of the first element string
	printf("*p=%c\n",*p);
	printf("p+1=%p\n",p+1);
	printf("*(p+1)=%c\n",*(p+1));
	
	
	printf("\n\nTHIRD PART\n");
	
	char name[10]="Partha";
	char *p=name;             //no need &, becoz it already address of the first element=&name[0]
	
	printf("name=%p\n",name);
	printf("p=%p\n",p);
	
	printf("*name=%c\n",*name);
	printf("*p=%c\n",*p);
	
}
