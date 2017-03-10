#include <stdlib.h>
#include <stdio.h> 
#include <unistd.h>
int sum; /* global variable */
main() {
int i; /* local variable */
sum = 0;
fork();
for (i=1; i<=5; i++) { /* iterate from 1 to 5 */
printf("The value of i is %d\n", i);
fflush (stdout); /* flush buffer */
sum += i;
}
printf ("The sum is %d\n", sum);
exit (0);
}