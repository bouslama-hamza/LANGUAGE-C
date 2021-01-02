#include <stdio.h>
int main(){
int i, n, som ;
som = 0 ;
i=0;
do
{
printf ("donnez un entier ") ;
scanf ("%d", &n) ;
som += n ;
i++;
} while (i<4);
printf (" la Somme : %d\n", som) ;
}
