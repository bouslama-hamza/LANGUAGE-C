
#include<stdio.h>
#define NP 3
int i;
struct s_point {
	char x;
	float y;
	float z;
};
	struct s_point Courbe[NP];
int main(){
    struct s_point heli(struct s_point x);
	struct s_point hei(int i);
	for(int i=0;i<NP;i++){
		Courbe[i]= hei(i);
    
	}
		for(int i=0;i<NP;i++){
		heli(Courbe[i]);
	}
}
struct s_point hei(int i){
	struct s_point Courbe1;
		printf("donnez le point %d :\n example: A(x,y)",i+1);
		scanf("%c(%g,%g)",&Courbe1.x,&Courbe1.y,&Courbe1.z);
	return(Courbe1);
}
struct s_point heli(struct s_point x){
	printf("le %c a des cordone : \nx=%g\ny=%g\n",Courbe[i].x,Courbe[i].y,Courbe[i].z);
}