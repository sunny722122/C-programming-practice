/*
Feb 22,2020
read system time and write it into txt file

*/
#include <stdio.h>
#include <iostream>
//#include <fstream>
#include <time.h>
#include <thread>
#include <chrono>
//#include <unistd.h>

void main()
{
	/*
	file write with fprintf
	*
	int nsample = 5, ninterval = 10;
	time_t timer, curtimer;

	FILE *timerecord;
	time(&timer);
	//printf("%s", ctime(&timer));

	timerecord = fopen("myrecord.txt", "w");
	if (timerecord == 0) {
		perror("fopen");
		exit(1);
	}

	for (int i = 0; i < nsample; i++)
	{


		for (int sec = 0; sec < ninterval; sec++)
			//sleep(1);
			std::this_thread::sleep_for(std::chrono::seconds(1));
		time(&curtimer);
		printf("\n%0.2f  %s", difftime(curtimer, timer), ctime(&curtimer));
		//if(difftime(curtimer, timer)>=ninterval)
		{
			fprintf(timerecord,"\n%s",ctime(&curtimer));
			//fwrite(ctime(&curtimer), sizeof(ctime(&curtimer)), sizeof(ctime(&curtimer)), timerecord);

		}

		//fwrite(&timer,  sizeof(&timer), 1,timerecord);
	   //fwrite(ctime(&timer),  sizeof(ctime(&timer)),  sizeof(ctime(&timer)),timerecord);
	}
	fclose(timerecord);
	printf("\n%s", ctime(&curtimer));

	/*
	file read with fscanf
	*/

		FILE *fp;
		char buff[255];//creating char array to store data of file  
		fp = fopen("myrecord.txt", "r");
		while (fscanf(fp, "%s", buff) != EOF) 
		{
			printf("%s ", buff);
		}
		fclose(fp);
	/*
	*/

	_flushall();
	getchar();
	_flushall();
	getchar();
}