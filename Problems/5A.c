// Kamal, Andrew
#include<stdio.h>
void changeValues(int*,float*,char*);
// change values sample
int main()
{int n=101; // initialize 101
float a=103;
char c='c'; // set c as the character
printf("before n=%d, a=%.2f, c=%c\n",n,a,c);
changeValues(&n,&a,&c); // change the values
printf("after n=%d, a=%.2f, c=%c\n",n,a,c);
return 0;
}
void changeValues(int* n,float* a,char* c)
{*n=*n+1; // adds 1 to the value of 101
*a=*a+2; // Adds 2 to the value of 101
*c=*c+4; // adds 4 to the value of 101
}
// printing 101+1 and 101+4
// c+4 characters is c d e f g so g is printed
