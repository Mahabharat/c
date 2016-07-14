#include<stdio.h>

main()
{
	FILE *fp;
	fp=fopen("ppp.txt","w");
	fprintf(fp,"Bharatiya Janata Party");
	fclose(fp);
	
	fp=fopen("ppp.txt","r+");
	char string[30];
	fgets(string,30,fp);
	puts(string);
	
	int n;
	n=ftell(fp);
	printf("position is=%d\n",n);
	
	rewind(fp);
	n=ftell(fp);
	printf("position is=%d\n",n);
	
	fseek(fp,17,SEEK_SET);
	fputs("Dal  ",fp);
	n=ftell(fp);
	printf("position is=%d\n",n);
	rewind(fp);
	char str[25];
	fgets(str,30,fp);
	puts(str);
	
	fseek(fp,1,SEEK_END);
	n=ftell(fp);
	printf("position is=%d\n",n);
}
