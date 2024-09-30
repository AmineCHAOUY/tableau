#include <stdio.h>
int main() {
    int a, old_value, new_value;
    printf("Enter the number of elements: ");
    scanf("%d", &a);

    int tableau[a];
    printf("Enter %d elements:\n", a);
    for (int i = 0; i < a; i++) {
        scanf("%d", &tableau[i]);
    }
    printf("Enter the value to replace: ");
    scanf("%d", &old_value);
    printf("Enter the new value: ");
    scanf("%d", &new_value);
    for (int i = 0; i < a; i++) {
        if (tableau[i] == old_value) {
            tableau[i] = new_value;
        }
    }
    printf("Updated array:\n");
    for (int i = 0; i < a; i++) {
        printf("%d\n", tableau[i]);
    }
    return 0;
}
