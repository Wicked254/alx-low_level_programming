#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main-block
 * Description:If the value is positive or negative
 * return 0 (Success)
 */
int main(void)

{

		int n;



			srand(time(0));

				n = rand() - RAND_MAX / 2;

			    if (n>0)
			       printf("%d is positive\n", n)
			    else if (n<0)
    			       printf("%d is negative\n", n)
			    else
			       printf("d is zero\n", n)


					return (0);

}
