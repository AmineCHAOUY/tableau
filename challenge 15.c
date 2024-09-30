#include <stdio.h>
int main() {
    int a, b;
    printf("entrez le nombre d'éléments entre la premeire case dant tableau: ");
    scanf("%d", &a);

    int tableau[a];
    printf("Entrez %d éléments:\n", a);
    for (int i = 0; i < a; i++) {
        scanf("%d", &tableau[i]);
    }
    printf("entrez le nombre d'éléments: ");
    scanf("%d", &b);

    int tableauu[a];
    printf("Entrez %d éléments:\n", b);
    for (int i = 0; i < b; i++) {
        scanf("%d", &tableauu[i]);
    }
    int resulta[a + b];
    for (int i = 0; i < a; i++) {
        resulta[i] = tableau[i];
    }
    for (int i = 0; i < b; i++) {
        resulta[a + i] = tableauu[i];
    }
    printf("resultta :\n");
    for (int i = 0; i < a +b ; i++) {
        printf("%d\n", resulta[i]);
    }
    return 0;
}
