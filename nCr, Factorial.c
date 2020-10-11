#include <stdio.h>

/*int f, i;
int fact(int);

int main()
{
	int n, r, num, den, ans;
	
	printf("Enter N and R values:\n");
	scanf("%d%d", &n, &r);
	num = fact(n);
	den = fact(r) * fact(n-r);
	ans = num/den;
	
	printf("\nnCr of given n=%d and r=%d is %d", n, r, ans);
	
return 0;
}

int fact(int n)
{
	int f = 1;
	for (i=1; i<=n; i++)
	{
		f = f*i;
	}
	
	return(f);
}
*/
int ans, i, n, a;

int main()
{
	printf("Enter N and R values:\n");
	scanf("%d", &a);
	ans = fact(a);
	printf("\nAnswer: %d", ans);
}

int fact(int n)
{
	for (i=1; i<=n; i++)
	n = n*i;
	
	if (n==1)
	return(1);
	else
	return(n*fact(n));
}
