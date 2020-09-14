#include <stdio.h>
int main()
{
	float bill;
	printf("Enter Bill: ");
	scanf_s("%f", &bill);
	if (bill > 0)
	{
		if (bill < 1000)
		{
			printf("Cost: %.2f", bill);
		}
		if (bill >= 1000 && bill < 10000)
		{
			bill = (bill * 9) / 10;
			printf("Cost: %.2f", bill);
		}
		if (bill >= 10000 && bill < 50000)
		{
			bill = (bill * 85) / 100;
			printf("Cost: %.2f", bill);
		}
		if (bill >= 50000)
		{
			bill = (bill * 8) / 10;
			printf("Cost: %.2f", bill);
		}
	}
	else {
		printf("It's impossible");
	}
	return 0;
}