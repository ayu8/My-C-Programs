#include <stdio.h>

#define pi 3.142
#define MyMacro(a,b) a*b

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
