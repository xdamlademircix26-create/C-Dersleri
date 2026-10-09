#include <stdio.h>

// Takes a number and compute if the number divisible by 3,5 or both of them
// Note: The number should not be zero or negative

/**
* Calculets remainder when the number divided by three
* @param number Input
* @return Remainder value
 */
 int division_by_three(int number) {
    return number % 3;
 }
 /**
* Calculets remainder when the number divided by five
* @param number Input
* @return Remainder value 
 */
 int division_by_five(int number) {
    return number % 5;
 }/**
* Calculets remainder when the number divided by fifteen
* @param number Input
* @return Remainder value
 */
 int division_by_fifteen(int number) {
    return number % 15;
 }

 int main(void) {
    int number, rem_from_three, rem_from_five, rem_from_fifteen;

    // Get input value from user
    printf("Emter number: ");
    scanf("%d", &number);

    // Validation: Check if the number equals or smaller then zero to keep number in line
    if (number <= 0) {
        //Error case
        printf("--The number should be positive!--\n"); 
        return 1; // Indicate program execution error
    }

    // Compute operations via function call
    rem_from_three = division_by_three(number);
    rem_from_five = division_by_five(number);
    rem_from_fifteen = division_by_fifteen(number);

    // Verify which defination matches the number
    if (rem_from_fifteen == 0) {
        // Call the number as fizzbuzz
        printf("--FIZZBUZZ--\n");
    } else if(rem_from_three == 0) {
        // Call the number as fizz
        printf("--FIZZ--\n");
    } else if (rem_from_five == 0) {
        // Call the number as buzz
        printf("--BUZZ--\n");
    } else {
        // Call the number
        printf("%d\n", number);
    }

    return 0; // Indicate succesful program execution
}