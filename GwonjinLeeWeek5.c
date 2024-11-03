/*Gwonjin Lee, April 7, average calculator, calculates the average of values entered preceding 9999*/

#include <stdio.h>

int main()
{
    int counter;
    int value;
    int total;
    float average;
    
    counter = -1;
    total = -9999;
    
    printf("Enter Values:");
    
    while(value != 9999)
    
    {
        scanf ("%d", &value);
        counter = counter +1;
        total = total + value;
        average = (float)(total)/(counter);
    }
    
    if(value == 9999)
    
    { 
            printf ("the average of all values preceding 9999 is %f\n", average);
    }
    
    return 0;

}
