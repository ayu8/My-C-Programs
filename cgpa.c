#include <stdio.h>

struct marx
{
	int cat1, cat2, fat, stdid, sage, total, da1, da2 da3;
	char grade, name[10];
};

struct marx std;

void getData()
{
	printf("Enter Student's ID:\t");
	scanf("%d", &std.stdid);
	
	printf("Enter Student's Name:\t");
	scanf("%s", std.name);
	
	printf("Enter Student's age:\t");
	scanf("%d", &std.sage);
	
	printf("Enter CAT1 marks:\t");
	scanf("%d", &std.cat1);
	
	printf("Enter CAT2 marks:\t");
	scanf("%d", &std.cat2);
	
	printf("Enter FAT marks:\t");
	scanf("%d", &std.fat);
	
	printf("Enter DA1 marks:\t");
	scanf("%d", &std.da1);
	
	printf("Enter DA2 marks:\t");
	scanf("%d", &std.da2);
	
	printf("Enter DA3 marks:\t");
	scanf("%d", &std.da3);
}

void findmarx()
{
	std.total = (std.cat1+std.cat2)*0.3 + std.da1 + std.da2 + std.da3 + (std.fat*0.4);
	
	if (std.total > 90)
		std.grade = 'S';
	else if (std.total<=90 && std.total>80)
		std.grade = 'A';
	else if (std.total<=80 && std.total>70)
		std.grade = 'B';
	else if (std.total<=70 && std.total>60)
		std.grade = 'C';
	else if (std.total<=60 && std.total>50)
		std.grade = 'D';
	else if (std.total<=50 && std.total>40)
		std.grade = 'E';
	else
		std.grade = 'F';
}

void putData()
{
	printf("\n%d\t%s\t%d\t%d\t%d\t%d\t%d\t%c", std.stdid, std.name, std.sage, std.cat1, std.cat2, std.fat, std.total, std.grade);
}

int main()
{
	getData();
	findmarx();
	putData();
}
