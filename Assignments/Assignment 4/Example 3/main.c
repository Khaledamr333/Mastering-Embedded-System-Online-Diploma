/*
 ======================================================================================================================
 Name            : EX3_C_Program_To_Reverse_a_Sentence_Using_Recursion
 Author          : Khaled Amr
 Created on	 : August 14, 2023
 Description     : Unit 2 C-Programming >> Lecture_5_C_Functions >> Homework 4 >> C_Program_To_Reverse_a_Sentence_Using_Recursion
 ======================================================================================================================
 */

#include <stdio.h>
#include <string.h>
void rev (char* arr,char size)
{
	if(size==0)
	{
		return;
	}
	else
	{
		printf("%c",arr[size-1]);
		return rev(arr,size-1);
	}
}
int main ()
{
	char arr[100],size;
	printf("Enter a sentence: ");
	fflush(stdout);fflush(stdin);
	fgets(arr,100,stdin);
	size = strlen(arr);
	rev(arr,size);
	return 0;
}