#include<stdio.h>
int main(){
int i;
char app[10];
char *chaine;
printf("donnez un nom:");
scanf("%s",app);
chaine = app;
/*chaine = "chaine de caracteres";*/
for (i = 0; *chaine != '\0'; i++){
chaine++;
}
printf("nombre de caracteres = %d\n",i);
}