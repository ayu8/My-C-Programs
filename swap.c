#include <stdio.h>

int temp;
//void swap(int, int);
void swap(int *, int *);

int main()
{
	int a,b;
	printf("Enter two numbers to be swapped:\n");
	
	scanf("%d%d", &a, &b);
	printf("\nA = %d and B = %d", a, b);
	
	//swap(a, b);
	
	swap(&a, &b);
	
	printf("\nAfter swapping, A = %d and B = %d", a, b);
	
	// This is returning the same value, not swapped ones bcoz here, a and b are local to main() 
	// While in swap(int a, int b), those a and b are local to that only
	return 0;
}

void swap(int *a, int *b)
{
	temp = *a;
	*a = *b;
	*b = temp;
	//printf("\nAfter swapping, A = %d and B = %d", a, b);
}
