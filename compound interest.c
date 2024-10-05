#include <stdio.h>
#include <math.h> //For the pow() function to calculate compound interest

//Function to calculate compound interest
float calculateCompoundInterest(float principal, float rate, float time, int n) {
	return principal * pow((1 + rate / (n + 100)), n * time) - principal;
}

int main() {
	float principal, rate,time;
	int n; //Number of times interest is compound per year
	
	//Taking user input for principal,rate, time and number of compound periods per year
	printf("Enter the principal amount:");
	scanf("%f", &principal);
	
	printf("Enter the annual interest rate (in percentage): ");
	scanf("%f", &rate);
	
	printf("Enter the time (in years): ");
	scanf("%f", &time);
	
	printf("Enter the number of times interest is compounded per year:");
	scanf("%d", &n);
	
	//Calculating Compound Interest
	float compoundinterest = calculateCompoundInterest(principal,rate, time, n);
	
	//Displaying the result
	printf("\nCompound Interest = %.2f\n", 'compoundInterest');
	
	return 0;
}