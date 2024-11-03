#include <stdio.h>
#include <math.h>

int main()
{
printf("1.1 Approximating square root of 106 with Heron's Method\n\n");
   
   long double hx = 10;
   for (int i = 0; i <4; i++)
   {
       hx = 0.5 * (hx + 106 / hx);
       printf("X%d = %.10Lf\n", i + 1, hx);
   }
    
    printf("\n\n");
    
    
    
printf("1.3 Approximating square root of 106 with Newton's Method\n\n");
    
    long double nx = 10;
    for (int i = 0; i < 4; i++) 
    {
        long double fnx = nx * nx - 106;
        long double dfnx = 2 * nx;
        nx = nx - fnx / dfnx;
        printf("X%d = %.10Lf\n", i + 1, nx);
    }

    printf("\n\n");



printf("2. Dottie Number\n\n");
#define EPSILON 0.000001

    double f(double dnx) 
    {
    return cos(dnx);
    }
    
    double dnx = 0.0; 
    double prev_dnx;
    int count = 0;
    
    do 
    {
        prev_dnx = dnx;
        dnx = f(dnx);
        count++;
    } while (fabs(dnx - prev_dnx) > EPSILON);
    
    printf("Dottie number = %.10f\n", dnx);
    printf("Number of iterations: %d\n", count);
    
    printf("\n\n");
    
    
    
printf("2. Dottie Number using Newton's Method\n\n");
#define EPSILON 0.000001

    double y(double nmx) 
    {
    return cos(nmx) -nmx;
    }

    double dy(double nmx) 
    {
    return -sin(nmx) -1;
    }
    
    double nmx0 = 0.0; 
    double nmx1 = 1.0;
    int iterations = 0;

    do 
    {
        nmx0 = nmx1;
        nmx1 = nmx0 - (y(nmx0) / dy(nmx0));
        iterations++;
    } while (fabs(nmx1 - nmx0) > EPSILON);
    

    printf("Dottie number = %.10f\n", nmx1);
    printf("Iterations: %d\n", iterations);
    
    printf("\n\n");
    
    
    
printf("3. Abel's Theorem\n\n");

    double calculate_f(double x) 
    {
        return x*x*x*x*x + 2*x*x*x*x + 3*x*x*x + 2*x*x + x + 7;
    }

    void print_range(double x1, double x2) 
    {
        printf("%.5f < x < %.5f\n", x1, x2);
        printf("f(%.5f) = %.5f\n", x1, calculate_f(x1));
        printf("f(%.5f) = %.5f\n\n", x2, calculate_f(x2));
    }

    print_range(-4, 0);
    print_range(-4, -2);
    print_range(-2, 0);
    print_range(-2, -1);
    print_range(-2, -1.5);
    print_range(-1.75, -1.5);
    print_range(-1.7, -1.6);
    print_range(-1.68, -1.61);
    print_range(-1.66, -1.62);
    print_range(-1.65, -1.64);
    print_range(-1.648, -1.643);
    print_range(-1.647, -1.644);
    print_range(-1.646, -1.645);
    print_range(-1.6465, -1.6455);
    print_range(-1.6468, -1.6456);
    print_range(-1.6469, -1.64562);
    print_range(-1.64563, -1.64562);
    
    printf("\n");
    
    
    
printf("3. Finding Zero using Newton's Method\n\n");
    
    double calculate_n(double x) 
    {
    return x*x*x*x*x + 2*x*x*x*x + 3*x*x*x + 2*x*x + x + 7;
    }

    double calculate_derivative(double x) 
    {
    return 5*x*x*x*x + 8*x*x*x + 9*x*x + 4*x + 1;
    }

    double newtons_method(double initial_guess, int *itra) 
    {
    double x0 = initial_guess;
    double x1;
    *itra = 0;

        do 
        {
        x1 = x0 - (calculate_n(x0) / calculate_derivative(x0));
        x0 = x1;
        (*itra)++;
        } while (fabs(calculate_n(x1)) >= EPSILON);

    return x1;
    
    }
    
    int itra;
    double zero = newtons_method(-4.0, &itra); 
    printf("Zero of the function using Newton's method is at x = %.10f\n", zero);
    printf("f(x) =  %.10f\n", calculate_n(zero));
    printf("Number of iterations: %d\n", itra);
    
return 0;

}
