/*
 ======================================================================================================================
 Name            : EX6_C_Program_To_Calculate_Sum_Of_Natural_Numbers
 Author          : Khaled Amr
 Created on	 : August 14, 2023
 Description     : Unit 2 C-Programming >> Lecture3_C_Basics >> Homework_2 >> EX6 Program To Calculate Sum Of Natural Numbers
 ======================================================================================================================
 */

#include<stdio.h>
int main()
{
	unsigned int n=0,i=1,sum=0;
	printf("Enter a number: " );
	fflush(stdout);
	scanf("%d",&n);
	for(i=1;i<=n;i++)
		sum+=i;
	printf("sum = %d\n",sum);
	return 0 ;
}