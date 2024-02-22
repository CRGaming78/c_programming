#include <stdio.h>
#include <math.h>

int main() {
    float a,b,c,discriminant,root1,root2;
    printf("Enter coefficients a, b, and c of the quadratic equation:\n");
    scanf("%f %f %f",&a,&b,&c);
    discriminant=b*b-4*a*c;
    if (discriminant>0) {
        root1=(-b+sqrt(discriminant))/(2*a);
        root2=(-b-sqrt(discriminant))/(2*a);
        printf("Roots are real and different:\n");
        printf("Root1 = %.2f\n",root1);
        printf("Root2 = %.2f\n",root2);
    } else if (discriminant==0){
        root1=-b/(2*a);
        printf("Roots are real and equal:\n");
        printf("Root1=Root2= %.2f\n",root1);
    } else {
        float realPart=-b/(2*a);
        float imaginaryPart=sqrt(-discriminant)/(2*a);
        printf("Roots are complex and imaginary:\n");
        printf("Root1=%.2f+%.2fi\n",realPart,imaginaryPart);
        printf("Root2=%.2f-%.2fi\n",realPart,imaginaryPart);
    }
    return 0;
}