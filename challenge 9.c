#include <stdio.h>
int main() {
    int n;
    printf("Entre le the nombre des elements: ");
    scanf("%d", &n);

    int tableau[n];

    for (int i = 0; i < n; i++) {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &tableau[i]);
    }
    for (int j = 0; j < n/2; j++)
    {
         tableau[j]+=tableau[n-j-1];
         tableau[n-j-1]=tableau[j]-tableau[n-j-1];
         tableau[j]=tableau[j]-tableau[n-j-1];
    }

    printf("\033[0;32mreversed array:\n\033[0m");
    for (int i = 0; i < n; i++)
        printf("\033[0;32m%d\n\033[0m", tableau[i]);


    return 0;
}
