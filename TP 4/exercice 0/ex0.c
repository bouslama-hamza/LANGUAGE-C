#include<stdio.h>
int main()
{
int i;
int *p;

i = 1;
p = &i;

printf("valeur de i avant: %d\n",i);
printf("valeur de p avant: %u\n",*p);
*p = 2;
printf("valeur de i après: %d\n",i);
printf("valeur de p après: %u\n",*p);
}