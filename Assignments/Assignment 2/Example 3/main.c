/*
 ======================================================================================================================
 Name            : EX3_C_Program_To_Find_The_Largest_Number_Among_Three_Numbers
 Author          : Khaled Amr
 Created on	 : August 14, 2023
 Description     : Unit 2 C-Programming >> Lecture3_C_Basics >> Homework_2 >> EX3 Program To Find The Largest Number Among Three Numbers
 ======================================================================================================================
 */

#include<stdio.h>
int main()
{
	float x , y , z ;

	printf("Enter a three numbers: ");
	fflush(stdout);
	scanf("%f %f %f",&x,&y,&z);
	if(x>y)
	{
		if (x>z)
			printf("%f is largest",x);
		else printf("%f is largest",z);
	}
	else if(y>x)
	{
		if(y>z)
			printf("%f is largest",y);
		else printf("%f is largest",z);
	}
	return 0 ;
}