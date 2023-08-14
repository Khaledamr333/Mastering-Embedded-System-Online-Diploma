/*
 ======================================================================================================================
 Name            : EX1_C_Program_To_Find_Prime_Numbers_Between_two_Intervals_by_Making_User_Defined_Function
 Author          : Khaled Amr
 Created on	 : August 14, 2023
 Description     : Unit 2 C-Programming >> Lecture_5_C_Functions >> Homework 4 >> C_Program_To_Find_Prime_Numbers_Between_two_Intervals_by_Making_User_Defined_Function
 ======================================================================================================================
 */

#include <stdio.h>
void prime (unsigned int start,unsigned int end)
{
	int i ,Enterance_indicator = 0;
	float result ;
	for ( ; start<=end ; start++ )
	{
		Enterance_indicator = 0 ;

		for(i=2 ; i < start ; i++)
		{
			result = start / (float)i ;

			if ( (result == (int)result) )
			{
				Enterance_indicator = 7 ;
				break;
			}
		}

		if( (Enterance_indicator != 7) && (start!=1) && (start!=0) )
		{
			printf("%d ",start);
		}

	}
}
int main ()
{
	unsigned int start,end ;
	scanf("%d  %d",&start,&end);
	prime(start,end);
	return 0 ;
}