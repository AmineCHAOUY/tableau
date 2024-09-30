#include <stdio.h>
#include <stdlib.h>
int main (){
    int a;
    printf("entrez le nombre d'éléments :");
    scanf("%d",& a);
    if (a<=0){
        printf("__________________________");
        return 1;
    }
    int tableau[a];
    printf("entrez les éléments du tableau \n");

    for (int i=0;i<a;i++){
        scanf("%d",&tableau[i]);
    }
  int m =tableau[0];
  for (int i =1 ; i<a ; i++){
    if (tableau[i]>m){
        m = tableau[i];
    }
  }
  printf(" le plus grand élément dans tableau : %d",m);
  return 0;

}
