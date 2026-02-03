#include <stdio.h>
#include <math.h>
int main() {
    double a, b, c, d, realPart, imagPart, root1, root2;
    int flag;

    printf("Enter coefficients a, b and c: ");
    scanf("%lf %lf %lf", &a, &b, &c);

    if (a == 0) {
        printf("Not a quadratic equation.\n");
        return 0;
    }

    d = b*b - 4*a*c;   // Discriminant

    // flag = 1 → real & distinct  
    // flag = 2 → real & equal  
    // flag = 3 → imaginary  
    if (d > 0)
        flag = 1;
    else if (d == 0)
        flag = 2;
    else
        flag = 3;

    switch (flag) {
        case 1:  // Real & distinct roots
            root1 = (-b + sqrt(d)) / (2*a);
            root2 = (-b - sqrt(d)) / (2*a);
            printf("Real and distinct roots:\n");
            printf("Root 1 = %.2lf\n", root1);
            printf("Root 2 = %.2lf\n", root2);
            break;

        case 2:  // Real & equal roots
            root1 = root2 = -b / (2*a);
            printf("Real and equal roots:\n");
            printf("Root = %.2lf\n", root1);
            break;

        case 3:  // Imaginary roots
            realPart = -b / (2*a);
            imagPart = sqrt(-d) / (2*a);
            printf("Imaginary roots:\n");
            printf("Root 1 = %.2lf + %.2lfi\n", realPart, imagPart);
            printf("Root 2 = %.2lf - %.2lfi\n", realPart, imagPart);
            break;

        default:
            printf("Error!\n");
    }

    return 0;
}