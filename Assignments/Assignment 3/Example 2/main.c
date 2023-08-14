/*
 ======================================================================================================================
 Name            : EX2_C_Program_To_Calculate_Average_Using_Arrays
 Author          : Khaled Amr
 Created on	 : August 14, 2023
 Description     : Unit 2 C-Programming >> Lecture4_C_Array&String >> Homework 3 >> EX2_C_Program_To_Calculate_Average_Using_Arrays
 ======================================================================================================================
 */

#include <stdio.h>
int main()
{
int n ,i;
float sum = 0 ;
printf("Enter the numbers of data: ");
fflush(stdout);fflush(stdin);
scanf("%d",&n);
float arr [100];

for(i=0;i<n;i++)
{
	printf("%d. Enter number: ",i+1);
	fflush(stdout);fflush(stdin);
	scanf("%f",&arr[i]);
}
i=0;
for(i=0;i<n;i++)
{
sum += arr[i];
}
printf("Average = %.2f",sum/n);
	return 0 ;
}