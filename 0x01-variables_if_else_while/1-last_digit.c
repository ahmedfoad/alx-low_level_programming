#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/* betty style doc for function main goes there */
int main(void)
{



	int n, mod;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

        mod = n % 10; 
	
        printf("%d" , mod);

	return (0);

}
