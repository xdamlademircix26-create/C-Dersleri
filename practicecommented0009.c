#include <stdio.h>

// Takes a year and determines wheather is leap year
// Note: A year should be greater or equal to zero
/** Calculates remainder when divided by 100
* @param year input
* @return remainder value
*/
int get_remainder_by_hundred(int year) {
    return year % 100;
}
/** Calculates remainder when divided by 4
* @param year input
* @return remainder value
*/
int get_remainder_by_four(int year) {
    return year % 4;
}
/** Calculates remainder when divided by 400
* @param year input
* @return remainder value
*/
int get_remainder_by_four_hundred(int year) {
    return year % 400;
}


int main(void){
    int year, rem_from_100, rem_from_4, rem_from_400;

    // Get input value from user
    printf("Enter a year: ");
    scanf("%d", &year);

    // "Input Validation:Prevent to enter negative and 0 year
    if (year <= 0) {
        printf("\nERROR:Year should be pozitive\n");
        return 1; // Indicate program execution error
    }
     
    rem_from_100 = get_remainder_by_hundred(year);
   
    // Validation: Check if a year is not divisible by hundred
    if (rem_from_100 != 0) {
    
        // The procces continiues with division by four
        rem_from_4 = get_remainder_by_four(year);
        
        // Check if the year can not divide evently by four
        if (rem_from_4 != 0) {
            // Display that the year is not leap year
            printf("\nResult:%d is not leap year\n", year);
        } else {
            // Display that the year is known as leap year
            printf("\nResult:%d is leap year\n", year);
        } 
        
    } else {

        // The proccess continues with division by four hundred
        rem_from_400 = get_remainder_by_four_hundred(year);

        // Check if the year can not divide evently by four hundred
        if (rem_from_400 != 0) {
            // Display that the year is not leap year
            printf("\nResult:%d is not leap year\n", year);
        } else {
            // Display that the year is known as leap year
            printf("\nResult:%d is leap year\n", year);
        }

    } 

    return 0; // Indicate successful program execution

}