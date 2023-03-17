#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)

{
    int n, mod;
    srand(time(0));
    n = rand() - RAND_MAX / 10;
    mod = n % 10;
    
        
    if (mod > 5)

    {
        printf("Last digit of %d is %d and is greater than 5\n", n, mod);
    }

    if (mod = 0)

    {
        printf("Last digit of %d is %d and is 0\n", n, mod);
    }



    if (mod < 6 && mod != 0)

    {
        printf("Last digit of %d is %d and is less than 6 and not 0\n", n, mod);
    }

    return (0);
}

