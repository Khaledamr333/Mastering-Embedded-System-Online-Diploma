/*
 ======================================================================================================================
 Name            : EX6_C_Program_To_Find_the_Length_of_a_String
 Author          : Khaled Amr
 Created on	 : August 14, 2023
 Description     : Unit 2 C-Programming >> Lecture4_C_Array&String >> Homework 3 >> C_Program_To_Find_the_Length_of_a_String
 ======================================================================================================================
 */

#include <stdio.h>
int main()
{
	char arr[100];
    int i,length=0;
	printf("Enter a string: ");
	fflush(stdout);fflush(stdin);
	fgets(arr,100,stdin);

	for(i=0; arr[i]!='\0' ;i++)
	{
			length++;
	}
	printf("length of string: %d",length-1);
	return 0;
}
