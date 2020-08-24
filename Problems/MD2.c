// Kamal, Andrew "Here I am"
#include<stdio.h>
int main()
{
   int i, even=0, odd=0; // set even and odd integers
   int num; // read as numericals
   while(1)
   {
       num++;
       printf("Enter a number (999 to quit): ");  // enter number and quit message
       scanf("%d", &num); // scan to see if you entered
       if (num==999){ //999 or break
           break;
       }
       if(num%2==0){ // see if the number is even
           even += 1;
       }
       else{ // start odd logic
           odd += 1; // else it is odd
       }
   }
   printf("You entered %d even numbers\n",even); // print message
   printf("You entered %d odd numbers\n" ,odd); // print message
   system("PAUSE");
   return 0; // run
}
