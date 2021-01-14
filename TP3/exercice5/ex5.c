#include<stdio.h>
float plusGrand(float x, float y)
{
if (x > y)
return x;
else
return y;
}
int main(){
    int a,b,res;
    printf("donnez le nombre 1:");
    scanf("%d",&a);
    printf("donnez le nombre 2:");
    scanf("%d",&b);
    res=plusGrand(a,b);
    printf("le plus grande nombre est : %d\n",res);
}