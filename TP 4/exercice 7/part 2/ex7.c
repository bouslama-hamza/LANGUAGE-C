#include <stdio.h>
float somme (float * tab, int n, int p){
int i;
float s = 0;
    for (i=0 ; i < n*p ; i++){ 
     s += tab[i] ;
    }
return s ;
}

void main(){
float tab [3][4] = {{1,2,3,4} , {5,6,7,8} , {9,6,2,7}} ;
float S;
    S= somme((float*)tab,3,4);
printf("la somme est: %f\n", S) ;
}