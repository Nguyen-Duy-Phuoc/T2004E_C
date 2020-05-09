#include <stdio.h>
int main(){
	int a,b,c,max;
	printf("Nhap vao 3 so:\n");
	printf("So thu nhat:\n");
	scanf("%d",&a);
	printf("So thu hai:\n");
	scanf("%d",&b);
	printf("So thu ba:\n");
	scanf("%d",&c);
	max=a;
	if(b>max)
	max=b;
	if(c>max)
	max=c;
	printf("So lon nhat la %d",max);
	}
	
