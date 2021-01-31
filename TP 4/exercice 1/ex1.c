#include<stdio.h>
int main(){
    int a,i;
    char tab[10];
    printf("*(&a) = %d\n",*(&a));
    printf("*tab = %d\n",*tab);
    printf("*(tab + 0) = %d\n",*(tab + 0));
    printf("(*tab) + 1 = %d\n",(*tab) + 1);
    printf("&(tab[0]) = %d\n",&(tab[0]));
    printf("&(tab[i]) = %d\n",&(tab[i]));
    printf("++tab[i] = %d\n",++tab[i]);
}