//program to calculate electricity bill
/*
Program Aim:To Calculate Electricity Bill
Author:Billy Paul Otieno.
Date:Tuesday, 8th Oct 2024
*/

#include <stdio.h>

int main()
{
	int CustomerID;
	char CustomerName[49];
	float UnitConsumed;
	float ChargePerUnit;
	float Bill;
	float Surcharge;
	float TotalBill;
	
	printf("Enter Customer ID: ");//prompts user to enter Customer ID
	scanf("%d", &CustomerID);//Reads and Stores the user's input
	
	printf("Enter Customer Name: ");
	scanf("%s", &CustomerName);
	
	printf("Enter Unit Consumed: ");
	scanf("%.2f", &UnitConsumed);
	
	if (UnitConsumed<=199)
		ChargePerUnit=1.20;
	else if (UnitConsumed>=200 && UnitConsumed<400)
		ChargePerUnit=1.50;
	else if (UnitConsumed>=400 && UnitConsumed<600)
		ChargePerUnit=1.80;
	else
		ChargePerUnit=2.00;
	
	if(Bill>400)
	{
		Surcharge=Bill*(15/100);
	}
	else if(Bill >= 100)
	{
		printf("Your Bill is Above Minimum");
	}
	
	TotalBill=UnitConsumed*ChargePerUnit;//calculates the total bill
	printf("\nTotal Bill=Ksh. %.2f\n", TotalBill);
	
	//outputs all details entered by the user 
	printf("\nCustomer ID: %d", CustomerID);
	printf("\nCustomer Name: %s",CustomerName);
	printf("\nUnits Consumed: %.2f", UnitConsumed);
	printf("\nCharges Per Unit:Ksh %.2f", ChargePerUnit);
	printf("\nTotal Amount To Pay:Ksh %.2f\n", TotalBill);
	
	return 0;
}