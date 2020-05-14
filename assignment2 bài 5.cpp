#include <stdio.h>
#include <math.h>
int main(){
	int a,b,x,y;
	printf("Nhap vao 2 so:\n");
	printf("Nhap so thu 1:\n");
	scanf("%d",&a);
	printf("Nhap so thu 2:\n");
	scanf("%d",&b);
	if (a>=b){
		x=(a/b);
		printf("Thuong cua 2 so %d la:\n",x);
	}
	else{
		y=(a*b);
		printf("Tich cua 2 so %d la:\n",y);
	}
}
