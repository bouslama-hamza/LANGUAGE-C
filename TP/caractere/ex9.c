#include<stdio.h>
void main(){
    char c;
     printf("enter une lettre :\n");
     c= getchar();
     if((c>='A')&&(c<='Z')||(c>='a')&&(c<='z')){
    printf("%c est un caractere\n",c);
     }
     else{
         printf("invalid !!\n");
     }
     
}