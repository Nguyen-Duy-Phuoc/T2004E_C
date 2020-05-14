// nhap vao 2 so nguyen, tinh tong va hieu cua 2 so do.
#include <stdio.h>
int main(){
	int x;
	// printf("Nhap vao gia tri:\n");
	scanf("%d",&x); 
	int y;
	// printf("Nhap vao gia tri:\n");
	scanf("%d",&y);
	int z;
	z= x + y;
	printf("tong cua hai so %d va %d la: %d \n",x,y,z);
	int d;
	d= x - y;
	printf("hieu cua hai so %d va %d la: %d \n",x,y,d);
}
