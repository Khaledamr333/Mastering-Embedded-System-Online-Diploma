/*
 ======================================================================================================================
 Name            : EX5_C_Program_To_Find ASCII_Value_of_a_Character
 Author          : Khaled Amr
 Created on	 : August 14, 2023
 Description     : Unit 2 C-Programming >> Lecture3_C_Basics >> Homework_1 >> EX5 C Program To Find ASCII Value of a Character
 ======================================================================================================================
 */

#include<stdio.h>
int main()
{
	unsigned char x;
	printf("Enter a character: ");
	fflush(stdout);	fflush(stdin);
	scanf("%c",&x);
	printf("ASCII value of %c = %d",x,x);
}