#include <stdio.h>
int main(){
    int i,j;
    for (i = 6; i >0; i--)
    {
        for ( j = i; j> 0; j--)
        {
            printf("%d",j);
        }
        printf("\n");
    }
    printf("\n");
    printf("\n");
    printf("\n");
   for (i = 0; i < 10; i++) {
        for (j = 0; j < i; j++) {
            printf(" ");
        }
        for (j = 0; j < 10 - i; j++) {
            printf("%d", i);
        }
        printf("\n");
    }
    
}