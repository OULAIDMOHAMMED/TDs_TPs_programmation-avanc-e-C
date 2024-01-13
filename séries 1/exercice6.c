#include <stdio.h>
int main(){
int a,i;
printf("saisir un nombre ");
scanf("%d",&a);
if (a % 2==0)
{
    printf("\nles nombres pair inferieure a %d:",a);
for ( i = 1; i < a; i++)
{
    if (i % 2==0){
      printf("le nombre %d est pair",i);
      printf("\n");
    }
}
}
else{
  printf("\nle nombre %d n est pas pair",a);  
}
}