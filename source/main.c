#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	int hours;
	float hourlyrate;
	float salary;

	printf("Enter # of hours worked (-1 to end): ");
	scanf_s("%d", &hours);

	while (hours != EOF)
	{
		printf("Enter hourly rate of the worker ($00.00): ");
		scanf_s("%f", &hourlyrate);

		if (hours>40){
			salary = (hours - 40)*hourlyrate*1.5 + 40 * hourlyrate;
		}
		else{
			salary = hours*hourlyrate;
		}

		printf("Salary is $%.2f\n\n", salary);

		printf("Enter # of hours worked (-1 to end):");
		scanf_s("%d", &hours);
	}
	system("pause");
	return 0;
}