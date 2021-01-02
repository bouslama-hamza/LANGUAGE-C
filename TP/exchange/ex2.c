#include<stdio.h>
int main(){
    float x,y,z;
    printf("donnez la valeur de x:");
    scanf("%f",&x);
    printf("donnez la valeur de y:");
    scanf("%f",&y);
    z=x;
    x=y;
    y=z;
    printf("la valeur de x est: %0.1f\n",x);
    printf("la valeur de y est: %0.1f\n",y);
}