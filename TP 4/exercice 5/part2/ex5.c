#include <stdio.h>
int main()
{
int i, min, max;
int t[10];
    printf("donnez %d valeurs\n",10);
        for(i=0;i<10;i++){ 
            scanf ("%d",t+i);
        }
max=min=*t;
        for (i=1;i<10;i++){
         if (*(t+i)>max) max=*(t+i);
         if (*(t+i)<min) min=*(t+i);
          }

    printf("max : %d\n",max);
    printf("min : %d\n",min);
}