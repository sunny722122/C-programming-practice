/*
Lab2
*/

#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>


/*
Lab 22 
ex 15
start
*/
float calslope(float, float, float, float);
float calintercept(float, float, float);
/*
Lab 22
ex 15
end
*/
/*
Lab 22
ex 16
start
*/
float calcost(int, int, float, float);
float calfrental(int, int, int);

/*
Lab 22
ex 16
end
*/
/*
Lab 23
ex 18
start
*/
bool ckpalindrome(char);

/*
Lab 23
ex 18
end
*/
/*
Lab 24
ex 19
start
*/
char* convertword(char);

/*
Lab 24
ex 19
end
*/
/*
Lab 24
ex 21
start
*/
//reads five marks from a student
int* inputmarks();


//calculates and returns the students average
float calaverage(int);


//determin student code
char studentcode(float, int);

/*
Lab 24
ex 21
end
*/
/*
Lab 25
ex 22
start
*/
//reads five marks from a student
float* DataEntry();

//calculates and returns the students average
float StdDev(float* );

/*
Lab 25
ex 22
end
*/

void main()
{
	/*
	2
	*
	float num1 = 28.48;
	int num2 = 28;
	char cchar = 't';
	printf("This is a real number %0.2f\n", num1);
	printf("This is an integer number %d\n", num2);
	printf("This is a character %c\n", cchar);
	/*
	3
	*
	char cclass;
	int nage;
	float fgrade;

	printf("Please enter your class (A-F): \n");
	scanf("%c", &cclass);

	printf("Please enter your age: \n");
	scanf("%d", &nage);

	printf("Please predict your final grade in IET240(%%): \n");
	scanf("%f", &fgrade);

	printf("I am a %d year old student in class 1%c with a goal of achieving %0.1f%% in IET 240. \n", nage, cclass, fgrade);
	getchar();
	/*
	4
	*
	int neggs, ndozen, nleftover;

	printf("Please enter the number of eggs: \n");
	scanf("%d", &neggs);

	ndozen = neggs / 12;
	nleftover = neggs % 12;
	printf("Number of dozens is : %d with %d eggs left over.\n", ndozen, nleftover);
	getchar();
	/*
	5
	*
	float fnum, fsqr, froot;
	int nround, ntruncated;

	printf("Please enter a real number: \n");
	scanf("%f", &fnum);

	nround = ceil(fnum);
	ntruncated = floor(fnum);
	fsqr = pow(fnum, 2);
	froot = sqrt(fnum);

	printf("%15s%15s%15s%15s\n","Rounded","Truncated","Squared","Square Rooted");
	printf("%15d%15d%15.2f%15.2f\n", nround, ntruncated, fsqr, froot);
	getchar();
	/*
	6
	*
	int npen, nnickel, ndimes, nquart, ndollars, ntwodol;
	float ftotal;

	printf("Please enter the number of pennies: \n");
	scanf("%d", &npen);

	printf("Please enter the number of nickels: \n");
	scanf("%d", &nnickel);

	printf("Please enter the number of dimes: \n");
	scanf("%d", &ndimes);

	printf("Please enter the number of quarters: \n");
	scanf("%d", &nquart);

	printf("Please enter the number of dollars: \n");
	scanf("%d", &ndollars);

	printf("Please enter the number of two dollars: \n");
	scanf("%d", &ntwodol);

	ftotal = ntwodol * 2 + ndollars + nquart * 0.25 + ndimes * 0.1 + nnickel * 0.05 + npen * 0.01;
	printf("The total amount of money is $%0.2f. \n", ftotal);
	getchar();
	/*
	7
	*
	//suppose all input is positive numbers
	float fconsume;
	float fcost;

	printf("Please enter the number of KWH used this month: ");
	scanf("%f", &fconsume);
	if (fconsume >= 0 && fconsume <= 2000)
		fcost = fconsume * 0.10;
	else if (fconsume <= 5000)
		fcost = 2000 * 0.1 + (fconsume - 2000)*0.15;
	else
		fcost = 2000 * 0.1 + (5000 - 2000)*0.15 + (fconsume - 5000)*0.17;
	printf("\nYour total cost is $%0.2f.\n", fcost);
	/*
	8
	*
	int nempnum, nwkpay, npos, nyears;
	float fbonus;

	printf("Enter employee number: ");
	scanf("%d", &nempnum);
	printf("\nEnter weekly pay rate: ");
	scanf("%d", &nwkpay);
	printf("\nEnter position code: ");
	scanf("%d", &npos);
	printf("\nEnter years of experience: ");
	scanf("%d", &nyears);

	//calculate bonus
	if (npos == 1)
	{
		fbonus = nwkpay;
	}
	else if (npos == 2)
	{
		fbonus = nwkpay * 2;
		if (fbonus > 1000.00)
			fbonus = 1000;
	}
	else if (npos == 3)
	{
		fbonus = nwkpay * 1.5;
	}

	if (nyears <= 5 && fbonus > 500.00)
	{	
				fbonus = 500;
	}
	else if (nyears >= 10)
	{
		fbonus = fbonus * 1.2;
	}

	printf("\nBonus for the year is $%0.2f", fbonus);
	/*
	9
	*
	int nunitfrom, nunitto;
	float ftempfrom,ftempto,fcelsius;

	printf("\nTemperature units:");
	printf("1)\tCelsius\n");
	printf("2)\tFahrenheit\n");
	printf("3)\tKelvin\n");
	printf("4)\tRankin\n");

	printf("Please enter units of the data: ");
	scanf("%d", &nunitfrom);
	if (nunitfrom > 0 && nunitfrom < 5)
	{
		printf("\nPlease enter the temperature: ");
		scanf("%f", &ftempfrom);

		printf("\nPlease enter units to convert to: ");
		scanf("%d", &nunitto);

		if (nunitto > 0 && nunitto < 5)
		{
			//calculate temperature
		//from all to celsius
			switch (nunitfrom)
			{
			case 1:
				fcelsius = ftempfrom;
				break;
			case 2:
				fcelsius = (ftempfrom - 32) * 5 / 9;
				break;
			case 3:
				fcelsius = ftempfrom - 273.15;
				break;
			case 4:
				fcelsius = (ftempfrom* 5 / 9) - 273.15 ;
				break;
			default:
				break;
			}


			//from celsius to other
			switch (nunitto)
			{
			case 1:
				ftempto = fcelsius;
				printf("The temperature is %0.2f Celsius", ftempto);
				break;
			case 2:
				ftempto = (fcelsius * 9 / 5) + 32;
				printf("The temperature is %0.2f Fahrenheit", ftempto);
				break;
			case 3:
				ftempto = fcelsius + 273.15;
				printf("The temperature is %0.2f Kelvin", ftempto);
				break;
			case 4:
				ftempto = (fcelsius  + 273.15)* 9 / 5;
				printf("The temperature is %0.2f Rankin", ftempto);
				break;
			default:
				break;
			}
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
	10
	*
	int num,minnum,nentry=0;
	printf("Enter your first number or -1 to end: ");
	scanf("%d", &num);
	minnum = num;
	while (num>0)
	{
		printf("Enter the next number (-1 to end): ");
		scanf("%d", &num);
		if (num < minnum && num>0)
			minnum = num;
		nentry++;
	}
	printf("The lowest number entered was %d, out of a total of %d entries.", minnum, nentry);
	/*
	11
	*
	int num,numinput,nentry=0;
	srand(time(0));
	num = rand()%100+1;
	do
	{
		printf("\nEnter your guess (1-100): ");
		scanf("%d", &numinput);
		if (numinput < num)
			printf("Lower");
		else if(numinput > num)
			printf("Higher");
		nentry++;
	} while (numinput != num);
	printf("\nYou got it right, it only took %d tries!!!", nentry);
	/*
	12
	*
	int num,ndigit=0,ndivid;
	do
	{
		ndigit = 0;
		ndivid = 0;
		printf("\nEnter a number (0 to quit): ");
		scanf("%d", &num);
		ndivid = num;
		do
		{

			ndivid = ndivid / 10;
			ndigit++;
		}
		while (ndivid >0);
		if(num>0)
			printf("The number contained %d digits.", ndigit);
	} while (num > 0);
	printf("Finished.");
	/*
	13
	*
	int ninc;
	//init value
	int npressurest,npressureend,nprefinal;
	float fcurst,fcurend,fcurre, fpressurest, fpressureend,fprefinal;
	
	npressurest = 20;
	npressureend = 100;
	fcurst = 4.0;
	fcurend = 20;
	fpressurest = 3.0;
	fpressureend = 15.0;

	printf("Please enter the increment to be used (%%): ");
	scanf("%d", &ninc);

	printf("%15s%15s%15s%15s\n", "percent", "current", "pressure", "pressure");
	for (int i = 0; i <= 100; i += ninc)
	{
		fcurre = fcurst+(fcurend- fcurst) *i / 100.0;
		fprefinal = fpressurest+(fpressureend- fpressurest) *  i / 100.0;
		nprefinal = npressurest+(npressureend- npressurest) *  i / 100.0;
		printf("%14d%%%12.1f mA%11d kPa%11.1f psi\n",i, fcurre, nprefinal, fprefinal );
	}

	if(100%ninc!=0)
		printf("%14d%%%12.1f mA%11d kPa%11.1f psi\n",100, 20.0, 100, 15.0 );
	/*
	14
	*
	int num,ntry;

	printf("Please enter the maximum number to be tested if prime: ");
	scanf("%d", &num);

	for (int i = 1; i <=num; i++)
	{
		ntry = 0;
		for (int j = 1; j < i; j++)
		{
			if (i%j == 0)
			{
				ntry++;
			}
		}
		if (ntry <= 1)
		{
			printf("%d is a prime.\n", i);
		}
	}
	/*
	15
	*
	float nx1, nx2, ny1, ny2;
	float fslope, fintercept;

	printf("Please enter the X coordinate of the first point: ");
	scanf("%f", &nx1);

	printf("Please enter the Y coordinate of the first point: ");
	scanf("%f", &ny1);

	printf("Please enter the X coordinate of the second point: ");
	scanf("%f", &nx2);

	printf("Please enter the Y coordinate of the second point: ");
	scanf("%f", &ny2);

	fslope = calslope(nx1, ny1, nx2, ny2);
	fintercept = calintercept(nx1, ny1, fslope);
	printf("\nThe equation of the line is: %0.2fx %+0.2f.", fslope, fintercept);
	/*
	16
	*
	int ncartype, ndays, nkms;
	float frental;
	do
	{
		printf("Please enter the car type (1-4): ");
		scanf_s("%d", &ncartype);
	} while (ncartype < 0 || ncartype>4);
	
	printf("Please enter the number of days rented: ");
	scanf_s("%d", &ndays);

	printf("Please enter the number of km traveled: ");
	scanf_s("%d", &nkms);

	frental = calfrental(ncartype, ndays, nkms);
	printf("\nThe total cost of the rental is $%0.2f.", frental);
	/*
	17
	*
	char strinput[120];
	int strlength,charcount=0;

	printf("Enter a string to be tested: ");
	gets_s(strinput);

	strlength = strlen(strinput);
	for (int i = 0; i < strlength; i++)
	{
		if (strinput[i] == 'i')
		{
			charcount++;
		}
	}
	printf("There are %d i\'s in the string.", charcount);
	/*
	18
	*
	char strinput[120];
	bool bresult;

	printf("Enter a string to be tested: ");
	gets_s(strinput);
	bresult = ckpalindrome(strinput);
	if (bresult)
	{
		printf("The string is a palindrome.");
	}
	else
	{
		printf("The string is not a palindrome.");
	}
	/*
	19
	*
	char strinput[120],strout[120];
	char* strconvert;
	printf("Enter a string to be tested: ");
	gets_s(strinput);
	strconvert = convertword(strinput);
	strcpy(strout, strconvert);

	printf("\nThe censored string is: %s", strout);
	/*
	21
	*
	float faverage;
	char cstudentcode;
	int *marks,marksarr[5];
	int marks1;

	marks = inputmarks();
	for (int i = 0; i < 5; i++)
	{
		marksarr[i] = *(marks + i);
	}
	faverage = calaverage(marksarr);
	cstudentcode = studentcode(faverage, marksarr);
	printf("\nThe average is %0.2f%% and a student code of %c.", faverage, cstudentcode);
	/*
	22
	*/
	float fpressure[8],*fprep, fstddev;

	fprep = DataEntry();
	for (int i = 0; i < 8; i++)
	{
		fpressure[i] = *(fprep + i);
	}

	fstddev = StdDev(fpressure);
	printf("\nThe standard deviation is %0.2f", fstddev);
	/*
	*/
	_flushall();
	getchar();
	_flushall();
	getchar();
}



