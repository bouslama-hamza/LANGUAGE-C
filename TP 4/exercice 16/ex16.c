#include<stdio.h>
#include<string.h>
int main(){
char ch1[50] = "bonjour" ;
char * ch2 = " monsieur" ;
printf ("avant : %s\n", ch1) ;
strncat (ch1, ch2, 6) ;
printf ("après : %s\n", ch1) ;
}