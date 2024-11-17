#include <stdio.h>

int main()
{	
	int a,Rows,Columns;
	
	//prompts user to enter number of dimensions 
	printf("Enter Number of Dimensions: ");
	scanf("%d", &a);
	
	//prompts user to enter number of rows
	printf("Enter Number of Rows: ");
	scanf("%d", &Rows);
	
	//prompts user to enter number of columns
	printf("Enter Number of Columns: ");
	scanf("%d", &Columns);
	
	int Array[a][Rows][Columns];//for declaring the 3D Array
	
	//prompts user to enter values for the 3D
	printf("\nEnter 3D Values: \n");
	int p;
	for(p=0; p<a; p++)
	{
		int q;
		for(q=0; q<Rows; q++)
		{
			int r;
			for(r=0; r<Columns; r++)
			{
			  printf("Array[%d][%d][%d]: ", p, q, r);
			  scanf("%d", &Array[p][q][r]);
   	   	    }
		}
	}
	
	//outputs the Array elements	
	printf("\nValues for the 3D Array Are: \n");
	int t;
	for(t=0; t<a; t++) 
	{
		int u;
		for(u=0; u<Rows; u++)
		{
			int v;
			for(v=0; v<Columns; v++)
			{
				printf("%d ", Array[t][u][v]);
			}
			printf("\n");
		}
		printf("\n");
	}
	
	return 0;
}