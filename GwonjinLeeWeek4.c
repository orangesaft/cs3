//Gwonjin Lee, March 31, 2024.
//the program reads the radius of a circle and prints its diameter, circumference and area

#include <stdio.h>

int main() {
    float radius;

    printf("Type in the radius of a circle:\n");
    scanf("%f", &radius);
    printf("Diameter: %f\n", 2 * radius);
    printf("Circumference: %f\n", 2 * 3.14159 * radius);
    printf("Area: %f\n", 3.14159 * radius * radius);

    return 0;
}
