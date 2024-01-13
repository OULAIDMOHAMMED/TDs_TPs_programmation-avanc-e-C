#include<stdio.h>
int main(){
int i,k,n;
printf("Saisir le nombre des lignes: ");
scanf("%d",&n);
for(i=1;i<=n;i++){
for(k=1;k<2*n;k++){
if(k==n-(i-1)|| k==n+(i-1)|| i==n)printf("*");
else printf(" ");
}
printf("\n");
}
}