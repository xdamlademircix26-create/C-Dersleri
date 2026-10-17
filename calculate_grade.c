#include <stdio.h>

/** 
*@brief Calculates grades to verify what notes get student 
*@param exam1 Mid-term exam result 
*@param exam2 Final exam result
*@return Their result to show which notes mathes letter grade(AA, BA, BB, CB, FF)
*/

// Calculates the average of two exams result
// Note: prevent to enter negative numbers
double GPA_function(int exam1, int exam2) {
    return (double)(exam1 + exam2) / 2;
}

// Analyze result
void analyze_result(int avarage_grade)
{
    if (avarage_grade <= 30)
    printf("YOU MUST TAKE THIS COURSE AGAIN!!!\n");

    else 
    if ((30 <= avarage_grade) && (avarage_grade <= 50))
    printf("CONDITIONAL SUCCESSFULL!!!\n");

    else
    printf("PASSED!!!\n");
}


int main(void)
{
    double exam1, exam2, avarage_grade;
    // Get input value from user
    printf("Enter result of mid-term exam: ");
    scanf("%lf", &exam1);

    printf("Enter result of final exam: ");
    scanf("%lf", &exam2);

    // Validation: Check if users input unvalid
    if (100 < exam1 || 100 < exam2 || exam1 < 0 || exam2 < 0) 
    {
        printf("--Unvalid input value!--\n");
        return 0.00;
    }

    // Calculate average grade via function call
    avarage_grade = GPA_function(exam1, exam2);

    // Show which letter grade corresponds to notes
    if ((80 <= avarage_grade) && (avarage_grade <= 100))
    printf("*** %.2lf and AA***\n", avarage_grade);
    
    else 
    if ((71 <= avarage_grade) && (avarage_grade < 80))
    printf("*** %.2lf and BA***\n", avarage_grade);
    
    else 
    if ((63 <= avarage_grade) && (avarage_grade < 71))
    printf("*** %.2lf and BB***\n", avarage_grade);
 
    else 
    if ((50 <= avarage_grade) && (avarage_grade < 63))
    printf("*** %.2lf and BC***\n", avarage_grade);

    else 
    if ((45 <= avarage_grade) && (avarage_grade < 50))
    printf("*** %.2lf and DC***\n", avarage_grade);


    else
     if ((30 <= avarage_grade) && ( avarage_grade < 45))
    printf("*** %.2lf and DD***\n", avarage_grade);

    else 
    printf("*** %.2lf and FF***\n", avarage_grade);

    analyze_result(avarage_grade);


    return 0; // Indicate successful program execution

}  
