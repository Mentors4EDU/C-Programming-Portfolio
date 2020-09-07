#include <stdio.h>
#include <string.h>
#define NSIZE 21
char assemble(int, char[], float, char[]); // call assembly
int main() //input main
{
    char name[NSIZE]; // call size
    int empID;
    float hours;
    char timeCard[51]; // time card
    printf("\nPlease enter floating number "); // print questions
    scanf("%f", &hours); //scan
    printf("\nPlease enter an integer ");
    scanf("%d", &empID);
    printf("Please enter the characTer:");
    scanf("%s", name);
    assemble (empID, name, hours, timeCard); // assemble
    printf("\n\nAfter assembling the input data for a single string"); // print
    puts(timeCard); // put time card
    printf("\n\n");
    return 0;
}
char assemble (int empID, char name[NSIZE], float hours, char timeCard[51] ) // set assembly
{
    sprintf(timeCard, " %d %s %4.2f hrs", empID, name, hours); // run
    return (timeCard[51]);
}
