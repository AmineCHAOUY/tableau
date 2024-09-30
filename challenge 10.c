#include <stdio.h>
int main() {
    int a;
    printf("Enter the number of elements: ");
    scanf("%d", &a);

    int tableau[a],num,exit=0;

    for (int i = 0; i < a; i++) {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &tableau[i]);
    }
    printf("enter the number you want find :");
    scanf("%d",&num);
    for (int j = 0; j < a; j++)
        if (tableau[j]==num) exit = 1;
    if (exit) printf("\033[0;32mthe nunber is existing \033[0m");
    else printf("\033[0;31mthe number is not existing \033[0m");

    return 0;
}
