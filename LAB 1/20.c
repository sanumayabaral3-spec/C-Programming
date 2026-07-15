#include<stdio.h>
int main()
{
	int a,b,c,d,x,num;
	printf("Enter 4 digits Number:");
	scanf("%d",&num);
	d=num%10;
	num=num/10;
	c=num%10;
	num=num/10;
	b=num%10;
	num=num/10;
	a=num%10;
	x=a+b+c+d;
	printf("Sum of Individual digits is %d",x);
	return 0;
}