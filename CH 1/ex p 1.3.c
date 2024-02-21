/*If the marks obtained by a student in five different subjects are input through the keyboard , write a program to find out the aggregate 
marks and persentage marks obtained by the student. Assume that the maximum marks that can be obtained by a student in each subject
is 100.
5/25/2023
Alokesh Maitra*/

#include <stdio.h>
int main () {
    int m1, m2, m3, m4, m5, agg;
    float per;
    printf("Enter your marks in five subjects: ");
    scanf("%d %d %d %d %d", &m1, &m2, &m3, &m4, &m5);
    agg = m1 + m2 + m3 + m4 + m5 ;
    per = agg /5;
    printf("\nHere is your aggrigate marks : %d", agg);
    printf("\nHere is your total percentage of marks: %f", per);
    return 0;
}