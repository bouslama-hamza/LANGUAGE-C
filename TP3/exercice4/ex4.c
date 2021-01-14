#include<stdio.h>
void ma_fonction( int x ) {
int y;
x = 0;
y = -1;
}
int main() {
int x = 22;
int y = 23;
ma_fonction(x);
printf( "x=%d y=%d\n", x, y ); }