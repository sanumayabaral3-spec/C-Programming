#include<stdio.h>
int main()
{
	int a,b,c;
	printf("Enter value of a:");
	scanf("%d",&a);
	printf("Enter value of b:");
	scanf("%d",&b);
	printf("Enter value of c:");
	scanf("%d",&c);
	if(a<b && b<c)
	printf("a is smaller.");
	else
	if(b<c && b<a)
	printf("b is smaller.");
	else
	printf("c is smaller.");
	return 0;
}

