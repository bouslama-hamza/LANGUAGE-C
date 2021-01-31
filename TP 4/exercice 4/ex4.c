#include <stdio.h>
int main()
{
void echange (int * ad1, int * ad2) ;
int a=10, b=20 ;
printf ("avant appel %d %d\n", a, b) ;
echange (&a, &b) ;
printf ("après appel %d %d\n", a, b) ;
}
void echange (int * ad1, int * ad2){
int x ;
x = * ad1 ;
* ad1 = * ad2 ;
* ad2 = x ;
}