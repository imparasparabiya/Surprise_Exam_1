#include<stdio.h>

main()

{
	int a, firt,last,sum;
	printf("Enter a Numer = ");
	scanf("%d",&a);
	last=a%10;
	while(a>=10)
	{
		a=a/10;
	}
	firt=a;
	sum=firt+last;
	printf("Sum of Fist && last Digit number = %d",sum);
}
