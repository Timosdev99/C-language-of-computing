#include <stdio.h>
#define ARRAY_SIZE 5000
#define DELETED 0
int sieve[ARRAY_SIZE];

int main ()
{
printf ("Results of Sieve of Erastosthenes:\n\n");
fill_sieve();
delete_nonprimes();
print_primes();
}

fill_sieve ()
{
int index;
for (index = 2; index < ARRAY_SIZE; index++)
sieve[index] = 1;
}

delete_nonprimes ()
{
int index;
for (index = 2; index < ARRAY_SIZE; index++)
{
if (sieve[index] != DELETED)
delete_multiples_of_prime (index);
}
}

delete_multiples_of_prime (int prime)
{
int index, multiplier = 2;
for (index = prime * multiplier; index < ARRAY_SIZE; index = prime * multiplier++)
sieve[index] = DELETED;
}

print_primes ()
{
int index;
for (index = 2; index < ARRAY_SIZE; index++)
{
if (sieve[index] != DELETED)

printf ("%d ", index);
}
printf("\n\n");
}
