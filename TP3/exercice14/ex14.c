#include <stdio.h>
#include <stdlib.h>
int Ackermann(int X,int Y) {
      if(X == 0) return Y+1;
      else {
        if(Y == 0) return Ackermann(X-1,1);
              else return Ackermann(X-1,(Ackermann(X,Y-1)));
      }
    }
 
int main()
{
    int i,n,j=0;
    for(i=1;i<=2;i++) for(n=1;n<=10;n++) {
       printf("A(%i,%i)=%i  ",i,n,Ackermann(i,n));
       j++;
       if(j==4){printf("\n");j=0;}
    }
}
