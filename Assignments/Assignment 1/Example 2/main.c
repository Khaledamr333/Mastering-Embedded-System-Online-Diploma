/*
 ======================================================================================================================
 Name            : EX2_C_Program_To_Print_a_Integer_Entered_by_a_User
 Author          : Khaled Amr
 Created on	 : August 14, 2023
 Description     : Unit 2 C-Programming >> Lecture3_C_Basics >> Homework_1 >> EX2_C_Program_To_Print_a_Integer_Entered_by_a_User
 ======================================================================================================================
 */

#include <stdio.h>
int main(void)
{
	int x=0 ;
	printf("Enter a integer: ");
	fflush(stdout);//fflush(stdin);
	scanf("%d",&x);
	printf("You entered: %d",x);
}