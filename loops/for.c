#include <stdio.h>
#define MAX_INT 500
#define TRUE 1
#define FALSE 0
int main ()
{
int poss_prime;
for (poss_prime = 2; poss_prime <= MAX_INT; poss_prime++)
{
if (prime(poss_prime))
{
printf ("%d ", poss_prime);
}
}

printf("\n\n");
return 0;
}
prime (int poss_prime) /* check whether poss_prime is prime */
{
int poss_factor;
for (poss_factor = 2; poss_factor <= poss_prime/2; poss_factor++)
{
if (poss_prime % poss_factor == 0)
{
return (FALSE);
}
}
return (TRUE);
}
