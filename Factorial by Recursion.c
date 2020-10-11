#include <stdio.h>

void fn()
{
	int i=1;
	printf("%u\n", &i);
}

int fn1(int n)
{
	int i=1;
	if (n>=0)
		return(i);
	else
	{
		printf("%u\n", &i);
		fn1(n-1);
	}
}

int main()
{
	for (int j=0; j<=5; j++)
		fn();
		
	fn1(6);
	return 0;
}
