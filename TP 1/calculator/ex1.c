#include<stdio.h>
int main(){
    float a,b,x,c;
    printf("donnez le premier nombre:\n");
    scanf("%f",&a);
    printf("donnez le deuxieme nombre:\n");
    scanf("%f",&b);
    printf("choisir un operation:\n1_addition\n2_division\n3_soustraction\n4_multiplication\n");
    scanf("%f",&x);
    if (x==1){ c=a+b;
    printf("%f + %f = %f\n",a,b,c);
    }
    else if(x==2){
        if(b!=0){c=a/b;
         printf("%f / %f = %f\n",a,b,c);
    } 
        else{
            printf("invalid!!!!\n");
        }
    }
    else if(x==3){c=a-b;
    printf("%f - %f = %f\n",a,b,c);
    }
    else if (x==4){  c=a*b;
    printf("%f * %f = %f\n",a,b,c); 
    }
    else{
        printf("choix invalide ressayer.\n");  
    }
    printf("Merci\n");
}