#include<stdio.h>
#include <stdlib.h>
int* concat_tab(int n1,int t1[],int n2, int t2[]){
int i;
int j;
int *res = malloc((n1+n2)*sizeof(int));
    for (i = 0; i < n1; i++){
        res[i]=t1[i];
        printf("%d ",res[i]);
        }
    for (j=n1 ; j < n2+n1; j++){
        res[j]=t2[j-n1];
        printf("%d ",res[j]);
        }
        printf("\n");
    }
int main(){
    int L,N,i,j;
    printf("donnez nombre des colone de premier tableux :");
        scanf("%d",&L);
        int tab1[L];
    printf("donnez nombre des colone de deuxieme tableux :");
        scanf("%d",&N);
        int tab2[N];
    printf("donnez les valeur de premier tableu:\n");
        for (i = 0; i <L; i++) {          
             scanf("%d",&tab1[i]); 
            }

    printf("donnez les valeur de deuxieme tableu:\n");
        for (i = 0; i <L; i++){
             scanf("%d",&tab2[i])  ; 
            }
         printf("********concaténation********\n");   
concat_tab(L,tab1,N,tab2);
            
}