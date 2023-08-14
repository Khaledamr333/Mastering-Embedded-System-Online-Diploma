/*
 ======================================================================================================================
 Name            : EX7_C_Program_To_Find_Factorial_Of_a_Number
 Author          : Khaled Amr
 Created on	 : August 14, 2023
 Description     : Unit 2 C-Programming >> Lecture3_C_Basics >> Homework_2 >> EX7 Program To Find Factorial Of a Number
 ======================================================================================================================
 */

#include<stdio.h>
int main()
{
	unsigned int n,i,factorial=1;
	printf("Enter a number: " );
	fflush(stdout);
	scanf("%d",&n);
	if ((signed int)n<0) printf("Error");
	else if(n==0) printf("factorial = 1");
	else
	{
		for(i=1;i<=n;i++)
			factorial*=i;
		printf("factorial = %d\n",factorial);
		return 0 ;
	}
}