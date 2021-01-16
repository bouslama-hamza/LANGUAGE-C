#include<stdio.h>
struct s_point 
{
	char x;
	float y;
	float z;
};
int main()
{
	struct s_point hei();
	struct s_point hi;
	hi= hei();
	printf("le %c a des cordone : \nx=%f\ny=%f",hi.x,hi.y,hi.z);
}
struct s_point hei()
{
	struct s_point hi;
	printf("donnez le point : \n example: A(x,y)\n");
	scanf("%c(%f,%f)",&hi.x,&hi.y,&hi.z);
	return(hi);
}