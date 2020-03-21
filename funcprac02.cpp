/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void pause();
float get_Side(int);
//float sqr_Number(float);
float calc_Diagonal(float ,float );
void print_Results(float ,float ,float );

int main()
{
    float side1,side2,diagnoal;
    do
    {
        side1=get_Side(1);
        side2=get_Side(2);
        if(side1>=0.5 && side2 >=0.5)
        {
            diagnoal=calc_Diagonal(side1,side2);
            print_Results(side1,side2,diagnoal);
        }
    //print_Results(num);
        if(side1==0||side2==0)
        {
            exit(1);
        }
    }while(side1!=0 && side2!=0);
    pause();
}

void pause()
{
    //flushall();
    getchar();
    //flushall();
    getchar();
}

float get_Side(int nside)
{
    float side1;
    /*
    printf("Enter a positive 3 digit number (or 0 to exit): ");
    scanf("%d",&num);
    printf("cube number: %d",cube_Number(num));
    */
    do
    {
        
        printf("\nEnter the length of side %d: ",nside);
        //flushall();
        scanf("%f",&side1);
        if(side1==0)
        {
            printf("Good-bye");
            exit(1);
            
        }
        
    }while(side1 !=0 && side1<0.5);
    return side1;    
}

float sqr_Number(float num)
{
    return num*num;
}

float calc_Diagonal(float side1,float side2)
{
    return sqrt(sqr_Number(side1)+sqr_Number(side2));
}

void print_Results(float side1,float side2,float diagnoal)
{
    printf("The right angle triangle with sides %0.1f and %0.1f is %0.1f", side1,side2,diagnoal);
}
