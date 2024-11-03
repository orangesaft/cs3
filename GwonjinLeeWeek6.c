//Gwonjin Lee, April 19, 2024
//This program reads the number of values to add and adds the entered values

#include <stdio.h>

int main(){
    
    int i;
    int count;
    int value;
    int sum = 0;
    
    printf ("enter the number of values to add and then enter the values:");
    scanf ("%d", &i);
    
    for (count = 1; count <= i; count++){
        
        scanf ("%d", &value);
        sum = sum + value;
        
    }
    
    printf ("sum: %d\n",sum);
    
 return 0;   
} 