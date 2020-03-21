/*
function practice 1
add two numbers function
*/

#include <stdio.h>

int sumfunc(int, int);

void main()
{
	int num1, num2, sum;

	printf("Please enter the first number: ");
	scanf_s("%d", &num1);

	printf("Please enter the second number: ");
	scanf_s("%d", &num2);

	sum = sumfunc(num1, num2);

	printf("The sum of two numbers is: %d",sum);

	_flushall();
	getchar();
	_flushall();
	getchar();
}

int sumfunc(int a, int b)
{
	int sum;
	sum = a + b;
	return sum;
}