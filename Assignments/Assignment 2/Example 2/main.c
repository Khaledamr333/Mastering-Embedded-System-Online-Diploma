/*
 ======================================================================================================================
 Name            :EX2_C_Program_To_Check_Vowel_or_Consonant
 Author          : Khaled Amr
 Created on	 : August 14, 2023
 Description     : Unit 2 C-Programming >> Lecture3_C_Basics >> Homework_2 >> EX2 Program To Check Vowel or Consonant
 ======================================================================================================================
 */

#include<stdio.h>
int main()
{
	unsigned char x=0 ;
	printf("Enter an alphabet: ");
	fflush(stdout);
	scanf("%c",&x);
	if((x=='A')||(x=='a')||(x=='E')||(x=='e')||(x=='I')||(x=='i')||(x=='O')||(x=='o')||(x=='U')||(x=='u') )
		printf("%c is a vowel",x);

	else printf("%c is a consonant",x);

	return 0 ;
}