#include <stdio.h>

/**
*@brief Calculates entered operations and numbers from user 
*@param num1 Base number
*@param num2 Second number
*@param  operator Matemathical operator(char:+,-,*,/)
*@return Calculated value and analyzed data from program
*/
// Note: Prevent to enter zero as the divisor number to avoid division error
// Analyzes the result of problems in terms of negative, positive, even, odds or undefined

// Start with patterns that important to program
double division(int num1, int num2) {
   if (num2 == 0) {
      printf("--ERROR CASE: Division by zero is not allowed!--\n");
      return 0.0;
   }
   return (double) num1 / num2;
}

// Analyze which defination matches the result from calculations
void analyze_result(int cal_result) {
   if (cal_result == 0) {
      printf("==The result is zero==\n");
   } else if (cal_result > 0){
      if (cal_result % 2 == 0){
         printf("==The result is even and positive==\n");
      } else {
         printf("==The result is odd and positive==\n");
      }
   } else if (cal_result < 0) {
      if(cal_result % 2 != 0){
         printf("==The result is odd and negative==\n");
      } else {
         printf("==The result is even and negative==\n");
      }
   }
}
 
int main(void) {
   int num1, num2, cal_result;
   double div_result;
   char operator;

   // Get input value and operations from user
   printf("Enter base number: ");
   scanf("%d", &num1);

   printf("Enter number2: ");
   scanf("%d", &num2);

   printf("Choose an operation including +, -, /, *: ");
   scanf(" %c", &operator);

   // Compute problems
   if (operator == '+') {
      cal_result = num1 + num2;
      printf("Sum of numbers: %d\n", cal_result);
      analyze_result(cal_result);
   } else if (operator == '-') {
      cal_result = num1 - num2;
      printf("Difference of numbers: %d\n", cal_result);
      analyze_result(cal_result);
   } else if (operator == '*') {
      cal_result = num1 * num2;
      printf("Product of two numbers: %d\n", cal_result);
      analyze_result(cal_result);
   } else if (operator == '/') {
      if (num2 != 0) { 
         div_result = division(num1, num2);
         printf("Division of numbers: %.2lf\n", div_result);
      }
      // Note: Division result could be decimals (float,double),so even and odd analyze skipped for this operation
   } else {
      printf("--ERROR CASE: Invalid operator entered--\n");
   }

   return 0; // Indicate successful program execution
}

