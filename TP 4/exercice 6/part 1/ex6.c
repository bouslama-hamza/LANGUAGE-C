#include<stdio.h>
#define dim 10
int main (){
int tab[dim] = { 6,7,8,9,1,0,3,2,5,4 };
int i,j,tmp;
        for(i=0;i<dim-1;i++)
            for (j=i;j<dim;j++)
            if (tab[i]>tab[j]) {
                tmp=tab[i];
                tab[i]=tab[j];  
                tab[j]=tmp;
                }
        for (i = 0; i <dim; i++)
        {
            printf("%d ",tab[i]);
        }
}