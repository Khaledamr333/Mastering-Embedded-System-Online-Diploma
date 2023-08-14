/*
 ======================================================================================================================
 Name            : EX3_C_Program_To_Find_Transpose_of_a_Matrix
 Author          : Khaled Amr
 Created on	 : August 14, 2023
 Description     : Unit 2 C-Programming >> Lecture4_C_Array&String >> Homework 3 >> C_Program_To_Find_Transpose_of_a_Matrix
 ======================================================================================================================
 */

#include <stdio.h>
int main()
{
	int n,m,i,j;
	printf("Enter rows and columns of matrix: ");
	fflush(stdout);fflush(stdin);
	scanf("%d %d",&n,&m);
	float arr [10][10];
	float temp [10][10];

	printf("Enter elements of matrix: \n");
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			printf("Enter elements a%d%d: ",i+1,j+1);
			fflush(stdout);fflush(stdin);
			scanf("%f",&arr[i][j]);
		}
	}
	i=0,j=0;
	printf("Entered Matrix:\n");
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			printf("%g ",arr[i][j]);
		}
		printf("\n");
	}

	printf("Transpose of the Matrix:\n");
	i=0,j=0;
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			temp[j][i]=arr[i][j];
		}
	}

	i=0,j=0;
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("%g ",temp[i][j]);
		}
		printf("\n");
	}

	return 0;
}