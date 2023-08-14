/*
 ======================================================================================================================
 Name            : EX6_C_Program_To_Find_the_Frequency_of_Characters_in_a_String
 Author          : Khaled Amr
 Created on	 : August 14, 2023
 Description     : Unit 2 C-Programming >> Lecture4_C_Array&String >> Homework 3 >> C_Program_To_Find_the_Frequency_of_Characters_in_a_String
 ======================================================================================================================
 */

#include <stdio.h>
int main()
{
	char arr[100];
	char x ,i,freq=0 ;
	printf("Enter a string: ");
	fflush(stdout);fflush(stdin);
	fgets(arr,100,stdin);
	printf("Enter a character to find frequency: ");
	fflush(stdout);fflush(stdin);
	scanf("%c",&x);
	for(i=0; arr[i]!='\0' ;i++)
	{
		if(arr[i] == x)
			freq++;
	}
	printf("Frequency of %c = %d",x,freq);
	return 0;
}