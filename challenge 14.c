#include <stdio.h>
int main() {
    int a, somme = 0;
    printf("entrez le nombre d'éléments: ");
    scanf("%d", &a);

    int tableau[a];
    printf("Entrez %d éléments:\n", a);
    for (int i = 0; i < a; i++) {
        scanf("%d", &tableau[i]);
        somme += tableau[i];
    }
    printf("avonttage: %d\n",somme / a);
    return 0;
}
