
#include <stdio.h>;
#include <math.h>;
int main(){
	int a,b,c;
	do
	{
	printf("Nhap vao 3 so:\n");
	printf("Nhap so thu 1:\n");
	scanf("%d",&a);
	printf("Nhap so thu 2:\n");
	scanf("%d",&b);
	printf("Nhap so thu 3:\n");
	scanf("%d",&c);
	}
	while((a+b<=c)||(a+c<=b)||(b+c<=a));
	printf("a, b, c la ba canh cua mot tam giac");
}
