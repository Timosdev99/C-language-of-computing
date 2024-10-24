/********************************************************/
/* */
/* Demonstration of character utility functions */
/* */
/********************************************************/
#include <stdio.h>
#include <ctype.h>
#define allchars ch = 0; isascii(ch); ch++
int main () /* A criminally long main program! */
{
char ch;
printf ("\n\nVALID CHARACTERS FROM isgraph:\n\n");
for (allchars)
{
if (isgraph(ch))
{
printf ("%c ",ch);
}
}
printf ("\n\nVALID CHARACTERS FROM isalnum:\n\n");
for (allchars)
{
if (isalnum(ch))
{
printf ("%c ",ch);
}
}
printf ("\n\nVALID CHARACTERS FROM isalpha:\n\n");
for (allchars)
{
if (isalpha(ch))
{
printf ("%c ",ch);
}
}
printf ("\n\nVALID CHARACTERS FROM isupper:\n\n");
for (allchars)
{
if (isupper(ch))

{
printf ("%c ",ch);
}
}
printf ("\n\nVALID CHARACTERS FROM islower:\n\n");
for (allchars)
{
if (islower(ch))
{
printf ("%c ",ch);
}
}
printf ("\n\nVALID CHARACTERS FROM isdigit:\n\n");
for (allchars)
{
if (isdigit(ch))
{
printf ("%c ",ch);
}
}
printf ("\n\nVALID CHARACTERS FROM isxdigit:\n\n");
for (allchars)
{
if (isxdigit(ch))
{
printf ("%c ",ch);
}
}
printf ("\n\nVALID CHARACTERS FROM ispunct:\n\n");
for (allchars)
{
if (ispunct(ch))
{
printf ("%c ",ch);
}
}
printf ("\n\n");
return 0;
}
