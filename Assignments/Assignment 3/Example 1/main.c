/*
 ======================================================================================================================
 Name            : EX1_C_Program_To_Find_Sum_of_two_Matrix_of_Order_2*2
 Author          : Khaled Amr
 Created on	 : August 14, 2023
 Description     : Unit 2 C-Programming >> Lecture4_C_Array&String >> Homework 3 >> EX1 Program To Find Sum of two Matrix oforder 2*2
 ======================================================================================================================
 */

#include <stdio.h>
int main()
{
	float matrix_1 [2][2] ;
	float matrix_2 [2][2] ;
	int i,j;
	printf("Enter the elements of the 1st matrix\n");
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			printf("Enter a%d%d: ",i+1,j+1);
			fflush(stdout);fflush(stdin);
			scanf("%f",&matrix_1[i][j]);
		}
	}

	i=0;j=0;

	printf("Enter the elements of the 2nd matrix\n");
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			printf("Enter b%d%d: ",i+1,j+1);
			fflush(stdout);fflush(stdin);
			scanf("%f",&matrix_2[i][j]);
		}
	}
	i=0;j=0;
	printf("Sum of matrix:\n");
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			printf("%f ",(matrix_1[i][j])+(matrix_2[i][j]));
		}
		printf("\n");
	}

	return 0 ;
}