#include<stdio.h>
int DivisionEuclidienne(int a,int b){
    int quo,res;
    quo=a/b;
    res=a%b;
    printf("le quotient =  %d\n",quo);
    printf("le reste    =  %d\n",res);  
}
int main(){
    int a,b,res,quo;
    printf("donnez le nombre a:");
     scanf("%d",&a);
    printf("donnez le nombre b:");
     scanf("%d",&b);
    DivisionEuclidienne(a,b);
}