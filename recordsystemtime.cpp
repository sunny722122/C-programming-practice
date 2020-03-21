//
//  recordsystemtime.cpp
//  
//
//  Created by Sunny Wang on 2020-02-23.
//

#include <stdio.h>
#include <time.h>

void main()
{
    time_t timer;
    
    FILE *timerecord;
    time(&timer);
    //printf("%s", ctime(&timer));
    timerecord = fopen("myrecord.txt", "rw");
    fwrite(&timer, sizeof(char), sizeof(&timer), timerecord);
    fclose(timerecord);
    printf("%s", ctime(&timer));


    getchar();

    getchar();
}
