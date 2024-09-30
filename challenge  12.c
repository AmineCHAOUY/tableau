#include <stdio.h>
int main() {
    int a;
    printf("Entrez le nomber des éléments: ");
    scanf("%d", &a);

    int tableau[a];

    for (int i = 0; i < a; i++) {
        printf("Entrez éléments %d: ", i + 1);
        scanf("%d", &tableau[i]);
    }
    printf("TABLEAU \n");
    for (int i = 0; i < a; i++)
        if ((tableau[i]%2)==0 && tableau[i]!=0) printf("%d\n",tableau[i]);
    return 0;
}
