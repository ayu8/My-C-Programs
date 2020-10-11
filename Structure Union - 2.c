#include <stdio.h>
#include <string.h>
#include<stdlib.h>

struct emp
{
	int eid;
	char ename[25];
	float esal;
};
/*
union emp1
{
	int eid;
	char ename[25];
	float esal;
};
*/

int main()
{
	struct emp *e1;
	
	e1=malloc(1*sizeof(struct emp));

	
	scanf("%d", &e1->eid);
	scanf("\n%s", e1->ename);
	scanf("\n%f", &e1->esal);
	
	printf("%d", e1->eid);
	printf("\n%s",e1->ename);
	printf("\n%0.2f",e1->esal);
	
	
	return 0;
}
