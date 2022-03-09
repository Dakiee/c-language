#include<stdio.h>
int main(){
	int x;
	int *y;
	y=&x;
	*y=12345;
	printf("x=%d\n",x);
	return 0;	
}
