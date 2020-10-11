#include <stdio.h>

/*#define pi 3.142
#define MyMacro(a,b) (a)*(b)

int main()
{
	float R, A, C;
	printf("Radius: ");
	scanf("%f", &R);
	A = pi*R*R;
	C = pi*2*R;
	printf("\nArea is : %4.2f", A);
	printf("\nCircumference is : %4.2f", C);
	printf("\nThe Output of Macro is : %d", MyMacro(5,6));
	return 0;
}
*/
//in case of functions, system jumps to the function code from the main function where function is being called
//but in case of macros, macro_call from the main function won't jump, it will just replace it with the thing which is defined in macro
//Macro for Swapping

#define Swap(a,b) int t=a; a=b; b=t

int main()
{
	int a,b;
	printf("\nEnter a and b values: ");
	scanf("%d%d", &a, &b);
	printf("\nBefore swapping, A = %d and B = %d", a,b);
	Swap(a,b);
	printf("\nAfter swapping, A = %d and B = %d", a,b);
	return 0;
}
