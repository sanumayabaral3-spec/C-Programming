#include<stdio.h>
int main()
{
	int a;
	printf("Enter Your Number:");
	scanf("%d",&a);
	(a==0)?printf("It is Zero",a):(a>0)?printf("It is Positive",a):printf("It is Negative",a);
	return 0;
}