/*
Lab26
ex 23
*/
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

struct employee_data
{
	char employee_name[80];
	int employee_ID;
	int position_code;
	int years_exp;
	double salary;
	double bonus;
};

employee_data data_input()
{
	employee_data epdata;

	printf("Please enter employee name: ");
	gets_s(epdata.employee_name);

	printf("Please enter employee ID: ");
	scanf_s("%d", &epdata.employee_ID);

	printf("Please enter position code: ");
	scanf_s("%d", &epdata.position_code);

	printf("Please enter years experience: ");
	scanf_s("%d", &epdata.years_exp);

	printf("Please enter salary: ");
	scanf_s("%lf", &epdata.salary);

	return epdata;
}

float bonus_cal(employee_data);


void data_printout(employee_data, float);


void main()
{
	employee_data epdata;
	float bonus;
	epdata = data_input();
	bonus = bonus_cal(epdata);
	data_printout(epdata, bonus);

	_flushall();
	getchar();
	_flushall();
	getchar();
}

float bonus_cal(employee_data epdata)
{
	float bonus;

	switch (epdata.position_code)
	{
	case 1:
		bonus = epdata.salary;
		break;
	case 2:
		bonus = 2 * epdata.salary;
		if (bonus > 1500)
			bonus = 1500;
		break;
	case 3:
		bonus = 1.5 * epdata.salary;

		break;
	default:
		break;
	}

	if (epdata.years_exp < 5 && bonus>400)
		bonus = 400;
	else if (epdata.years_exp > 20)
		bonus = bonus * 1.1;
	return bonus;
}

void data_printout(employee_data epdata, float bonus)
{
	//printf("Employee name: %s\n", epdata.employee_name);
	//printf("Employee number: %d\n", epdata.employee_ID);
	//printf("Employee weekly pay rate: %0.2lf\n", epdata.salary);
	//printf("Employee position code: %d\n", epdata.position_code);
	//printf("Employee years of experiene: %d\n", epdata.years_exp);

	printf("\n\nBonus for %s year is $%0.2lf", epdata.employee_name, bonus);
}
