//May 4th, 2024, Gwonjin Lee
//This program calculates the salary based on hourly rate and # of hours worked

#include <stdio.h>

int main() 
{
    
    int hours;
    double rate;
    double additional = 0;
    
    while (1)
    {
    
    printf ("Enter # of hours worked:");
    scanf ("%d", &hours);
    
        if (hours == -1)
        {
            break;
        }
        
    printf ("Enther hourly rate of the worker ($00.00):");
    scanf ("%lf", &rate);
    
        if (hours>40)
        {
        
        additional = (hours - 40)*(rate*0.5);
        
        }
        
    printf ("Salary is $%lf \n\n", hours*rate + additional);
    
    }
    
    return 0;
}