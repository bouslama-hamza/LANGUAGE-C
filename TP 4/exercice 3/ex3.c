#include<stdio.h>
int main(){
int A = 1, B=2, C=3;
int *P1, *P2;
P1=&A;
P2=&C;
*P1=(*P2)++;
P1=P2;
P2=&B;
*P1-=*P2;
++*P2;
*P1*=*P2;
A=++*P2**P1;
P1=&A;
*P2=*P1/=*P2;
printf("A = %d\n",A);
printf("B = %d\n",B);
printf("C = %d\n",C);
printf("P1 = %u\n",P1);
printf("P2 = %u\n",P2);
}