/*
Feb 19,2020
*/

#include <stdio.h>
#include <math.h>
#include <string>
#include <conio.h>
#include <time.h>

void main()
{
	/*
	float num;
	double squarerootofNumber, absNum,powernum,ceilnum,roundnum,truncnum;
	

	printf("Please enter a number: ");
	scanf_s("%f", &num);

	squarerootofNumber = sqrt(num);
	absNum = fabs(num);
	powernum = pow(num, 3);
	ceilnum = ceil(num);
	roundnum = round(num);

	truncnum = floor(num);

	printf("\n\nThe square root of the number entered is: %0.2f", squarerootofNumber);
	printf("\n\nThe absolute value of the number entered is: %0.2f", absNum);
	printf("\n\nThe power to 3 of the number entered is: %0.2f", powernum);
	printf("\n\nThe rounded of the number entered is: %0.2f", roundnum);
	printf("\n\nThe ceil of the number entered is: %0.2f", ceilnum);
	printf("\n\nThe truncated of the number entered is: %0.2f", truncnum);
	*
	int x = 0;
	printf("\n%d", x || (x < 3) && (x > 1));

	_flushall();
	getchar();
	_flushall();
	getchar();
	//float var1;
	//var1 = 450.55;
	//printf("%7.1f", 450.55);//if print float variable, it would not round, if variable is double would round, if direct number would round

	//var1 = 79.3;
	//printf("\n%5.2f\n", var1);
	//var1 = 79.49;
	//printf("%6.1f\n", var1);

	//var1 = 79.495;
	//printf("%6.0f\n", var1);
	//printf("%0.1f\n", var1);
	//var1 = 450.55;
	//printf("%7.0f\n", var1);
	//var1 = 450.55;
	//printf("%4.4f\n", var1);
	//
	//printf("\nDATA TABLE\n");
	//printf("%10s%10s%10s", "Pressure", "Flow", "Density");
	//printf("\n");
	//printf("To convert %s to %s the\nconversion ", "PSI", "kPa");
	//printf("factor is:\n%5.4f", 6.895);
	//printf("\n");
	//printf("Seven divided by 3 is %-3d!!!", 7 / 3);
	//printf("\n is that the same as %+d???", 7 % 3);
	//printf("\n");
	//printf("the value of %3.0f minus %4.3f \n", 3.6213, 3.8);
	//printf("is %6.2f.\n", -0.1787);
	//printf("\n");
	//printf("Use \"escape characters\" for special characters\n");
	//printf("(very handy for \ttabs!)");
	//printf("\n");
	//printf("%-8s%-8s%-8s\n", "Volts", "Amps", "Watts\n");
	//printf("%-+8.2f%-+8.1f%-8.3f", 8.2, -1.8, 0.82);
	//getchar();

	*/
	//int num1, num2, difference;
	//std::string aa="world";

	//printf("Please enter a number: ");
	//scanf_s("%d", &num1);

	//printf("Please enter a number: ");
	//scanf_s("%d", &num2);

	//if (num1 == num2)
	//{
	//	printf("\nThe numbers entered are equal!!!");
	//}
	//else
	//{
	//	//int difference = abs(num1 - num2);
	//	difference = num1 - num2;
	//	if (difference < 0)
	//	{
	//		difference = difference * -1;
	//	}
	//	printf("\nThe numbers entered are not equal!!!\nThe difference is %d", difference);
	//}
	/*int a = 100;
	if (a > 10)
		printf("a>10,");
	else if (a > 20)
		printf("a>20,");
	else if (a == 100)
		printf("a==100");*/
	/*
	7
	*
	int a = 1, b = 3;
	if (a)
	{
		if (b--)
		{
			if ('0')
			{
				if (a = b)
				{
					printf("a is equal to b?\n");
				}
			}
		}
	}
	/*
	section2-12
	ex 10
	*
	float fsales, fcom;

	printf("Please enter the sales figure for an Employee: ");
	scanf_s("%f", &fsales);

	if (fsales < 10000)
	{
		fcom = fsales * 0.05;
	}
	else if (fsales < 20000)//fsales >= 10000 && 
	{
		fcom = fsales * 0.10;
	}
	else if ( fsales < 30000)//fsales >= 20000 &&
	{
		fcom = fsales * 0.15;
	}
	else
	{
		fcom = fsales * 0.2;
	}

	printf("The sales commission for the employee is: $%0.2f", fcom);
	printf("\nThank you, Come Again.");
	
	/*
	section2-13

	ex 11
	*
	float fowed, fpenalty, ftotal;
	int nloandue, nloanpaid,npastdue;

	printf("Please enter the amount owed? ");
	scanf_s("%f", &fowed);

	printf("Please enter the date loan due <1-365>? ");
	scanf_s("%d", &nloandue);

	printf("Please enter the date paid due <1-365>? ");
	scanf_s("%d", &nloanpaid);

	npastdue = nloanpaid - nloandue;

	if (npastdue <=30)
	{
		fpenalty = fowed * 0.05;
		if (fpenalty > 500)
		{
			fpenalty = 500;
		}
		
	}
	else if (npastdue <= 60)
	{
		fpenalty = fowed * 0.12;
		if (fpenalty > 750)
		{
			fpenalty = 750;
		}
	}
	else
	{
		fpenalty = fowed * 0.21;
		if (fpenalty > 1000)
		{
			fpenalty = 1000;
		}
	}
	ftotal = fowed + fpenalty;
	printf("\nYour penalty is $%0.2f", fpenalty);
	printf("\nThe total amount to be paid is $%0.2f", ftotal);
	/*
	section 2-24
	ex 11
	*
	float fradius,farea,fcircum,fdiameter;
	char csel;
	float fpi = 3.14159;

	printf("Please enter the radius of circle: ");
	scanf_s("%f", &fradius);

	printf("\n\tA - Area\n\tC - Circumference\n\tD - Diameter\n\tX - Exit\n");
	printf("Select ? ");
	scanf_s(" %c", &csel);
	//csel=getchar();

	switch (csel)
	{
	case 'A':
	case 'a':
		farea = fpi * fradius*fradius;
		printf("\nThe area of a circle with radius %0.4f is %0.4f", fradius, farea);
		break;
	case 'C':
	case 'c':
		fcircum = fpi * 2*fradius;
		printf("\nThe circumference of a circle with radius %0.4f is %0.4f", fradius, fcircum);
		break;
	case 'D':
	case 'd':
		fdiameter = 2 * fradius;
		printf("\nThe diameter of a circle with radius %0.4f is %0.4f", fradius, fdiameter);
		break;
	case 'X':
	case 'x':
		printf("\nGood Bye...");
		break;
	default:
		printf("\nInvalid entry...");
		break;
	}
	/*
	Lab 6
	6.4.1
	*
	int ncandy, npay;
	float fchange,funit;

	printf("Select a candy from the list below: \n\n\t1 = Smarties <$0.50>\n\t2 = M&M\'s <$0.75>");
	printf("\n\nSelection? ");
	scanf_s("%d", &ncandy);

	if (ncandy ==1 || ncandy ==2)
	{
		printf("\nHow are you going to pay for these Smarties\'s?\n\n\t1 = Loonie\n\t2 = Toonie");
		printf("\n\nSelection? ");
		scanf_s("%d", &npay);

		if (ncandy ==1 || ncandy ==2)
		{
			if (ncandy == 1)
			{
				funit = 0.5;
			}
			else
			{
				funit = 0.75;
			}
			if (npay == 1)
			{
				fchange = 1 - funit;
			}
			else
			{
				fchange = 2 - funit;
			}
			printf("\nYou will get the following change: $ %0.2f", fchange);
		}
		else
		{
			printf("\nInvalid entry!");
		}
	}
	else
	{
		printf("\nInvalid entry!");
	}

	/*
	6.4.2
	*
	int ncandy, npay;
	float fchange, funit;
	char ccandy;

	printf("Select a candy from the list below: \n\n\t1 = Smarties <$0.50>\n\t2 = M&M\'s <$0.75>");
	printf("\n\nSelection? ");
	scanf_s("%d", &ncandy);
	printf("\n\nSelection char ? ");
	//with _getch after input, no need to hit enter.
	ccandy = _getch();
	printf("\n%c", ccandy);
	

	if (ncandy ==1 || ncandy ==2)
	{
		printf("\nHow are you going to pay for these Smarties\'s?\n\n\t1 = Loonie\n\t2 = Toonie");
		printf("\n\nSelection? ");
		scanf_s("%d", &npay);

		if (npay ==1 || npay ==2)
		{
			switch (ncandy)
			{
			case 1:
				funit = 0.5;
				break;
			case 2:
				funit = 0.75;
				break;
			default:
				break;
			}
			
			switch (npay)
			{
			case 1:
				fchange = 1 - funit;
				break;
			case 2:
				fchange = 2 - funit;
				break;
			default:
				break;
			}
			
			printf("\nYou will get the following change: $ %0.2f", fchange);
		}
		else
		{
			printf("\nInvalid entry!");
		}
	}
	else
	{
		printf("\nInvalid entry!");
	}
	/*
	*
	int count = 0;

	while (count <=3)
	{
		count++;
		printf("The loop count is %d\n", count);
		//count++;
	}
	/*
	section 3-12
	ex11
	*
	int num, sum=0,i=0;

	while (i<10)
	{
		printf("Please enter a number:");
		scanf_s("%d", &num);
		sum += num;
		i++;
	}
	printf("\n\nYour total is %d", sum);
	/*
	section 3-13
	ex12
	*
	int num, sum = 0;

	do
	{
		printf("Please enter a number(zero to end):");
		scanf_s("%d", &num);
		sum += num;
		
	} while (num!= 0);
	printf("\n\nYour total is %d", sum);
	/*
	ex13
	*
	int num;

	do
	{
		printf("Please enter an even number between 2 and 100? ");
		scanf_s("%d", &num);

	} while (num>100 || num<1 || num%2!=0);

	printf("%d is between 2 and 100 and is an even number.", num);
	/*
	16
	*
	int num, factorial=1;

	printf("Please enter a number: ");
	scanf_s("%d", &num);
	/*
	for (int i = 0; i < num; i++)
	{
		factorial = factorial * (i + 1);
	}*
	for(factorial=num;num>1;factorial=--num*factorial)
	{
		printf("The factorial is %d", factorial);
	}
	/*
	18
	*
	int width, length;

	printf("Enter width of rectangle: ");
	scanf_s("%d", &width);
	printf("Enter length of rectangle: ");
	scanf_s("%d", &length);
	for (int i = 0; i < length; i++)
	{
		for (int j = 0; j < width; j++)
		{
			printf("*");
		}
		printf("\n");
	}

	/*
	19
	*
	int width, length;

	printf("Enter width of rectangle: ");
	scanf_s("%d", &width);
	printf("Enter length of rectangle: ");
	scanf_s("%d", &length);

	for (int i = 0; i < length; i++)
	{
		if (i == 0 || i == length - 1)
		{
			for (int j = 0; j < width; j++)
			{
				printf("*");
			}
		}
		else
		{
			printf("*");
			for (int j = 0; j < width - 2; j++)
			{
				printf(" ");
			}
			printf("*");
		}
		
		printf("\n");
	}
	/*
	20
	*
	int num;

	printf("Please enter the number of rows: ");
	scanf_s("%d", &num);

	for (int i = 0; i < num; i++)
	{
		for (int j = 0; j <=i; j++)
		{
			printf("x");
		}
		printf("\n");
	}
	/*
	21
	*
	int num,k;

	printf("Please enter the number of rows: ");
	scanf_s("%d", &num);

	for (int i = 0; i < num; i++)
	{
		for (k = 0; k < num - 1 - i; k++)
		{
			printf(" ");
		}
		
		for (int j = k; j <=k+2*i; j++)
		{
			printf("x");
		}

		printf("\n");
	}
	/*
	excercise
	*
	int increment;
	do
	{
		printf("Please enter a number between 2 - 50 for a table to be incremented by: ");
		scanf_s("%d", &increment);
	} while (increment<2 ||increment>50);
	printf("\nPercent\n_______\n");
	for (int i = 0; i <= 100; i += increment)
	{
		printf("%d\n", i);
	}

	if (100 % increment != 0)
		printf("%d", 100);
	/*
	looping practice
	*
	int num, difference=1;
	
	do
	{
		printf("Please enter a positive ODD number:  ");
		scanf_s("%d", &num);
		//printf("\nYour entered %d", num);
	} while (num <= 0 || num % 2 == 0);

	for (int i = 1+2; i <= num; i += 2)
	{
		difference = difference - i;
	}

	if (difference == 1)
	{
		printf("\nNo difference calculated");
	}
	else
	{
		printf("\nThe difference of all the ODD numbers from 1 to %d is %d.", num, difference);
	}
	/*
	generate a conversion table of celsius degrees to Fahrenheit degrees and Kelvin.
	Celsius value between 0 to 30
	conversion number and increment number should be positive
	*
	int num, nconvert, nincrement, nrepeat;
	float fCelsius, fFahrenheit, fKelvin;

	do
	{
		srand(time(0));
		num = rand() % 31;
		do
		{
			printf("Please enter the total number of conversions (Positive) : ");
			scanf_s("%d", &nconvert);
		} while (nconvert<1);

		do
		{
			printf("Please enter the number of increment between Celsius values : ");
			scanf_s("%d", &nincrement);
		} while (nincrement < 1);

		printf("\n%-24s%-24s%-24s\n\n", "Celsius value", "Fahrenheit value", "Kelvin");
		for (int i =0;i<= nconvert; i++)
		{
			fCelsius = num + nincrement * i;
			fFahrenheit = (fCelsius* 9 / 5) + 32;
			fKelvin = fCelsius + 273.15;
			printf("\n%-24.1f%-24.1f%-24.1f", fCelsius, fFahrenheit, fKelvin);
		}
		//printf("%d", num);
		printf("\n\nDo you want to repeat? (1 for yes; 2 for no): ");
		scanf_s("%d", &nrepeat);
	} while (nrepeat != 2);

	printf("\nFinished.");
	/*
	enter number greater than 1 print sequence of numbers
	*/
	int num, nsequence;
	char cagain;
	
	do
	{
		do
		{
			printf("\nPlease enter the row numbers required : ");
			scanf_s("%d", &num);
		} while (num < 2);
		printf("\n");
		for (int i = 1; i <= num; i++)
		{
			/*for (int j = 1; j <= i; j++)
			{
				nsequence = j * i;
				printf("%d ", nsequence);
			}*/ 
			for (int j = i; j <= i * i; j = j + i)
			{
				printf("%d ", j);
			}
			printf("\n");
		}

		printf("\nWould you like to run the program again (Y-yes): ");
		scanf_s(" %c", &cagain);
		//cagain = getchar();

	} while (cagain != 'N' && cagain !='n');
	printf("\nGood Bye");
	/*
	*/

	_flushall();
	getchar();
	_flushall();
	getchar();
	
}