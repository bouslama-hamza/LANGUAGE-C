#include<stdio.h>
int main(){
    float N[4][4];
    float M[4];
    float Moy,S=0,moyenne=0;
    int i,j,x;
    //partie de donnez les note 
for(i = 0,x = 0;i < 4, x < 4; i++,x++ ){ 
    for (j = 1; j <=4; j++){
        printf("donnez la note %d de l'etudiant %d :",j+1,i+1);
        scanf("%f",&N[i][j]);
        if(N[i][j]>20 || N[i][j]<0){ 
            printf("invalid donnez un 20 >note >0 \n");
            j=j-1;
            goto suite;}
            S+=N[i][j];
            suite : ;
    // parite de la calculation 
    }//fin pour
    M[x]=S;
    S=0;
} //fin pour
    // partie de la resultat
for(x = 0; x < 1;x++) {
    Moy= M[x]/4;
    moyenne += Moy;
    printf("la moyenne de l'etudiant %d est: %0.2f\n",x,Moy);
}//fin pour
printf("la moyenne de classe est : %0.2f\n",moyenne/4);
}
