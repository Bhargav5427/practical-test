#include<stdio.h>

main()

{
	int j,i;
	
	for(i=45;i<=50;i++)
	{
		for(j=45;j<=i;j++)
		{
			printf("%d",j);
		}
		printf("\n");
	}
}