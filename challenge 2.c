#include <stdio.h>
#include <stdlib.h>
int main(){
int n;
printf("entr your nombre :");
scanf("%d",&n);
int tableau[n];
printf("entre les %d éléments du tableau :",n);
for(int i=0;i<n;i++){
    printf("éléments %d",n+1);
    scanf("%d",&tableau[i]);
}
printf("les éléments du tableau sont :\n");
for(int i=0;i<n;i++){
    printf("%d", tableau[i]);
}
printf("\n");
return 0;

}