/*
Lab 22
ex 15
start
*/
float calslope(int x1, int y1, int x2, int y2)
{
	float fslope = 0;
	fslope = (y2 - y1) / (x2 - x1);
	return fslope;
}

float calintercept(int x1, int y1, float slope)
{
	float intercept = 0;
	intercept = y1 - slope * x1;
	return intercept;
}

/*
Lab 22
ex 15
end
*/
/*
Lab 22
ex 16
start
*/
float calcost(int ndays, int nkms, float frentperday, float costperextra)
{
	float fcost;
	if (nkms > ndays * 200)
	{
		fcost = ndays * frentperday + (nkms - ndays * 200) * costperextra;
	}
	else
	{
		fcost = ndays * frentperday;
	}
	return fcost;
}

float calfrental(int cartype, int ndays, int nkms)
{
	float frental;
	switch (cartype)
	{
	case 1:
		frental = calcost(ndays, nkms, 29.95, 0.29);
		break;
	case 2:
		frental = calcost(ndays, nkms, 39.95, 0.39);
		break;
	case 3:
		frental = calcost(ndays, nkms, 49.95, 0.49);
		break;
	case 4:
		frental = calcost(ndays, nkms, 59.95, 0.59);
		break;
	default:
		break;
	}
	return frental;
}
/*
Lab 22
ex 16
end
*/
/*
Lab 23
ex 18
start
*/
bool ckpalindrome(char strin[120])
{
	int strlength;
	strlength = strlen(strin);

	for (int i = 0; i < strlength / 2; i++)
	{
		if (strin[i] != strin[strlength - i - 1])
		{
			return false;
		}
	}
	return true;
}
/*
Lab 23
ex 18
end
*/
/*
Lab 24
ex 19
start
*/
char* convertword(char strin[120])
{
	int nstrlength = strlen(strin), ncount = 0;
	char strout[120];
	strcpy_s(strout, strin);
	for (int i = 0; i < nstrlength; i++)
	{
		//strout[i] = strin[i];

		if (strin[i] >= 65 && strin[i] <= 122)
		{
			ncount++;
		}
		else
		{
			if (ncount == 4)
			{
				for (int j = 0; j < 4; j++)
				{
					strout[i - j - 1] = '*';
				}
			}
			ncount = 0;
		}


	}
	return strout;
}
/*
Lab 24
ex 19
end
*/
/*
Lab 24
ex 21
start
*/
//reads five marks from a student
int* inputmarks()
{
	int nmarks[5];

	printf("Input 1st mark: ");
	scanf("%d", &nmarks[0]);

	printf("Input 2nd mark: ");
	scanf("%d", &nmarks[1]);

	printf("Input 3rd mark: ");
	scanf("%d", &nmarks[2]);

	printf("Input 4th mark: ");
	scanf("%d", &nmarks[3]);

	printf("Input 5th mark: ");
	scanf("%d", &nmarks[4]);

	return nmarks;
}

