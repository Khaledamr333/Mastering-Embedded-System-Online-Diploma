/*
 ======================================================================================================================
 Name            :  EX5_C_Program_To_Check Whether_a_Character_is_an_Alphabet_Or_Not
 Author          : Khaled Amr
 Created on	 : August 14, 2023
 Description     : Unit 2 C-Programming >> Lecture3_C_Basics >> Homework_2 >> EX5 Program To Check Whether a Character is an Alphabet Or Not
 ======================================================================================================================
 */

#include<stdio.h>
int main()
{
	unsigned char x=0 ;
	printf("Enter a character: " );
	fflush(stdout);
	scanf("%c",&x);
	if( (('x' >= 'A')&&('x' <= 'Z')) || (('x' >= 'a')&&('x' <= 'z')) )
		printf("%c is an alphabet",x);
	else{ printf("%c is not an alphabet",x);}
	return 0 ;
}