#include<stdio.h>
#include<ctype.h>

main()
{
	int tuna='a';
	if(isalpha(tuna))
	{
		if(isupper(tuna))
			printf("%c is a uppercase\n",tuna);
		else                                        //islower(tuna)
			printf("%c is a lowercase\n",tuna);
	}
	else
	{
		if(isdigit(tuna))
		{
			printf("%c is a digit\n",tuna);
		}
		else
		{
			printf("OMG\n");
		}
	}
}
