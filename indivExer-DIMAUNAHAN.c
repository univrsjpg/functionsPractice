/* Name:  <Replace this with your Lastname, Firstname>
   Section: <Replace this with your section>
*/

#include <stdio.h>
#include "indivExer.h" //do not remove or edit this line
//no other .h or .c files can be included

/* ToDo: Implement this function based on the comment and instructions.

   This function extracts each digit in num and places each
   digit in the addresses indicated.

   Example: 
   (1) if num is 368, before the end of the function, *pLeft should contain 3, *pMid should contain 6, and *pRight should contain 8.
   (2) if num is 60, before the end of the function, *pLeft should contain 0, *pMid should contain 6, and *pRight should contain 0.

   @param num - the given number to extract from
   @param pLeft - the address where the leftmost digit of num will be stored
   @param pMid - the address where the middle digit of num will be stored
   @param pRight - the address where the rightmost digit of num will be stored

   Precondition: num is non-negative and is at most 3-digits
   
   Requirements:
   1. You are not allowed to declare additional variables for this function.
   2. You are not allowed to have printf() or scanf() in this function.
*/
void 
extractDigits(int num, int *pLeft, int *pMid, int *pRight)
{
  *pLeft = num/100;
  *pMid = num/10%10;
  *pRight = num%10;
}

/* ToDo: Implement this function based on the comment and instructions.

   This function reverses the given num.
   
   Examples:
   (1) if num is 368, the function returns 863.
   (2) if num is 62, the function returns 260.
   (3) if num is 120, the function returns 21.

   @param num - the given number to reverseNumber
   @return the reverse of the given number
   
   Precondition: num is non-negative and at most 3 digits
 
   Requirements: 
   1. There should be no printf() as part of the solution of this function.
   2. The function extractDigits() should be called and result of which should be used meaningfully as part of solution of this function.
*/
int reverseNumber(int num)
{
  // include the function extractDigits
  int pLeft, pMid, pRight;
  extractDigits(num, &pLeft, &pMid, &pRight);

  int Temp1 = pLeft;
  pLeft = pRight;
  pRight = Temp1;

  return (pLeft*100 + pMid*10 +pRight);
}

/* ToDo: Complete the statements in the function based on the comment and instructions.

   If num is 60, this function should display the following:
Orig value is 060
Reversed value is 060

   @param num - the given number
   
   Requirements:
   1. You are required to use the defined constants provided in the indivExer.h
   2. You are required to meaningfully use the result of your function call to reverseNumber() in the solution for this function.
   3. You are not allowed to have any space in the format string.
   4. You are not allowed to use conditional statements.
   5. You are not allowed to add additional variables in this function.
*/
void 
display3Digits(int num)
{
	printf("%s%s%03d\n", MSG1, MSG3, num);
	printf("%s%s%d", MSG2, MSG3, reverseNumber(num));
}

/* Implement this function based on the comment and instructions.

   This function returns the sum of digits of the given num.

   @param num - the given number whose digits will be added
   @return the sum of the digits
   
   Precondition: num is non-negative and at most 3 digits
 
   Requirements: 
   1. There should be no printf() as part of the solution of this function.
   2. The function extractDigits() should be called and result of which should be used meaningfully as part of solution of this function.
*/ 
int getSum(int num)
{
  int pLeft, pMid, pRight;
  extractDigits(num, &pLeft, &pMid, &pRight);

  return (pLeft + pMid + pRight);
}

/* Implement this function based on the comment and instructions.

   This function returns 1 if num is odd and returns 0 otherwise.

   @param num - the given number to be checked
   @return 1 if num is odd and returns 0 otherwise.
   
   Example: if num = -12345, the function returns 1.
   
   Requirements: 
   1. There should be no printf() as part of the solution of this function.
   2. You are not allowed to use conditional statements or ternary operators as part of your solution. Hint: Solution involves having an expression in the return statement.   
*/ 
int isOdd(int num)
{
  return (num%2)*1;
}

//do not place a main() in this file