#include<stdio.h>
int main()
{
	int a;
	printf("Enter Your Number:");
	scanf("%d",&a);
	if(a%5==0)
	printf("%d is Divisible by 5",a);
	else
	printf("%d is Not Divisible by 5",a);
	return 0;
}


