#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

void continuance();

int main()
{

	int unit1, unit2, cont=1;
	double value;
	
    while(1)
	{
		printf("1:mm\n2:cm\n3:dm\n4:m\n5:dam\n6:hm\n7:km\n");
		
		printf("\nInsert value:\n");
		scanf("%lf", &value);

		printf("\nInsert unit to convert from:\n");
		scanf("%d", &unit1);

		printf("\nInsert unit to convert to:\n");
		scanf("%d", &unit2);

		if(unit1==1 && unit2==2)
		{
			printf("\n%.3lf mm = %.3lf cm\n", value, value/10);
		}

		else if(unit1==1 && unit2==3)
		{
			printf("\n%.3lf mm = %.3lf dm\n", value, value/100);
		}
		
		else if(unit1==1 && unit2==4)
		{
			printf("\n%.3lf mm = %.3lf m\n", value, value/1000);
		}
		
		else if(unit1==1 && unit2==5)
		{
			printf("\n%.3lf mm = %.3lf dam\n", value, value/10000);
		}
		
		else if(unit1==1 && unit2==6)
		{
			printf("\n%.3lf mm = %.3lf hm\n", value, value/100000);
		}
		
		else if(unit1==1 && unit2==7)
		{
			printf("\n%.3lf mm = %.3lf km\n", value, value/1000000);
		}
		
		else if(unit1==2 && unit2==1)
		{
			printf("\n%.3lf cm = %.3lf mm\n", value, value*10);
		}

		else if(unit1==2 && unit2==3)
		{
			printf("\n%.3lf cm = %.3lf dm\n", value, value/10);
		}
		
		else if(unit1==2 && unit2==4)
		{
			printf("\n%.3lf cm = %.3lf m\n", value, value/100);
		}
		
		else if(unit1==2 && unit2==5)
		{
			printf("\n%.3lf cm = %.3lf dam\n", value, value/1000);
		}
		
		else if(unit1==2 && unit2==6)
		{
			printf("\n%.3lf cm = %.3lf hm\n", value, value/10000);
		}
		
		else if(unit1==2 && unit2==7)
		{
			printf("\n%.3lf cm = %.3lf km\n", value, value/100000);
		}
		
		else if(unit1==3 && unit2==1)
		{
			printf("\n%.3lf dm = %.3lf mm\n", value, value*100);
		}
		
		else if(unit1==3 && unit2==2)
		{
			printf("\n%.3lf dm = %.3lf cm\n", value, value*10);
		}
		
		else if(unit1==3 && unit2==4)
		{
			printf("\n%.3lf dm = %.3lf m\n", value, value/10);
		}
		
		else if(unit1==3 && unit2==5)
		{
			printf("\n%.3lf dm = %.3lf dam\n", value, value/100);
		}
		
		else if(unit1==3 && unit2==6)
		{
			printf("\n%.3lf dm = %.3lf hm\n", value, value/1000);
		}
		
		else if(unit1==3 && unit2==7)
		{
			printf("\n%.3lf dm = %.3lf km\n", value, value/10000);
		}
		
		else if(unit1==4 && unit2==1)
		{
			printf("\n%.3lf m = %.3lf mm\n", value, value*1000);
		}
		
		else if(unit1==4 && unit2==2)
		{
			printf("\n%.3lf m = %.3lf cm\n", value, value*100);
		}
		
		else if(unit1==4 && unit2==3)
		{
			printf("\n%.3lf m = %.3lf dm\n", value, value*10);
		}
		
		else if(unit1==4 && unit2==5)
		{
			printf("\n%.3lf m = %.3lf dam\n", value, value/10);
		}
		
		else if(unit1==4 && unit2==6)
		{
			printf("\n%.3lf m = %.3lf hm\n", value, value/100);
		}
		
		else if(unit1==4 && unit2==7)
		{
			printf("\n%.3lf m = %.3lf km\n", value, value/1000);
		}
		
		else if(unit1==5 && unit2==1)
		{
			printf("\n%.3lf dam = %.3lf mm\n", value, value*10000);
		}
		
		else if(unit1==5 && unit2==2)
		{
			printf("\n%.3lf dam = %.3lf cm\n", value, value*1000);
		}
		
		else if(unit1==5 && unit2==3)
		{
			printf("\n%.3lf dam = %.3lf dm\n", value, value*100);
		}
		
		else if(unit1==5 && unit2==4)
		{
			printf("\n%.3lf dam = %.3lf m\n", value, value*10);
		}
		
		else if(unit1==5 && unit2==6)
		{
			printf("\n%.3lf dam = %.3lf hm\n", value, value/10);
		}
		
		else if(unit1==5 && unit2==7)
		{
			printf("\n%.3lf dam = %.3lf km\n", value, value/100);
		}

		else if(unit1==6 && unit2==1)
		{
			printf("\n%.3lf hm = %.3lf mm\n", value, value*100000);
		}
		
		else if(unit1==6 && unit2==2)
		{
			printf("\n%.3lf hm = %.3lf cm\n", value, value*10000);
		}
		
		else if(unit1==6 && unit2==3)
		{
			printf("\n%.3lf hm = %.3lf dm\n", value, value*1000);
		}
		
		else if(unit1==6 && unit2==4)
		{
			printf("\n%.3lf hm = %.3lf m\n", value, value*100);
		}
		
		else if(unit1==6 && unit2==5)
		{
			printf("\n%.3lf hm = %.3lf dam\n", value, value*10);
		}
		
		else if(unit1==6 && unit2==7)
		{
			printf("\n%.3lf hm = %.3lf km\n", value, value/10);
		}
		
		else if(unit1==7 && unit2==1)
		{
			printf("\n%.3lf km = %.3lf mm\n", value, value*1000000);
		}
		
		else if(unit1==7 && unit2==2)
		{
			printf("\n%.3lf km = %.3lf cm\n", value, value*100000);

		}
		
		else if(unit1==7 && unit2==3)
		{
			printf("\n%.3lf km = %.3lf dm\n", value, value*10000);
		}
		
		else if(unit1==7 && unit2==4)
		{
			printf("\n%.3lf km = %.3lf m\n", value, value*1000);

		}
		
		else if(unit1==7 && unit2==5)
		{
			printf("\n%.3lf km = %.3lf dam\n", value, value*100);
		}
		
		else if(unit1==7 && unit2==6)
		{
			printf("\n%.3lf km = %.3lf hm\n", value, value*10);
		}
		
		else if(unit1==unit2)
		{
			printf("\n%.3lf = %.3lf\n", value, value);
		}
		
		else if(unit1>7 || unit2>7 || unit1<1 || unit2<1)
		{
			printf("\nInvalid input\n");
		}

		continuance(cont);
	}

	return 0;

}

void continuance(int input)
{
	while(1)
	{
		printf("\nProceed with another conversion?\n");
		printf("-press 1 to proceed\n");
		printf("-press 0 to end program\n");
		scanf("%d", &input);
		system("cls");

		if(input==0)
		{
			exit(0);
		}
		
		else if(input==1)
		{
			break;
		}
		
		else if(input!=1 && input!=0)
		{
			system("cls");
			printf("Invalid Input\n");
		}
	}
}
