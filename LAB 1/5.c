#include<stdio.h>
int main()
{
	float a, b=3.14159,c;
	printf("Enter Radius of Circle:");
	scanf("%f",&a);
	c=b*(a*a);
	printf("%.2f is the Area of Circle",c);
	return 0;
}
