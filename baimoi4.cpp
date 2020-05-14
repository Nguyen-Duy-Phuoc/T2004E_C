#include <stdio.h>
#include <math.h>
int main(){
	int a,b,c;
	printf("Nhap vao 3 canh:\n");
	printf("Nhap vao canh a:\n");
	scanf("%d",&a);
	printf("Nhap vao canh b:\n");
	scanf("%d",&b);
	printf("Nhap vao canh c:\n");
	scanf("%d",&c);
	if (a>0 && b>0 && c>0){
		if (a<b+c && b<a+c &&c<a+b){
	printf("Day la 3 canh cua tam giac\n");
	int	p=(a + b + c);
	float p2=p/2;
	float s=sqrt(p2*(p2-a)*(p2-b)*(p2-c));
			printf("Chu vi tam giac: %d\n",p);
			printf("Dien tich tam giac: %f\n",s);
		} else 
		printf("Day khong phai 3 canh tam giac\n");
    }else 
			printf("Day khong phai 3 canh tam giac:\n");
			}
