#include <stdio.h>
int main(){
	int a,b,S;
	printf("Nhap a:\n");
	scanf("%d",&a);
	printf("Nhap b:\n");
	scanf("%d",&b);
	S=0;
	if (a<b){
	for (int i=a;i<=b;i++)
	S+=i;
	}
	printf("Tong 2 so tu a den b la:%d",S);
	}
