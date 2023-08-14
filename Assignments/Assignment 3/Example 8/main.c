/*
 ======================================================================================================================
 Name            : EX6_C_Program_To_Reverse_String_Without_Using_Library_Function
 Author          : Khaled Amr
 Created on	 : August 14, 2023
 Description     : Unit 2 C-Programming >> Lecture4_C_Array&String >> Homework 3 >> C_Program_To_Reverse_String_Without_Using_Library_Function
 ======================================================================================================================
 */

#include <stdio.h>
#include <string.h>
int main()
{
	char arr[100];
	char arr_reversed[100];
	int i,j,arr_length;

	printf("Enter a string: ");
	fflush(stdout);fflush(stdin);
	fgets(arr,100,stdin);
	arr_length = strlen(arr);
	for(i=0,j=1; i<arr_length ;i++,j++)
	{
		arr_reversed[i]=arr[arr_length-j];
	}
	arr_reversed[i]='\0' ;
	printf("Reverse string is : %s",arr_reversed);
	return 0;
}
