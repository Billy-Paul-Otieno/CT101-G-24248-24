#include <stdio.h>

int main()
{
	int age;
	float income;
	
	// User-friendly prompts for age and income input
	printf("Enter age: ");
	scanf("%d", &age);
	
	printf("Enter Annual Income: ");
	scanf("%f", &income);
	
	//Check if the customer qualifies for the loan
	if(age >=21 && income >=21000)
	{
		printf("\ncongratulations! You qualify for a loan.\n");
	}
	else
	{
		printf("\nUnfortunately, we are unable to offer you a loan at this time.\n");
	}
	
	return 0;
}