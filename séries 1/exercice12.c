#include <stdio.h>

int main() {
    int i, k, n;
    
    printf("Saisir la taille : ");
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        for (k = 0; k < n; k++) {
            if ((i == 0 || i == n - 1) || (k == 0 || k == n - 1)) {
                printf("*");
            } 
            else if (k==n/2)
            {
                if (k==i)
                {
                    printf("+");
                }
                else{
                    printf("-");
                }
                
            }
            else if (i==n/2)
            {
                if (k==i)
                {
                    printf("+");
                }
                else{
                    printf("|");
                }
                
            }   
            else if ((i==k)||(k==n-1- i + 1))
            {
                    printf("+");
            }
            else {
                printf(" ");
            }
        }
        printf("\n");
    }

    return 0;
}


