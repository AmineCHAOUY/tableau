#include <stdio.h>
int main() {
    int a;
    printf("entrez le nombre d'éléments: ");
    scanf("%d", &a);

    int tableau[a];
    printf("Entrez %d l'élément:\n", a);
    for (int i = 0; i < a; i++) {
        scanf("%d", &tableau[i]);
    }
    printf("P  éléments:\n");
    for (int i = 0; i < a; i++) {
        if (tableau[i] % 2 != 0) {
            printf("%d\n", tableau[i]);
        }
    }
    return 0;
}
