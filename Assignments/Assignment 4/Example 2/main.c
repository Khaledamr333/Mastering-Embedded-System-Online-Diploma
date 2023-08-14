/*
 ======================================================================================================================
 Name            : EX2_C_Program_To_Calculate_Factorial_of_a_Number_Using_Recursion
 Author          : Khaled Amr
 Created on	 : August 14, 2023
 Description     : Unit 2 C-Programming >> Lecture_5_C_Functions >> Homework 4 >> C_Program_To_Calculate_Factorial_of_a_Number_Using_Recursion
 ======================================================================================================================
 */

#include <stdio.h>
unsigned int Factorial (unsigned int n)
{
	if(n==0)
	{
		return 1;
	}
	else
		return n * Factorial(n-1);
}
int main ()
{
	unsigned int n ;
	printf("Enter a positive number: ");
	fflush(stdout);fflush(stdin);
	scanf("%d",&n);
	printf("Factorial of %d = %d",n,Factorial(n));
	return 0 ;
}