/*
 ======================================================================================================================
 Name            : EX6_C_Program_To_Swap_Two_Numbers
 Author          : Khaled Amr
 Created on	 : August 14, 2023
 Description     : Unit 2 C-Programming >> Lecture3_C_Basics >> Homework_1 >> EX6 Program To Swap Two Numbers
 ======================================================================================================================
 */

#include<stdio.h>
int main()
{
	float a,b,temp ;
	printf("Enter value of a: ");
	fflush(stdout);fflush(stdin);
	scanf("%f",&a);
	printf("Enter value of b: ");
	fflush(stdout);fflush(stdin);
	scanf("%f",&b);

	temp = a;
	a=b;
	b=temp;

	printf("After swapping, value of a = %f\n",a);
	printf("After swapping, value of b = %f",b);
}