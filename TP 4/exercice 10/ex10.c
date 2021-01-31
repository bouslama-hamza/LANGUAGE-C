#include<stdio.h>

int main(){
char msg[]="Bonjour !";
char *p;
for (p=msg; *p!=0;p++){
    printf("%c\n",*p);}
}