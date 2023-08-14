/*
 ======================================================================================================================
 Name            : EX4_C_Program_To_Calculate_the_Power_of_a_Number_Using_Recursion
 Author          : Khaled Amr
 Created on	 : August 14, 2023
 Description     : Unit 2 C-Programming >> Lecture_5_C_Functions >> Homework 4 >> C_Program_To_Calculate_the_Power_of_a_Number_Using_Recursion
 ======================================================================================================================
 */

#include <stdio.h>
unsigned int power(unsigned int n,unsigned int m)
{
	static int i = 1;
	if(i>=m)
	{
		return n;
	}
	else
	{
		i++;
		return n*power(n,m);
	}
}
int main()
{
	unsigned int n,m ;
	printf("Enter base number: ");
	 fflush(stdout); fflush(stdin);
	scanf("%d",&n);
	printf("Enter power number(positive integer): ");
	 fflush(stdout); fflush(stdin);
	scanf("%d",&m);
	printf("%d^%d = %d",n,m,power(n,m));
	return 0;
}