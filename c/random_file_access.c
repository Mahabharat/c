#include<stdio.h>

main()
{
	FILE *fp;
	fp=fopen("Parth.txt","w+");
	fputs("Mera Bharat Mahan",fp);
	
	fseek(fp,-12,SEEK_END);
	fprintf(fp,"Hindusthan");
	fclose(fp);
}
