#include<stdio.h>
int polynome(float A[20],int N,int X){
    int I;
    float P;
for (P=0.0, I=0 ; I<=N ; I++){
       P = P*X + A[N-I]; 
       }
       return P;
}
int main(){
    int N;
    float X,A[20];
    float P;
    printf("Entrer le degré  N du polynôme (max.20) : ");
        scanf("%d", &N);
    printf("Entrer la valeur X de l'argument : ");
        scanf("%f", &X);
    for (int I=0 ; I<=N ; I++){
        printf("Entrer le coefficient A%d : ", I);
        scanf("%f", &A[I]);
    }
        P=polynome(A,N,X);
        printf("Valeur du polynôme pour X = %.2f : %.2f\n", X, P);
}
