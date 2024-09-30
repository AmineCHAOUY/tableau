#include <stdio.h>
int main() {
    int n;
    printf("Enter  nombre  d'éléments: ");
    scanf("%d", &n);
    
    int tableau[n], copy[n];
    
    for (int i = 0; i < n; i++) {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &tableau[i]);
        copy[i] = tableau[i]; // Copying
    }
    printf("\033[0;32mOriginal array:\n\033[0m");
    for (int i = 0; i < n; i++) 
        printf("\033[0;32m%d\n\033[0m", tableau[i]);
    
    printf("\033[0;36mCopied array:\n\033[0m");
    for (int i = 0; i < n; i++) 
        printf("\033[0;36m%d\n\033[0m", copy[i]);
    
    return 0;
}