//calculates and returns the students average
float calaverage(int marks[5])
{
	float average;
	int sum = 0, nlen;

	nlen = 5;
	//sum = marks[0];

	for (int i = 0; i < nlen; i++)
	{
		sum += *(marks + i);
	}
	average = sum / 5.0;
	return average;
}

//determin student code
char studentcode(float average, int marks[5])
{
	char studentcode;
	int nlen, nfail = 0;

	nlen = 5;
	for (int i = 0; i < nlen; i++)
	{
		if (*(marks + i) < 50)
		{
			nfail++;
		}
	}
	if (average > 50 && nfail <= 1)
	{
		studentcode = 'A';
	}
	else if (average < 50 && nfail >= 3)
	{
		studentcode = 'C';
	}
	else
	{
		studentcode = 'B';
	}
	return studentcode;
}

/*
Lab 24
ex 21
end
*/
/*
Lab 25
ex 22
start
*/
//reads five marks from a student
float* DataEntry()
{
	float fpressure[8];
	for (int i = 0; i < 8; i++)
	{
		printf("\nPlease enter pressure reading %d of 8 (kPa): ", i);
		scanf("%f", &fpressure[i]);
	}

	return fpressure;
}

//calculates and returns the students average
float StdDev(float pressure[8])
{
	float mean, sum = 0, stddev;
	int  nlen;

	nlen = 8;
	//sum = marks[0];

	for (int i = 0; i < nlen; i++)
	{
		sum += pressure[i];
	}
	mean = sum / 8.0;
	sum = 0;
	for (int i = 0; i < nlen; i++)
	{
		sum += pow((pressure[i] - mean), 2);
	}
	stddev = sqrt(sum / nlen);
	return stddev;
}
/*
Lab 25
ex 22
end
*/