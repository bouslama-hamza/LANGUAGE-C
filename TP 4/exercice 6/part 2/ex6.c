#include<stdio.h>
#define dim 10
int main (){
int tab[dim] = { 6,7,8,9,1,0,3,2,5,4 };
int i,j,tmp;
int *p;
p=tab;
        for(i=0;i<dim-1;i++)
            for (j=i;j<dim;j++)
            if (*(p+i)>*(p+j)) {
                tmp=*(p+i);
                *(p+i)=*(p+j);  
                *(p+j)=tmp;
                }
        for (i = 0; i <dim; i++)
        {
            printf("%d ",*(p+i));
        }
}