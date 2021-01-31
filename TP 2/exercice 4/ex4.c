#include<stdio.h>
#define NP 2
struct song 
{
	char auteur[64];
	char titre[64];
	int anne;
	char list[64];
	int nbchansons;
}hex[NP];
void focafich(struct song );
struct song foctake();
int main (){
	int i;
	char name;
	int x;
	for(i=0;i<NP;i++){
		hex[i]= foctake();
	}
	for(i=0;i<NP;i++){
		focafich(hex[i]);
	}
	printf("donnez le titre: ");
	scanf("%s",&name);
	for(i=0;i<NP;i++){
		if(*hex[i].auteur==name){
			focafich(hex[i]);
			x=1;
			break;
		}
	}
	if(x=!1)
	printf("le titre n\'existe pas dans la mimoire");
}
struct song foctake(){
	struct song atr;
	printf("donnez l\'auteur:\n");
	scanf("%s",&atr.auteur);
	printf("donnez le titre:\n");
	scanf("%s",&atr.titre);
	printf("donnez le list:\n");
	scanf("%s",&atr.list);
	printf("donnez l\'anne:\n");
	scanf("%d",&atr.anne);
	printf("donnez le nomber de chasone:\n");
	scanf("%d",&atr.nbchansons);
	return(atr);
}
void focafich(struct song atr ){
	printf("l\'auteur:%s\n",atr.auteur);
	printf("le titre:%s\n",atr.titre);
	printf("l\'anne:%d\n",atr.anne);
	printf("le list:%s\n",atr.list);
	printf("le nomber de chasone:%d\n",atr.nbchansons);
}