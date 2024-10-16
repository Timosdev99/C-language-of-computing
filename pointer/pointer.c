/* Include the standard input/output header in this program */
 #include <stdio.h>



// declaring a float pointer 

float *ptr_float_pointer;

// the variable assigned to the float pointer 

float prt_variable;

// pointing ti the address of prt_variable
ptr_float_pointer = &prt_variable;

prt_variable = 56.77;




int main()
/* Declare a function called main that returns an integer
and takes no parameters */
{
int *integer_ptr;
/* Declare an integer pointer called integer_ptr */
float *float_ptr;
/* Declare a floating-point pointer called float_ptr */
int my_int = 17;
/* Declare an integer variable called my_int
and assign it the value 17 */
float my_float = 23.5;
/* Declare a floating-point variable called my_float
and assign it the value 23.5 */
integer_ptr = &my_int;
/* Assign the address of the integer variable my_int
to the integer pointer variable integer_ptr */
float_ptr = &my_float;
/* Assign the address of the floating-point variable my_float
to the floating-point pointer variable float_ptr */
*integer_ptr = *float_ptr;
/* Assign the contents of the location pointed to by
the floating-point pointer variable float_ptr
to the location pointed to by the integer pointer variable
integer_ptr (the value assigned will be truncated) */
printf ("%d\n\n", *integer_ptr);
/* Print the contents of the location pointed to by the
integer pointer variable integer_ptr */
return 0;
/* Return a value of 0, indicating successful execution,
to the operating system */
}


//converting pointer type into another pointer type

int *my_int_pointer;
double *my_double_float_pointer;

my_double_float_pointer = (double *) my_int_pointer

//