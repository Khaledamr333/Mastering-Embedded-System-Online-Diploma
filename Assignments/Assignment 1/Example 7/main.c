/*
 ======================================================================================================================
 Name            : EX7_C_Program_To_Swap_Two_Numbers_Without_Temp_Variable
 Author          : Khaled Amr
 Created on	 : August 14, 2023
 Description     : Unit 2 C-Programming >> Lecture3_C_Basics >> Homework_1 >> EX7 Program To Swap Two Numbers Without Temp Variable
 ======================================================================================================================
 */

#include <stdio.h>
int main()
{
	int x = 10, y = 5;

	// Code to swap 'x' and 'y'
	x = x + y; // x now becomes 15
	y = x - y; // y becomes 10
	x = x - y; // x becomes 5

	printf("After Swapping: x = %d, y = %d", x, y);

	return 0;
}

/* Another Idea Using XOR
-------------------------
#include <stdio.h>
int main()
{
	int x = 10, y = 5;

	// Code to swap 'x' (1010) and 'y' (0101)
	x = x ^ y; // x now becomes 15 (1111)
	y = x ^ y; // y becomes 10 (1010)
	x = x ^ y; // x becomes 5 (0101)

	printf("After Swapping: x = %d, y = %d", x, y);

	return 0;
}

*/