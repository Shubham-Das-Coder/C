// A void pointer is a pointer which has no associated data type with it.
// It can point to any data of any data type and can be associated to any type.
// We cannot dereference a void pointer.
#include <stdio.h>
int main()
{
    int n = 10;
    // Varaiable n which is initialized to value 10
    void *ptr = &n;
    // A void pointer which has no associated data type.
    // Although it is containing the address of variable n, but we have declared the pointer as a void pointer.
    // This pointer has no associated data type, so it can point to any type of data.
    // That is why we are initializing it with the address of the variable.
    printf("%d", *(int *)ptr);
    // We are using the printf function.
    // The pointer has been type casted first, and then the dereferencing is happening.
    // Type casting of the pointer means we are changing the type of the pointer.
    // The pointer is a void pointer, so we need to type cast it before using it.
    // It can be type casted to any type, so we are type casting it to an integer.
    // Now this pointer becomes an integer pointer, and now we can dereference it without any problem.
    // After dereferencing, the output will be 10.
    // Because it conteins the address of variable n, and we dereference this pointer.
    return 0;
}