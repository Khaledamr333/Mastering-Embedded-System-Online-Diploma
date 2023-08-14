/*
 ======================================================================================================================
 Name            : EX8_C_Program_To_Make_a_Simple_Calculator_Using_Switch_Case
 Author          : Khaled Amr
 Created on	 : August 14, 2023
 Description     : Unit 2 C-Programming >> Lecture3_C_Basics >> Homework_2 >> EX8 Program To Make a Simple Calculator Using Switch Case
 ======================================================================================================================
 */

#include<stdio.h>
int main()
{
	unsigned char operator;
	float operand_1 , operand_2 ;
	printf("Enter operator: ");
	fflush(stdout);
	scanf("%c",&operator);
	printf("Enter two operands: ");
	fflush(stdout);
	scanf("%f %f",&operand_1,&operand_2);
	switch(operator)
	{
	case '+':
		printf("%f + %f = %f",operand_1,operand_2,operand_1+operand_2);
		break;

	case '-':
		printf("%f - %f = %f",operand_1,operand_2,operand_1-operand_2);
		break;

	case '*':
		printf("%f * %f = %f",operand_1,operand_2,operand_1*operand_2);
		break;

	case '/':
		printf("%f / %f = %f",operand_1,operand_2,operand_1/operand_2);
		break;
	}
	return 0 ;
}