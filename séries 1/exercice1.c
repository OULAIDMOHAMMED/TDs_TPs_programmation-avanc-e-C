#include <stdio.h>

int main()
{
    float a, b;
    char c;
    printf("saisie le nombre a : ");
    scanf("%f", &a);
    printf("\nsaisie le nombre b : ");
    scanf("%f", &b);
    printf("\nsaisie l'operateur : ");
    scanf(" %c",&c);
    switch (c)
    {
    case '+':
        printf("\nresultat : %f", a + b);
        break;
    case '-':
        printf("\nresultat : %f", a - b);
        break;
    case '/':
        printf("\nresultat: %.2f", a / b);
        break;
    case '*':
        printf("\nresultat: %.2f", a * b);
        break;
    default:
        break;
    }
}