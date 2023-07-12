#include<stdio.h>

main()

{
	int a,t,p,r=0;
	printf("Enter a Numer = ");
	scanf("%d",&a);
    t=a;
	while(a>0)	
	{
		p=a%10;
		r=r*10+p;
		a/=10;
	}
	printf("Reverse = %d\n",r);
	
	if(t==r)
	{
		printf("Palindrome");
	}
	else
	{
		printf("Not Palindrome");
	}
	
}
