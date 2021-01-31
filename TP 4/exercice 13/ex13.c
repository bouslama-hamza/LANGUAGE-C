#include<string.h>
#include<stdlib.h>
#include<stdio.h>
int main(){
int i;
char *chaine1, *chaine2, *res, *p;
chaine1 = "chaine ";
chaine2 = "de caracteres";
res = (char*)malloc((strlen(chaine1) + strlen(chaine2)) * sizeof(char));
p = res;
for (i = 0; i < strlen(chaine1); i++)
*p++ = chaine1[i];
for (i = 0; i < strlen(chaine2); i++)
*p++ = chaine2[i];
printf("%s\n",res);
}
