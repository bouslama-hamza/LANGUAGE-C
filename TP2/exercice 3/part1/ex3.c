#include<stdio.h>
int main()
{
	struct s_point 
	{
		char x;
		float y;
		float z;
	};
	struct s_point hi;
	printf("donnez le point : \n example: A(x,y)\n");
	scanf("%c(%f,%f)",&hi.x,&hi.y,&hi.z);
	printf("le %c a des cordone : \nx=%f\ny=%f",hi.x,hi.y,hi.z);
}
