#include<stdio.h>
#include<math.h>
int main(){
    float a,b,c,D,X1,X2;
printf("donnez le nombre a :\n");
scanf("%f",&a);
printf("donnez le nombre b :\n");
scanf("%f",&b);
printf("donnez le nombre c :\n");
scanf("%f",&c);
D= (b*b)-(4*a*c);
if(D>0){
    X1= (-b+sqrt(D))/(2*a);
    X2= (-b-sqrt(D))/(2*a);
    printf("les solution de votre équation est :\nsolution 1 : %f\nsolution 2 : %f\n",X1,X2);
}
else if(D==0){
    X1= -b/(2*a);
    printf("la solution de votre équations est :\nsolution 1 : %f\n",X1);
}
else{
    printf("votre équations contient aucune solution.\n");    
}
printf("Merci\n");
}