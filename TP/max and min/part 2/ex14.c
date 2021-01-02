#include<stdio.h>
int main(){
int a,b,c,g,p;
printf("donner un nombre a: ");
scanf("%d",&a);
printf("donner un nombre b: ");
scanf("%d",&b);
printf("donner le nombre c: ");
scanf("%d",&c);
if (a>b)
{
g=a;
p=b;
g=(a>c)?a:c;
p=(b<c)?b:c;
}
else if(a<b)
{
g=b;
p=a;
p=(c>a)?a:c;
g=(c<b)?b:c;
}
printf("le plus grand entier est : %d\n",g);
printf("le plus petit entier est : %d\n",p);
}