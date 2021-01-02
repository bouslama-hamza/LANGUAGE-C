#include<stdio.h>
int main(){
int n ;
printf ("donnez un entier : ") ;
scanf ("%d", &n) ;
switch (n){
case 0 : printf ("nul\n") ;
break ;
case 1 : printf ("un\n") ;break ;
case 2 : printf ("deux\n") ;
break ;
}
printf ("au revoir\n") ;
}