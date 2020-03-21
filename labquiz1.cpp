#include <stdio.h>

void main()
{
	int nwithdraw, ndeposit, nbalance=400;
	char transtype;

	printf("Please enter transaction type:");
	printf("\n\n\tW - Withdraw\n\n\tD - Deposit");
	printf("\n\nTransaction Type?");
	scanf("%c", &transtype);

	switch (transtype)
	{
	case 'W':
	case 'w':
		printf("Enter amount of withdrawal? ");
		scanf("%d", &nwithdraw);
		if (nwithdraw % 20 != 0 || nwithdraw>500)
		{
			printf("\nThe amount entered is invalid. Transaction Canelled");
		}
		else if (nwithdraw > nbalance)
		{
			printf("\nInsufficient funds, Transaction Cancelled");
		}
		else
		{
			nbalance = nbalance - nwithdraw;
			printf("\nYour new balance is $%d. Thank you",nbalance);
		}
		break;
	case 'D':
	case 'd':
		printf("\nEnter amount of deposit? ");
		scanf("%d", &ndeposit);
		if (ndeposit != 0)
		{
			nbalance = nbalance + ndeposit;
			printf("\nYour new balance is $%d. Thank you", nbalance);
		}
		else
		{
			printf("\nThe amount entered is invalid. Transaction Cancelled");
		}
		break;
	default:
		printf("\nIllegal transaction type. Goodbye.");
		break;
	}

	_flushall();
	getchar();
	_flushall();
	getchar();
}