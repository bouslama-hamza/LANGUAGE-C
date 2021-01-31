#include<stdio.h>
int main(){
    int a,i;
    printf("choisir un instruction:\n1_Break:\n2_Continue:\n3_goto:\n");
    scanf("%d",&a);
    if (a==1){while (1){
            printf("donnez un nombre >0\n");
            scanf("%d",&i);
            if(i<0){printf("erreur fin de programme");
            break;}
            printf("voici le carre : %d\n",i*i);}}
    else if(a==2){do{
        printf("donnez un nombre >0 :");
        scanf("%d",&i);
            if(i<0){printf("svp un nombre >0");
            continue;}
            printf("voici le carre : %d\n",i*i);
            } while (i);}
    else if(a==3){do{
         printf("donnez un nombre >0");
         scanf("%d",&i);
         if (i<0){printf("svp un nombre >0\n");
         goto suite;}
         printf("voici son carre : %d\n",i*i);
         suite : ;
        } while (i);}
    else
    {
        printf("invalid ressayez");
    }
}
