*/
#include <stdio.h>
int main()
{
char one, two, three, four, five; // set characters
int number;

printf("Input Number: ");
scanf("%d",&number);
if (number == '1')
number = one; // set variable for one
if (number == '2')
number = two; // set variable for two
else if (number == '3')
number = three; // so on
else if (number == '4')
number = four;
else if (number == '5')
number = five; 
// for typed numbers
printf("you entered the number %c", number);

return 0;
