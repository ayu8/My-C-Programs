#include <stdio.h>
#include <string.h>

// USING NORMAL VARIABLES

/*struct emp
{
	int eid;
	char ename[25];
	float esal;
};
*/
union emp1
{
	int eid;
	char ename[25];
	float esal;
};

int main()
{
	union emp1 e1, e2, e3;
	scanf("%d", &e1.eid);
	scanf("\n%s", &e1.ename);
	scanf("\n%f", &e1.esal);
	scanf("\n%d%s%f", &e2.eid, &e2.ename, &e2.esal);
	scanf("\n%d%s%f", &e3.eid, &e3.ename, &e3.esal);
	
	printf("\nThe salaries of all employees are\t%0.2f, %0.2f, %0.2f", (e1).esal, (e2).esal, (e3).esal);
	
	return 0;
}

