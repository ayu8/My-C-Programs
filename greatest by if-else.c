#include <stdio.h>
/*int main()
{
int a,b,c,d,max1,max2,max;
scanf("%d%d%d%d", &a, &b, &c, &d);
if (a>b)
max1 = a;
else
max1 = b;
if (c>d)
max2 = c;
else
max2 = d;
if (max1>max2)
max = max1;
else
max = max2;
printf(max);
return 0;
}
*/

int main()
{
int a,b,c,d;
scanf("%d%d%d%d", &a, &b, &c, &d);

if (a>b && a>c && a>d)
printf("%d is the greatest\n", a);

if (b>a && b>c && b>d)
printf("%d is the greatest\n", b);

if (c>a && c>b && c>d)
printf("%d is the greatest\n", c);

if (d>a && d>b && d>c)
printf("%d is the greatest\n", d);
return 0;
}

