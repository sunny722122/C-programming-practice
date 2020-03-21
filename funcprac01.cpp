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
int get_Number();
int cube_Number(int );
int calc_Armstrong(int );
void print_Results(int );

int main()
{
    int num;
    do
    {
        num=get_Number();
    //print_Results(num);
        if(num==0)
        {
            exit(1);
        }
    }while(num!=0);
    pause();
}

void pause()
{
    //flushall();
    getchar();
    //flushall();
    getchar();
}

int get_Number()
{
    int num;
    /*
    printf("Enter a positive 3 digit number (or 0 to exit): ");
    scanf("%d",&num);
    printf("cube number: %d",cube_Number(num));
    */
    do
    {
        
        printf("\nEnter a positive 3 digit number (or 0 to exit): ");
        //flushall();
        scanf("%d",&num);
        if(num==0)
        {
            printf("Good-bye");
            exit(1);
            
        }
        else if(num>99 && num<1000)
        {
            print_Results(num);
        }
        
    }while(num !=0);
    return num;    
}

int cube_Number(int num)
{
    //printf("\ncube number: %d",pow(num,3));
    return pow(num,3);
}

int calc_Armstrong(int num)
{
    int sum=0;
    //printf("digit 1 is : %d;\ndigit 10 is: %d; \ndigit 100 is: %d",num%10,num/10%10,num/100);
    sum=cube_Number(num%10)+cube_Number(num/10%10)+cube_Number(num/100);
    if(sum==num)
    {
        return 1;
    }
    else
        return 0;
}

void print_Results(int num)
{
    int narmstrong;
    narmstrong=calc_Armstrong(num);
    if(narmstrong==1)
    {
        printf("\nThe number %d is an Armstrong number",num);
    }
    else
        printf("\nThe number %d is NOT an Armstrong number",num);
}

