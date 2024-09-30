#include <stdio.h>
int main(){
    int a;

    int nombre;
    printf("entrez le nomres des éléments \t");
    scanf("%d",&a);
    if (a<=0){
        printf("Error................?");
        return 1;
    }
    int tableau[a];
    int resul[a];

    printf("entrez les éléments du tableau:\n");
    for (int i=0;i<a;i++){
        scanf("%d",&tableau[i]);
    }
    printf("Entrez le nomnre ");
    scanf("%d",&nombre);
    for (int i=0 ; i<a ; i++){
        resul[i]=tableau[i]*nombre;
    }
    printf("le resultant du tableau :\n");
    for (int i=0 ;i<a;i++){
        printf("%d \n",resul[i]);
    }
    printf("\n");
    return 0;

}
