#include <stdio.h>
 
int main () {

   int n[ 5 ]; /* n is an array of 5 integers */
   int i,j;
 
   /* initialize elements of array n to 0 */         
   for ( i = 0; i < 5; i++ ) {
      n[ i ] = i + 5; /* set element at location i to i + 100 */
   }
   
   /* output each array element's value */
   for (j = 0; j < 5; j++ ) {
      printf("Element[%d] = %d\n", j, n[j] );
   }
 
   return 0;
}
