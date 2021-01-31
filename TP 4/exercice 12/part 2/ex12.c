#include<stdio.h>
int main(){
char msg[100];
char *p;
printf("donnez votre prenom :");
scanf("%s",&msg);
for (p=msg; *p!='\0';p++){
     printf("%c   =    %d\n",*p,*p);
}
}
