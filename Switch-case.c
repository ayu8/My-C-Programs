//using else-if statements

#include <stdio.h>

int main()
{
	char ch;
	printf("Enter a colour:\n");

	scanf("%c", &ch);

	if (ch == 'R' || ch == 'r')
		printf("Red Colour\tPlease STOP!\n");

	else if (ch == 'Y' || ch == 'y')
		printf("Yellow Colour\tBe READY\n");

	else if (ch == 'G' || ch == 'g')
		printf("Green Colour\tGO!!!\n");

	else
		printf("Wrong Input\n");

	return 0;
}

//using SWITCH statement

/*int main()
{
	char ch;
	printf("Enter a colour:\n");

	scanf("%c", &ch);
	switch(ch)
	{
		case 'R': printf("Red Colour\tPlease STOP!\n");
        		  break;
		case 'Y': printf("Yellow Colour\tBe READY\n");
			  break;
		case 'G': printf("Green Colour\tGO!!!\n");
            		  break;
		default: printf("Wrong Input!\n");
	}
	return 0;
}*/