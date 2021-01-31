#include<stdio.h>
#include<math.h>
int main(){
    int n,i;
    float puiss,x;
    printf("donnez un nombre :");
    scanf("%f",&x);
    printf("donnez la puissance:");
    scanf("%d",&n);
    i=1;
    puiss=1;
    while (i<=n)
    {
    puiss=puiss*x;
    i=i+1;
    }
    printf("%f a la puisssance %d est : %f\n",x,n,puiss);
}
