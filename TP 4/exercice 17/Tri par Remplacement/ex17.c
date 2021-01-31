#include<stdio.h>
int maximum(int T[], int n){
    int i,max;
    max=T[0];
        for (i = 1; i < n-1; i++){
            if (T[i]>max){
                max=T[i]; }}
        return max;
}
int indice_min(int T[], int n){
    int i,min;
    min=T[0];
        for (i = 1; i < n; i++){
            if (T[i]<min){
                min=T[i];
            }
        }
        return min;
}
int main (){
    int max,j,i,n,S;
    printf("combien de nombre?:");
        scanf("%d",&n);
        int T[n],Ttrie[n];
    printf("donnez %d nombre apres 'ENTRE' :\n",n);
        for(i=0;i<n-1;i++){
            scanf("%d",&T[i]);}   
    max = maximum(T,n);
    i = 0;
    S = n;
    while (i<n-1){
        j = indice_min(T,n);
        Ttrie[i] = j;
        j = max;
        i++;
    }Ttrie[n-1] = max;
        printf("apres tri :");
        for (i = 0; i < n-1; i++){
        printf("%d ",Ttrie[i]);
        }
}
    
   
