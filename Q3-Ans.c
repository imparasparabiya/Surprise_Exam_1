#include<stdio.h>

main()
{
	int a,b,c,d;
	printf("Enter a Value A = ");
	scanf("%d",&a);
	printf("Enter a Value B = ");
	scanf("%d",&b);
	printf("Enter a Value C = ");
	scanf("%d",&c);
	printf("Enter a Value D = ");
	scanf("%d",&d);
	if(a>b)
	{
		if(a>c)
		{
			if(a>d)
			{
				printf("A is max");
			}
			else
			{
				printf("D is max");
			}
		}
		else
		{
			if(c>d)
			{
				printf("C is max");
			}
			else
			{
				printf("D is max");
			}
		}
	}
	else
	{
		if(b>c)
		{
			if(b>d)
			{
				printf("B is max");
			}
			else
			{
				printf("D is max");
			}
		}
		else
		{
			if(c>d)
			{
				printf("C is max");
			}
			else
			{
				printf("D is max");
			}
		}
	}
}
