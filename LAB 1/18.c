#include<stdio.h>
int main()
{
	int input,hr,min ,sec;
	printf("Enter seconds:");
	scanf("%d",&input);
	hr=input/(60*60);
	min=(input % (60*60))/60;
	sec=input % 60;
	printf("%d:%d:%d",hr,min,sec);
	return 0;
}
