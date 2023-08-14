/*
 ======================================================================================================================
 Name            : EX3_C_Program_To_Add_Two_Integers
 Author          : Khaled Amr
 Created on	 : August 14, 2023
 Description     : Unit 2 C-Programming >> Lecture3_C_Basics >> Homework_1 >> EX3_C_Program_To_Add_Two_Integers
 ======================================================================================================================
 */

#include<stdio.h>
int main()
{
	int x=0,y=0,sum=0;
	printf("Enter two integers:");
	fflush(stdout);	fflush(stdin);
	scanf("%d\n%d",&x,&y);
	sum=x+y;
	printf("Sum: %d",sum);
}