// atof Converts an ASCII string to its floating-point equivalent; for example, converts
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
double my_value;
char my_string[] = "+1776.23";
my_value = atof(my_string);
printf("%f\n", my_value);
return 0;
}

//atoi Converts an ASCII string to its integer equivalent; for example, converts ‘-23.5’
//to the value -23.
int my_value;
char my_string[] = "-23.5";
my_value = atoi(my_string);
printf("%d\n", my_value);
// atol Converts an ASCII string to its long integer equivalent;
long my_value;
char my_string[] = "+2000000000";
my_value = atol(my_string);
printf("%ld\n", my_value);
// strcat Concatenates two strings: that is, joins them together into one string. Example:
char string1[50] = "Hello, ";
char string2[] = "world!\n";
strcat (string1, string2);
printf (string1);
 
 // strcmp Compares two strings and returns a value that indicates which string comes
//first alphabetically. Example:
int comparison;
char string1[] = "alpha";
char string2[] = "beta";
comparison = strcmp (string1, string2);
printf ("%d\n", comparison);

//strcpy Copies a string into a string variable. Example:
char dest_string[50];
char source_string[] = "Are we not men?";
/* Example 1 */
strcpy (dest_string, source_string);
printf ("%s\n", dest_string);
/* Example 2 */
strcpy (dest_string, "Are we having fun yet?");
printf ("%s\n", dest_string);

// strlen Returns an integer that gives the length of a string in characters
int string_length
char my_string[] = "fnord";
string_length = strlen (my_string);
printf ("%d\n", string_length);


/* strncat Works like strcat, but concatenates only a specified number of characters.
The example below displays the string ‘Hello, world! Bye’.*/
char string1[50] = "Hello, world! ";
char string2[] = "Bye now!";
strncat (string1, string2, 3);
printf ("%s\n", string1);
/* strncmp Works like strcmp, but compares only a specified number of characters of
both strings. The example below displays ‘0’, because ‘dogberry’ and ‘dogwood’ are
identical for their first three characters.*/
int comparison;
char string1[] = "dogberry";
char string2[] = "dogwood";
comparison = strncmp (string1, string2, 3);
printf ("%d\n", comparison);
/*strncpy Works like strcpy, but copies only a specified number of characters. The
example below displays the string ‘Are we’, because only the first six characters of
source_string are being copied into dest_string.*/
char dest_string[50];
char source_string[] = "Are we not men?";
strncpy (dest_string, source_string, 6);
printf ("%s\n", dest_string);
