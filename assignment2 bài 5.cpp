#include <stdio.h>
#include <math.h>
int main(){
	int a,b;
	printf("Nhap vao 2 so:\n");
	printf("Nhap so thu 1:\n");
	scanf("%d",&a);
	printf("Nhap so thu 2:\n");
	scanf("%d",&b);
	if (a>=b){
		printf("Thuong cua 2 so %d/%d la:\n",(a/b));
	}
	else{
		printf("Tich cua 2 so %d*%d la:\n",(a*b));
	}
}
