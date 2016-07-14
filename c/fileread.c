#include<stdio.h>

main()
{
	FILE *fp;
	fp=fopen("Parth.txt","r");
	char string[20];//to store the lines from the txt file
	
	while(!feof(fp))
	{
		fgets(string, 20, fp); //fgets is used to store line by line from the txt file in a string to read
		puts(string);          //print line by line//(puts give \n automatically)
	}
	
	fclose(fp);
}
