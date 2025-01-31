#include <stdio.h>
 void swap(int* a, int* b) ;
int main() 
{ 
int a = 10, b = 20; 
printf("Values before swap function are: %d, %d\n", 
		a, b); 
swap(&a, &b); 
printf("Values after swap function are: %d, %d", 
		a, b); 
return 0; 
}
void swap(int* a, int* b) 
{ 
int temp; 
temp = *a; 
*a = *b; 
*b = temp; 
printf("Values in swap function are: %d, %d", 
		*a,* b); 

} 
