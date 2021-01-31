#include<stdio.h>
int main(){
   int i,a,x,S,n;
   printf("Les nombres d’AMSTRONG sont :\n");
   i=99;
   n=0;
   do{
   i++;
   x=i;
   S=0;
   while (x>0)
   {
     a=x%10;
     S=S+(a*a*a);
     x=x/10;
   }
   if (i==S){
   printf("%d\n",S);
   n++;
   }
}while(n<4);
printf("Fin des nombres d’AMSTRONG\n");
}
