/*
 ======================================================================================================================
 Name            : EX4_C_Program_To_Check Whether_a_Number_is_Positive_or_Negative
 Author          : Khaled Amr
 Created on	 : August 14, 2023
 Description     : Unit 2 C-Programming >> Lecture3_C_Basics >> Homework_2 >> EX4 Program To Check Whether a Number is Positive or Negative
 ======================================================================================================================
 */

#include<stdio.h>
int main()
{
	float x=0 ;
	printf("Enter a Number: " );
	fflush(stdout);
	scanf("%f",&x);
	if(x == 0) printf("you entered zero");
	else
	{
		if(x>0) printf("%f is positive",x);
		else    printf("%f is negative",x);
	}
	return 0 ;
}