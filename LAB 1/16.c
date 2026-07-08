#include<stdio.h>
int main()
{
	float x, y, d;
	char ch;
	printf("Enter the value of a and b:\n");
	scanf("%f%f",&x,&y);
	printf("\nEnter your operator:");
	scanf(" %c",&ch);
	switch (ch)
	{
	case '+':
		d=x+y;
		printf("%.2f is sum.",d);
		break;
	case '-':
		d=x-y;
		printf("%.2f is difference.",d);
		break;
	case '*':
		d=x*y;
		printf("%.2f is product.",d);
		break;
	case '/':
		d=x/y;
		printf("%.2f is divide.",d);
		break;
	default:
		printf("Input error!");
		break;
	}
	return 0;
}