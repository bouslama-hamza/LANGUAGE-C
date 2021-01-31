#include<stdio.h>
int main(){
    float n,x;
    int i,max;
    printf("donnez la valeur de n:");
    scanf("%f",&n);
    printf("dennez la valeur de max:");
    scanf("%d",&max);
    x=1;
    for (i = 1; i <= max ; i++)
    {
    x=((n/x)+x)/2;
    printf("%f,%f\n",x,n);
    }
    printf("%f\n",x);
}