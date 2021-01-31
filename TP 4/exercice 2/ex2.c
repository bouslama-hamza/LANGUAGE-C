#include <stdlib.h>
#include <stdio.h>
int main(){
int a = 10;
int b = 5;
int tab[3] = {1,2,3};
int *p_tab;
tab[0] = a;
*(tab + 1) = b;
p_tab = tab + 2;
*p_tab = *(p_tab - 1);
--p_tab;
*p_tab = *(p_tab- 1);
--p_tab;
*p_tab= *(p_tab + 2);
printf("%d\n",a);
printf("%d\n",b);
printf("%d\n",tab[0]);
printf("%d\n",tab[1]);
printf("%d\n",tab[2]);
printf("%ls\n",p_tab);
}
