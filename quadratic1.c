#include <stdio.h>
#include <math.h>
int main() {
    double a, b, c;
    double discriminant, realPart, imagPart;

    printf("Enter coefficients a, b and c: ");
    scanf("%lf %lf %lf", &a, &b, &c);

    if (a == 0) {
        printf("Not a quadratic equation (a = 0).\n");
        return 0;
    }

    discriminant = b * b - 4 * a * c;

    if (discriminant > 0) {
        // Two distinct real roots
        double root1 = (-b + sqrt(discriminant)) / (2 * a);
        double root2 = (-b - sqrt(discriminant)) / (2 * a);
        printf("Roots are real and distinct:\n");
        printf("Root 1 = %.2lf\n", root1);
        printf("Root 2 = %.2lf\n", root2);
    }
    else if (discriminant == 0) {
        // One real root (double root)
        double root = -b / (2 * a);
        printf("Roots are real and equal:\n");
        printf("Root = %.2lf\n", root);
    }
    else {
        // Imaginary roots
        realPart = -b / (2 * a);
        imagPart = sqrt(-discriminant) / (2 * a);/*Since discrimant value is negative we multiply it by -1 so that compiler takes positive value.*/
        printf("Roots are imaginary:\n");
        printf("Root 1 = %.2lf + %.2lfi\n", realPart, imagPart);
        printf("Root 2 = %.2lf - %.2lfi\n", realPart, imagPart);
    }

    return 0;
}