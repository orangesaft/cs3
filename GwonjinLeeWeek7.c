//April 28th, 2024, Gwonjin lee
//this program calculates the gallon used for travelling

#include <stdio.h>

int main() {
    
    double gas;
    double miles;
    
    printf ("Enter the gallons used:");
    scanf ("%lf", &gas);
    
    printf ("Enter the miles driven:");
    scanf ("%lf", &miles);
    
    printf ("The miles / gallon for this tank was: %lf", miles/gas);
    
    return 0;
}