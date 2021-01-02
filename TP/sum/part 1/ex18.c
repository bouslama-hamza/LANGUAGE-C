#include<stdio.h>
int main(){
int i, n, som ;
som = 0 ;
i=0;
while (i<4)
{
printf ("donnez un entier ") ;
scanf ("%d", &n) ;
som += n ;
i++;
} 
printf ("Somme : %d\n", som) ;
}
