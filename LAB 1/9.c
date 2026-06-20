#include<stdio.h>
int main()
{
	float e,m,c,i,b,per;
	printf("Full Marks:100\n");
	printf("Obtained Marks in English:");
	scanf("%f",&e);
	printf("Obtained Marks in Basic Math:");
	scanf("%f",&m);
	printf("Obtained Marks in C-Programming:");
	scanf("%f",&c);
	printf("Obtained Marks in Concept of IT:");
	scanf("%f",&i);
	printf("Obtained Marks in Foundation of Business MGMT:");
	scanf("%f",&b);
	per=((e+m+c+i+b)*100)/500;
	printf("He or She obtaind %.0f percent",per);
	return 0;
}
