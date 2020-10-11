#include <stdio.h>

int main()
{
	int a=0,b=1,c,n;
	printf("Enter ending term: \n");
	scanf("%d", &n);
	c = a+b;
	printf("%d\t", a);
	printf("%d\t", b);
	while (c<=n)
	{
		printf("%d\t", c);
		a = b;
		b = c;
		c = a+b;
	}
return 0;
}
