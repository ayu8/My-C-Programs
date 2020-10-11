#include <stdio.h>

int n;

struct Bill
{
	int Cno, Cpmr, Ccmr, Ctu;
	float Cbill;
	char Cname[10], Cadrs[10];
};

struct Bill cnsmr[10];

void getData()
{
	for (int i=0; i<n; i++)
	{
		printf("Enter the Consumer number:\t");
		scanf("%d", &cnsmr[i].Cno);
		printf("\nEnter Consumer Name:\t");
		scanf("%s", cnsmr[i].Cname);
		printf("\nEnter Consumer's address:\t");
		scanf("%s", cnsmr[i].Cadrs);
		printf("\nEnter Consumer Presvious Meter Readng:\t");
		scanf("%d", &cnsmr[i].Cpmr);
		printf("\nEnter Consumer Current Meter Readng:\t");
		scanf("%d", &cnsmr[i].Ccmr);
	}
	
}

void putData()
{
	for (int i=0; i<n; i++)
	{
		printf("\n%d\t%s\t%s\t%d\t%d\t%d\t%0.2f\n", cnsmr[i].Cno, cnsmr[i].Cname, cnsmr[i].Cadrs, cnsmr[i].Cpmr, cnsmr[i].Ccmr, cnsmr[i].Ctu, cnsmr[i].Cbill);
	}
}

void computebill()
{
	for (int i=0; i<n; i++)
	{
		cnsmr[i].Ctu = cnsmr[i].Ccmr - cnsmr[i].Cpmr;
	
		if (cnsmr[i].Ctu <= 50)
			cnsmr[i].Cbill = cnsmr[i].Ctu*1.50;
		else if (cnsmr[i].Ctu > 50 && cnsmr[i].Ctu <= 100)
			cnsmr[i].Cbill = (50*1.50) + (cnsmr[i].Ctu-50)*2.00;
		else if (cnsmr[i].Ctu > 100 && cnsmr[i].Ctu <= 200)
			cnsmr[i].Cbill = (50*1.50) + (50*2.00) + (cnsmr[i].Ctu-100)*2.50;
		else if (cnsmr[i].Ctu > 200 && cnsmr[i].Ctu <= 300)
			cnsmr[i].Cbill = (50*1.50) + (50*2.00) + (100*2.50) + (cnsmr[i].Ctu-200)*3.00;
		else
			cnsmr[i].Cbill = (50*1.50) + (50*2.00) + (100*2.50) + (100*3.00) + (cnsmr[i].Ctu-300)*4.00;
	}
}

int main()
{
	printf("Number of Consumers:\t");
	scanf("%d", &n);
	
	getData();
	computebill();
	putData();
}
