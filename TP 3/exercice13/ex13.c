#include <stdlib.h>
#include<stdio.h>
#include <math.h>
float f(float x){
    return 1/x;
}
float I(float a, float b, int n){
    float s;
    int i ;
        s = (f(a) + f(b))/2;
            for(i = 1; i < n; i = i + 1)
            s = s + f(a + (b-a)*i/n);
            return s*(b-a)/n;
}
void approcheLn2(int n){
    float x, y, res;
        x = I(1, 2, n);
        y = log(2); 
        res = (x-y) / y * 100;
        res = (res >= 0) ? res : res;
        printf ("N = %d : I = %g L’erreur avec ln2 est %g%%\n", n, x, res);
}
void main(){
    approcheLn2(5);
    approcheLn2(10);
    approcheLn2(20);
    approcheLn2(50);
    approcheLn2(100);
}