/*
 ======================================================================================================================
 Name            : EX5_C_Program_To_Search_an_Element_in_Array
 Author          : Khaled Amr
 Created on	 : August 14, 2023
 Description     : Unit 2 C-Programming >> Lecture4_C_Array&String >> Homework 3 >> C_Program_To_Search_an_Element_in_Array
 ======================================================================================================================
 */

#include <stdio.h>
int main()
{
	int n,i;
	float arr[100];
	float searched_num;
	printf("Enter no of elements : ");
	fflush(stdout);fflush(stdin);
	scanf("%d",&n);
	for(i=0;i<n;i++){scanf("%f",&arr[i]);};

	printf("Enter the element to be searched : ");
	fflush(stdout);fflush(stdin);
	scanf("%f",&searched_num);

	for(i=0;i<n;i++)
	{
		if(arr[i]==searched_num)
		{
			printf("Number found at the location = %d",i+1);
			break;
		}

	}

	return 0;
}