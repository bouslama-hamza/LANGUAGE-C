#include<stdio.h>
#include<math.h>
float intergrale(float a,float b,float c,float x1,float x2){
float  intera,posa,nega;
    posa=(pow(x1,3)/3)*a;
    nega=(pow(x2,3)/3)*a;
    intera = posa-nega;
float  interb,posb,negb;
    posb=(pow(x1,2)/2)*b;
    negb=(pow(x2,2)/2)*b;
    interb=posb-negb;
float  interc,posc,negc;
    posc=x1*c;
    negc=x2*c;
    interc=posc-negc;
float ense=0;
    ense = intera + interb + interc;}
int main(){
    float a,b,c,x1,x2;
    float interg;
    printf("donnez les borne:\nExemple [X;Y]:");
        scanf("[%f;%f]",&x1,&x2);
    printf("donnez le nombre a:");
        scanf("%f",&a);
    printf("donnez le nombre b:");
        scanf("%f",&b);
    printf("donnez le nombre c:");
        scanf("%f",&c);
    interg=intergrale(a,b,c,x1,x2);
    printf("l'integrale est :%f\n",interg);
}