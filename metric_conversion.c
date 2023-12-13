#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

void continuance();
int decimal(int diff);

int main()
{

	int unit1, unit2;
	double out, value;
	char metric[7][4] = {"mm", "cm", "dm", "m", "dam", "hm", "km"};
	//char imperial[4][4] = {"in", "ft", "yd", "mi"};
    while (1)
	{
		printf("1:mm\n2:cm\n3:dm\n4:m\n5:dam\n6:hm\n7:km\n");
		//printf("\n8:in\n9:ft\n10:yd\n11:mi\n");
		
		printf("\nInsert value:\n");
		scanf("%lf", &value);

		printf("\nInsert unit to convert from:\n");
		scanf("%d", &unit1);

		printf("\nInsert unit to convert to:\n");
		scanf("%d", &unit2);
		if (unit1 > 11 || unit1 < 0 ||
			unit2 > 11 || unit2 < 0)
		{
			printf("Invalid input");
			system("sleep 1");
			system("clear");
			continue;
		}

		if (unit1 < unit2)
			out = value / decimal(unit2 - unit1);
		else
			out = value * decimal(unit1 - unit2);;
		printf("\n%lf%s = %lf%s\n\n", value, metric[unit1-1], out, metric[unit2-1]);

		continuance();
	}
}

int decimal(int diff)
{
	int i = 0;
	int dec = 1;
	while (i < diff)
	{
		dec *= 10;
		i++;
	}
	return (dec);
}

void continuance()
{
	int input;
	while(1)
	{
		printf("Proceed with another conversion?\n");
		printf("-press 1 to proceed\n");
		printf("-press 0 to end program\n");
		scanf("%d", &input);
		system("clear");

		if (input==1)
			break;
		else if (input==0)
			exit(0);
		else
		{
			system("clear");
			printf("Invalid Input\n");
		}
	}
}
