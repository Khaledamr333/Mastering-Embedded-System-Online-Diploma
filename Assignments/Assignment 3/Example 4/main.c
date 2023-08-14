/*
 ======================================================================================================================
 Name            : EX4_C_Program_To_Insert_an_Element_in_an_Array
 Author          : Khaled Amr
 Created on	 : August 14, 2023
 Description     : Unit 2 C-Programming >> Lecture4_C_Array&String >> Homework 3 >> C_Program_To_Insert_an_Element_in_an_Array
 ======================================================================================================================
 */

#include <stdio.h>
int main()
{
	int n,location,i,j,l;
	float arr[100];
	float inserted_num;

	printf("Enter no of elements : ");
	fflush(stdout);fflush(stdin);
	scanf("%d",&n);
	for(i=0;i<n;i++){scanf("%f",&arr[i]);};

	printf("Enter the number to be inserted : ");
	fflush(stdout);fflush(stdin);
	scanf("%f",&inserted_num);
	printf("Enter the location : ");
	fflush(stdout);fflush(stdin);
	scanf("%d",&location);

	for(j=0,l=1;(n+1-l)>=location;j++,l++)
		arr[n-j]=arr[n-l];                 /*shifting elements one step fwd*/

	arr[location-1]=inserted_num;         /*insert the desired number*/

	i=0;
	for(i=0;i<n+1;i++){printf("%g ",arr[i]);}

	return 0;
}