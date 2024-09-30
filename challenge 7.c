#include <stdio.h>
int main(){
    int a;
    printf("Entrez le nombre d'élément");
    scanf("%d",&a);
    if(a<=0){
        printf("Error......................");
        return 1;
    }
    int tableau[a];
    printf("Entreaz les éléments du tableau");
    for (int i=0 ; i<a ; i++){
      scanf("%d",&tableau[i]);
    }
    
}