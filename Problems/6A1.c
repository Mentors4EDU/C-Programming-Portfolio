#include<stdio.h>
int main()
{
int arr[4]; //form array
printf("\n enter 4 digits : "); // print digits
for(int i=0;i<4;i++){
   scanf("%d",&arr[i]);
}
for(int i=0;i<4;i++){
   switch(arr[i]){ // create columns
       case 1:
           printf("one ");
           break;
   case 2:
           printf("TWO ");
           break;
           case 3:
           printf("three ");
           break;
           case 4:
           printf("four ");
           break;
           case 5:
           printf("five ");
           break;
           case 6:
           printf("six ");
           break;
           case 7:
           printf("seven ");
           break;
           case 8:
           printf("eight ");
           break;
           case 9:
           printf("nine "); // for printing numbers
           break;
           default:
           printf(" ");
           break;
   }
}

   return 0;
}
