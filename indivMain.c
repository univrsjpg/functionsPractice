/* Note that this file will not be submitted. Thus, 
   you can add additional function calls to test your results.  For example, call extractDigits() separately.
*/

#include "indivExer-DIMAUNAHAN.c" //replace this with your lastname

int
main()
{
   printf("\nTesting display3Digits():\n");
   printf("Expected:\n");
   printf("Orig value is 004\n");
   printf("Reversed value is 400\n");
   printf("\nActual:\n");
   display3Digits(4);
   
   printf("\nTesting reverseNumber():\n");
   printf("Expected = 810; Actual = %d\n", 
           reverseNumber(18));
   
   printf("\nTesting getSum():\n");
   printf("Expected = 24; Actual = %d\n",
           getSum(789));

   printf("\nTesting isOdd():\n");
   printf("Expected = Odd\n");
   if (isOdd(41029))
      printf("Actual = %s\n",MSG5);
   else printf("Actual = %s\n",MSG4);

   printf("\nOverall Testing 1:\n");
   printf("Expected = Even\n");
   if (isOdd(getSum(309)))
      printf("Actual = %s\n",MSG5);
   else printf("Actual = %s\n",MSG4);

   printf("\nOverall Testing 2:\n");
   printf("Expected = Even\n");
   if (isOdd(reverseNumber(51)))
      printf("Actual = %s\n",MSG5);
   else printf("Actual = %s\n",MSG4);

   return 0;
}