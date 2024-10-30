#include <stdio.h>
#define SIZE1 3
#define SIZE2 3
#define SIZE3 3
int main ()
{
int fast, faster, fastest;
int my_array[SIZE1][SIZE2][SIZE3];
for (fast = 0; fast < SIZE1; fast++)
{
for (faster = 0; faster < SIZE2; faster++)
{
for (fastest = 0; fastest < SIZE3; fastest++)
{
my_array[fast][faster][fastest] = 0;
printf("my_array[%d][%d][%d] DONE\n", fast, faster, fastest);
}
}
}
printf("\n");
} 