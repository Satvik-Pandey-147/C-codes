#include <stdio.h>
int main()
{
	int Var = 10;
	int* ptr = &Var;
	printf("Value of Var = %d\n", *ptr);

// The output of this line may be different in different
	// runs even on same machine.

	printf("Address of Var = %p\n", ptr);

	// We can also use ptr as lvalue (Left hand
	// side of assignment)

	*ptr = 20; // Value at address is now 20

	printf("After doing *ptr = 20, *ptr is %d\n", *ptr);
    printf("%d\n",Var);
	return 0;
}