#include<stdio.h>
int main(){
    int i,c,N,j;
    printf("donnez Le nombre des éléments de les deux tableau :");
    scanf("%d",&N);
    float T1[N],T2[N];
    for(i = 0; i < N; i++){
        printf("donnez le nombre %d du tableux 1:",i+1);
        scanf("%f",&T1[i]);
    }
    for(j = 0; j < N; j++){
        printf("donnez le nombre %d du tableux 2:",j+1);
        scanf("%f",&T2[j]);
    }
    for (j = 0;j < N; j++ ){
        for (i = 0; i < N; i++){
            if(T1[i]==T2[j]){
            printf("le nombre %d du tableux 1 = le nombre %d du tableux 2\n",i+1,j+1);
            }
        }
       
    }
   
}