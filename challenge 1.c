#include <stdio.h>
int main(){
int tableau[]={1,2,3,4,5};
int a = sizeof(tableau) / sizeof(tableau[0]);
for (int i = 0;i<a;i++){
    printf("%d\n",tableau[i]);
}
return 0;

}