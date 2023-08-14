/*
 ======================================================================================================================
 Name            : EX1_C_Program_To_Check_Whether_a_Number_is_Even_or_Odd
 Author          : Khaled Amr
 Created on	 : August 14, 2023
 Description     : Unit 2 C-Programming >> Lecture3_C_Basics >> Homework_2 >> EX1 Program To Check Whether a Number is Even or Odd
 ======================================================================================================================
 */

#include<stdio.h>
int main()
{
	unsigned int x=0 ;
	printf("Enter an integer you want to check: ");
	fflush(stdout);
	scanf("%d",&x);
	(x%2==0)? printf("%d is even",x): printf("%d is odd",x);
	return 0 ;
}