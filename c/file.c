#include<stdio.h>

main()
{
	FILE *fp;
	fp=fopen("Parth.txt","w");//w=write, r=read, a=add.....w is used to create the file
	fprintf(fp,"I love India\n");
	fclose(fp);
	
	fp=fopen("Parth.txt","w");//replace all texts
	fprintf(fp,"I love my country");
	fclose(fp);
}
