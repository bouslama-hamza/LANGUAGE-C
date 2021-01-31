#include<stdio.h>
int main(){
    int n,i;
    float puiss,x;
    printf("donnez un nombre :");
    scanf("%f",&x);
    printf("donnez la puissance:");
    scanf("%d",&n);
    puiss=1;
    for (i = 1; i <= n; i++)
    {
        puiss=puiss*x;
    }
    printf("%f a la puisssance %d est : %f\n",x,n,puiss);
}
