#include <stdio.h>
#include<math.h>
int main()
{
	int i;
 	float n,s,x,y;
 	n=1;
 	s=1;
 	i=1;
 	do
 	{
 		n=n*i;
 		x=s;
 		s=s+1/n;
 		y=s;
 		i++;
	}
	while((y-x)>0.01);
	printf("%f",s);
	printf("\ne(n)-e(n-1)=%f\n",y-x);
}
