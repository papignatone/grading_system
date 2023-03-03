/*  The program will compute the final grade for the students listed in cis158g1.c.
 *  The program will use both the grade function and the gradePrint function to compute
 *  both the numeric final grade as well as the alphabetical final grade for each student
 *
 *
 *
 *
 **/

#include <stdio.h>
#include "grades.h"

/*                                                                         grade function                                                                   */

int grade(int attendance, int assignment, int programs, int quizzes, int final, int attendancepercent, int assignmentspercent, int programspercent, int quizzespercent, int finalpercent)
{

    int finalgrade;

    /*                                                      Formula which computes the student's final numeric grade                                                                         */
    finalgrade = (float)attendance / 100 * attendancepercent + (float)assignment / 100 * assignmentspercent + (float)programs / 100 * programspercent + (float)quizzes / 100 * quizzespercent + (float) final / 100 * finalpercent;

    /*                                                   If any grade recieved is less than 0 or greater than 105 the function will return -1                                                */

    if (attendance < 0 || assignment < 0 || programs < 0 || quizzes < 0 || final < 0 || attendance > 105 || assignment > 105 || programs > 105 || quizzes > 105 || final > 105)
    {

        return -1;
    }
    /*                                                   If any percentage recieved is less than 0 or greater than 105 the function will return -2                                           */

    if (attendancepercent < 0 || assignmentspercent < 0 || programspercent < 0 || quizzespercent < 0 || finalpercent < 0 || attendancepercent > 100 || assignmentspercent > 100 || programspercent > 100 || quizzespercent > 100 || finalpercent > 100)
    {
        return -2;
    }
    /*                                                   If the sum of all percentages exceeds 100 the function will return -3                                                                */

    if (attendancepercent + assignmentspercent + programspercent + quizzespercent + finalpercent > 100)
    {

        return -3;

        /*                                                   Otherwise the function will return the final numeric grade for the given student                                                            */
    }
    else
    {

        return finalgrade;
    }
}

/*                                                                       gradePrint Function                                                                                                    */

int gradePrint(int finalgrade)
{

    /*                                 If the final numeric grade recieved is not within the range of 0-105 the function will return an error message and exit with a value of 1                                 */
    if (finalgrade < 0 || finalgrade > 105)
    {

        printf(" %d not a valid grade\n", finalgrade);

        return 1;
    }

    /*                                If the final numeric grade computed in the grade function is within the range 97 - 105, displays the following in cis158g1.c main function                  */

    if (finalgrade > 96 && finalgrade <= 105)
    {

        printf("\tGrade A+ \tExcellent\n");
    }

    /*                                If the final numeric grade computed in the grade function is within the range 93 - 96, displays the following in cis158g1.c main function                  */

    if (finalgrade > 92 && finalgrade <= 96)
    {

        printf("\tGrade A \tExcellent\n");
    }

    /*                                If the final numeric grade computed in the grade function is within the range 90 - 92, displays the following in cis158g1.c main function                  */

    if (finalgrade > 89 && finalgrade <= 92)
    {

        printf("\tGrade A- \tExcellent\n");
    }

    /*                                If the final numeric grade computed in the grade function is within the range 87 - 89, displays the following in cis158g1.c main function                  */

    if (finalgrade > 86 && finalgrade <= 89)
    {

        printf("\tGrade B+ \tGood\n");
    }

    /*                                If the final numeric grade computed in the grade function is within the range 83 - 86, displays the following in cis158g1.c main function                  */

    if (finalgrade > 82 && finalgrade <= 86)
    {

        printf("\tGrade B \tGood\n");
    }

    /*                                If the final numeric grade computed in the grade function is within the range 80 - 82, displays the following in cis158g1.c main function                  */

    if (finalgrade > 79 && finalgrade <= 82)
    {

        printf("\tGrade B- \tGood\n");
    }

    /*                                If the final numeric grade computed in the grade function is within the range 77 - 79, displays the following in cis158g1.c main function                  */

    if (finalgrade > 76 && finalgrade <= 79)
    {

        printf("\tGrade C+ \tFair\n");
    }

    /*                                If the final numeric grade computed in the grade function is within the range 73 - 76, displays the following in cis158g1.c main function                  */

    if (finalgrade > 72 && finalgrade <= 76)
    {

        printf("\tGrade C \tFair\n");
    }

    /*                                If the final numeric grade computed in the grade function is within the range 70 - 72, displays the following in cis158g1.c main function                  */

    if (finalgrade > 69 && finalgrade <= 72)
    {

        printf("\tGrade C- \tFair\n");
    }

    /*                                If the final numeric grade computed in the grade function is within the range 67 - 69, displays the following in cis158g1.c main function                  */

    if (finalgrade > 66 && finalgrade <= 69)
    {

        printf("\tGrade D+ \tPoor\n");
    }

    /*                                If the final numeric grade computed in the grade function is within the range 63 - 66, displays the following in cis158g1.c main function                  */

    if (finalgrade > 62 && finalgrade <= 66)
    {

        printf("\tGrade D \tPoor\n");
    }

    /*                                If the final numeric grade computed in the grade function is within the range 60 - 62, displays the following in cis158g1.c main function                  */

    if (finalgrade > 59 && finalgrade <= 62)
    {

        printf("\tGrade D- \tPoor\n");
    }
    /*                                If the final numeric grade computed in the grade function is below 60, displays the following in cis158g1.c main function                                  */

    if (finalgrade < 60)
    {

        printf("\tGrade F \tFailing Grade\n");
    }

    return 0;
}
