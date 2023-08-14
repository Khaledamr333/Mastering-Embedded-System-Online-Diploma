/*
 ======================================================================================================================
 Name            : EX4_C_Program_To_Multiply_Two_Floating_Point_Numbers
 Author          : Khaled Amr
 Created on	 : August 14, 2023
 Description     : Unit 2 C-Programming >> Lecture3_C_Basics >> Homework_1 >> EX4 C Program To Multiply Two Floating Point Numbers
 ======================================================================================================================
 */

#include<stdio.h>
int main()
{
	float x=0,y=0,product=0;
	printf("Enter two numbers:");
	fflush(stdout);	fflush(stdin);
	scanf("%f\n%f",&x,&y);
	product=x*y;
	printf("product: %f",product);
}