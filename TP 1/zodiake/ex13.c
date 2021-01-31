#include<stdio.h>
int main(){
    int moin, jour;
    printf("donnez le mois de naissance:");
    scanf("%d",&moin);
    printf("donnez le jour de naissance:");
    scanf("%d",&jour);switch (moin){
    case 1: if( jour >=1 && jour<=20){ printf("capricorne\n");}
    else{printf("verseau\n");}; break;
    case 2: if(jour>=1 && jour<=19){ printf("Verseau\n");}
    else{ printf("Poissons\n");}; break;
    case 3: if( jour >=1 && jour<=20){printf("Poissons\n");}
    else{printf("Bélier\n");}; break;
    case 4: if(jour >=1 && jour <=20){printf("Bélier\n");}
    else{printf("Taureau\n");}; break;
    case 5: if(jour >=1 && jour <=20){printf("Taureau\n");}
    else{printf("Gémeaux\n");}; break;
    case 6: if (jour >=1 && jour<=21){printf("Gémeaux\n");}
    else{printf("Cancer\n");};break;
    case 7: if (jour >=1 && jour<=22){printf("Cancer\n");}
    else{printf("Lion\n");};break;
    case 8: if (jour >=1 && jour<=23){printf("Lion\n");}
    else{printf("Vierge\n");};break;
    case 9: if (jour >=1 && jour<=23){printf("Vierge\n");}
    else{printf("Balance\n");};break;
    case 10: if (jour >=1 && jour<=23){printf("Balance\n");}
    else{printf("Scorpion\n");};break;
    case 11: if (jour >=1 && jour<=22){printf("Scorpion\n");}
    else{printf("Sagittaire\n");};break;
    case 12: if (jour >=1 && jour<=21){printf("Sagittaire\n");}
    else{printf("Capricorne\n");};break;}}
    