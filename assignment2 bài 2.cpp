#include <stdio.h>
int main(){
	int a,b,c,min;
	printf("Nhap vao 3 so:\n");
	printf("Nhap so thu 1:\n");
	scanf("%d",&a);
	printf("Nhap so thu 2:\n");
	scanf("%d",&b);
	printf("Nhap so thu 3:\n");
	scanf("%d",&c);
	min=a;
	if(b<min)
	min=b;
	if(c<min)
	min=c;
	printf("so be nhat la %d",min);
	}
