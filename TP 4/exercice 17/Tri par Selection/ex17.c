#include<stdio.h>
int Tri_Selection ( int T[], int n){
    int i,j,tmp;
        for(i=0;i<n-1;i++){
            for (j=i;j<n;j++){
            if (T[i]>T[j]){ tmp=T[i];
                            T[i]=T[j];
                            T[j]=tmp;}
            }
            printf("%d ",T[i]);
        }
        printf("%d\n",tmp);
}
int main (){
    int dim,i;
    printf("combien de nombre?:");
    scanf("%d",&dim);
    int tab[dim];
    printf("donnez %d nombre apres 'ENTER':\n",dim);
    for (i = 0; i < dim; i++){
        scanf("%d",&tab[i]);
    }
    printf("apres tri :\n");
    Tri_Selection(tab,dim);
}