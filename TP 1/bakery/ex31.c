#include<stdio.h>
int main (){
    int j,h;
    printf("choisir le jour :\n0_lundi\n1_mardi\n2_mercredi\n3_joudi\n4_vendredi\n5_samedi\n6_dimanche\n");
    scanf("%d",&j);
    printf("donnez l'heure:");
    scanf("%d",&h);
    switch (j)
    {
    case 0: if(h>=7 && h<=13){printf("le boulangerie est ouverte\n");}
        else{printf("le boulangerie n'est pas ouverte\n");}break;
    case 1: printf("le boulangerie n'est pas ouverte\n");break;
    case 2: if(h>=7 && h<=13||h>16 && h<=20){printf("le boulangerie est ouverte\n");}
        else{printf("le boulangerie n'est pas ouverte\n");}break;
    case 3: if(h>=7 && h<=13||h>16 && h<=20){printf("le boulangerie est ouverte\n");}
        else{printf("le boulangerie n'est pas ouverte\n");}break;
    case 4: if(h>=7 && h<=13||h>16 && h<=20){printf("le boulangerie est ouverte\n");}
        else{printf("le boulangerie n'est pas ouverte\n");}break;
    case 5: if(h>=7 && h<=13||h>16 && h<=20){printf("le boulangerie est ouverte\n");}
        else{printf("le boulangerie n'est pas ouverte\n");}break;
    case 6: if(h>=7 && h<=13||h>16 && h<=20){printf("le boulangerie est ouverte\n");}
        else{printf("le boulangerie n'est pas ouverte\n");}break;                
    default: printf("choix invalid ressayer\n");break;   
    }
}