#include <stdio.h>
float addition(float a,float b){
    float c;
    c=a+b;
    return c;
}
float soustraction(float a,float b){
    float c;
    c=a-b;
    return c;
}
float multiplication(float a,float b){
    float c;
    c=a*b;
    return c;
}
float division(float a,float b){
    float c;
    c=a/b;
    return c;
}
float modulu(int a,int b){
    int c;
    c=a%b;
    return c;
}
int main(){
    char op;
    float a,b,c;
    printf("donne le premiere nombre:");
    scanf("%f",&a);
    printf("donne le deuxième  nombre:");
    scanf("%f",&b);
    do
    {
        printf("donne un operration: +,-,*,/,%%:");
        scanf(" %c",&op);
    } while (op != '+' && op != '-' && op != '*' && op != '/' && op != '%');
    switch (op)
    {
    case '+':
     c=addition(a,b);
        break;
    case '-':
     c=soustraction(a,b);
        break;
    case '*':
    if (b==0)
    {
        printf("imposible de diviser sur 0");
    }
    
     c=multiplication(a,b);
        break;
    case '/':
     c=division(a,b);
        break;
    case '%':
     c=modulu(a,b);
        break;                   
    default:
        break;
    }
    printf("le resultat est a %c b=%.2f",op,c);
}