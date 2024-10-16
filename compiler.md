# The Compiler 

When you compile a program, the compiler usually operates in an orderly sequence of
phases called passes
this is how a compiler works 
When you compile a program, the compiler usually operates in an orderly sequence of
phases called passes. The sequence happens approximately like this:
1. First, the compiler reads the source code, perhaps generating an intermediate code
(such as pseudo-code) that simplifies the source code for subsequent processing.
2. Next, the compiler converts the intermediate code (if there is any) or the original
source code into an object code file, which contains machine language but is not yet
executable. The compiler builds a separate object file for each source file. These are
only temporary and are deleted by the compiler after compilation.
3. Finally, the compiler runs a linker. The linker merges the newly-created object code
with some standard, built-in object code to produce an executable file that can stand
alone. 

## Error 
they are 2 main type of error 
1. Comppile time error - these s are errors caught by the compiler. They can be syntax errors, such
as typing fro instead of for, or they can be errors caused by the incorrect construction
of your program. For example, you might tell the compiler that a certain variable is
an integer, then attempt to give it a non-integer value
2. Run-time errors are errors that occur in a compiled and running program, sometimes
long after it has been compiled.
One kind of run-time error happens when you write a running program that does not
do what you intend.

## Typograhpical errors 
