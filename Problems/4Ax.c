#include<stdio.h>
main(){
char a;
// set character a
printf("Enter the character : ");
scanf("%c",&a);
if(a>=65 && a<=90)
printf("\nIt is an alphabetic character");
// it is alphabetic
else if(a>=97 && a<=122)
printf("\nIt is an alphabetic character");
else if(a>=48 && a<=57)
// is it a number
printf("\nIt is a number");
else
// else you entered a special character
printf("\nIt is a special character");
} 
