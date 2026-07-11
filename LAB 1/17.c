#include<stdio.h>
int main()
{
	char a;
	printf("Enter value:");
	scanf("%d",a);
	a=sizeof(a);
	printf("Size of the Value is %d",a);
}