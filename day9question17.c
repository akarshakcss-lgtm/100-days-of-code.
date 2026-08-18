#include <stdio.h>
#include <math.h>

int main()
{
    float a, b, c;
    float discriminant, root1, root2;
    float realPart, imaginaryPart;

    printf("Enter the values of a, b and c: ");
    scanf("%f %f %f", &a, &b, &c);

    if (a == 0)
    {
        printf("It is not a quadratic equation.\n");
    }
    else
    {
        discriminant = b * b - 4 * a * c;

        if (discriminant > 0)
        {
            root1 = (-b + sqrt(discriminant)) / (2 * a);
            root2 = (-b - sqrt(discriminant)) / (2 * a);

            printf("Roots are real and distinct.\n");
            printf("Root 1 = %.2f\n", root1);
            printf("Root 2 = %.2f\n", root2);
        }
        else if (discriminant == 0)
        {
            root1 = -b / (2 * a);

            printf("Roots are real and equal.\n");
            printf("Root 1 = Root 2 = %.2f\n", root1);
        }
        else
        {
            realPart = -b / (2 * a);
            imaginaryPart = sqrt(-discriminant) / (2 * a);

            printf("Roots are complex and conjugate.\n");
            printf("Root 1 = %.2f + %.2fi\n", realPart, imaginaryPart);
            printf("Root 2 = %.2f - %.2fi\n", realPart, imaginaryPart);
        }
    }

    return 0;
}