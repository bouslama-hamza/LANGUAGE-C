#include <stdio.h>
#include <stdlib.h>
struct reservoir_voiture {
int capacite ; // capacité maximale
int quantite ; } ;// niveau de carburant
void main(){
	int kilo,liter;
	int totalkilo = 0 ,totalliter = 0;
	float kiloparliter;
	float totalkiloparliter;
	float resulta;
	printf("Entre les kilometres (-1 pour quitter) :");
		scanf("%d",&kilo);
			while (kilo!=-1){
				printf("Entre les liters :");
					scanf("%d",&liter);
					totalkilo +=kilo;
					totalliter +=liter;
				if (liter!=0){
					kiloparliter=(float)kilo/liter;
					resulta = kiloparliter;
				}
			totalkiloparliter = (float)totalkilo/totalliter;
			resulta +=totalkiloparliter;
	printf("Resulta : %0.3f\n",resulta);
	printf("Entre les kilometres (-1 pour quitter)");
			scanf("%d",&kilo);
		}
}