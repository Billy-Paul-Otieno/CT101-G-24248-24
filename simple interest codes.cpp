#include <stdio.h>
int main()
{
	int principal;
	int time;
	int rate;
	int simpleinterest;
	
	printf("enter principal amount= ");
	scanf("%d", &principal);
	
	printf("enter time= ");
	scanf("%d", &time);
	
	printf("enter rate= ");
	scanf("%d", &rate);
	
	simpleinterest=(principal*time*rate)/100;
	printf("simple interest is %d", simpleinterest);
	
	return 0;
}