/* The program will compute the final grade for the students listed below.
 * The program will use the following files cis158g1.c, grades.c, and grades.h
 * The program will display a letter grade for the course followed by a message for each student
 * listed.
 *
 *
 **/

#include <stdio.h>
#include "grades.h"

/*      Main Function, calls functions from grades.c to display a grade for each student below     */
int main()
{

    /*         Calls grade function from grades.c to compute numeric grade        */

    // averages and percentages for each category are hardcoded

    int Tom = grade(95, 93, 95, 99, 94, 5, 20, 35, 25, 15);

    int Jane = grade(95, 86, 88, 87, 89, 5, 20, 35, 25, 15);

    int John = grade(70, 50, 65, 50, 57, 5, 20, 35, 25, 15);

    int Pat = grade(85, 78, 81, 82, 88, 5, 20, 35, 25, 15);

    int Mary = grade(85, 72, 75, 68, 75, 5, 20, 35, 25, 15);

    int Martin = grade(80, 85, 80, 88, 93, 5, 20, 35, 25, 15);

    int James = grade(75, 65, 65, 52, 55, 5, 20, 35, 25, 15);

    int Ann = grade(95, 85, 95, 88, 92, 5, 20, 35, 25, 15);

    int Luke = grade(95, 85, 75, 81, 75, 5, 20, 35, 25, 15);

    /*      Calls gradePrint function in grades.c to comput letter Grade         */

    printf("Adams, Tom");

    int Tomfinal = gradePrint(Tom);

    printf("Curry, Jane");

    int Janefinal = gradePrint(Jane);

    printf("Franklin, John");

    int Johnfinal = gradePrint(John);

    printf("George, Pat");

    int Patfinal = gradePrint(Pat);

    printf("Keen, Mary");

    int Maryfinal = gradePrint(Mary);

    printf("Kraft, Martin");

    int Martinfinal = gradePrint(Martin);

    printf("Martin, James");

    int Jamesfinal = gradePrint(James);

    printf("Oakley, Ann");

    int Annfinal = gradePrint(Ann);

    printf("Smith, Luke");

    int LukeFinal = gradePrint(Luke);

    return 0;
}
