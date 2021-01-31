#include<stdio.h>
int main(){
     int COM,i;
     char *p;
     printf("combien de caractere dans votre prenom :");
          scanf("%d",&COM);
          char msg[COM];
     printf("donnez les caractere de votre prenom:\n");
          for (i = 0; i < COM; i++){
               getchar();
               scanf("%c",&msg[i]);
          }
     p=msg;
     printf("votre nom complete est : %s\n",p);

}
