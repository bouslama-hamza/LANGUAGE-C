#include<stdio.h>
int main(){
int i;
char *chaine;
chaine = "chaine de caracteres";
for (i = 0; *chaine != '\0'; i++)
chaine++;
printf("nombre de caracteres = %d\n",i);
}