#include <stdio.h>
#include <math.h>
int main(){
	float a,b,c,d,x1,x2;
	printf("Nhap vao 3 so:\n");
	printf("a(x*x)+b(x)+c=0:\n");
	printf("Nhap so thu 1:\n");
	scanf("%f",&a);
	printf("Nhap so thu 2:\n");
	scanf("%f",&b);
	printf("Nhap so thu 3:\n");
	scanf("%f",&c);
	if (a==0){
		if (b==0){
    		if (c==0){
    		printf("phuong trinh vo so nghiem!\n");
			}else{
			printf("phuong trinh vo nghiem!\n");
			}
		}else{
			float x;
		float x =-c/b;
		printf("phuong trinh co nghiem duy nhat %f:\n",x);
	}
	}else{
	float d=(b*b)-(4*(a*c));
	}
	if (d<0){
		printf("phuong trinh vo nghiem!\n");
	}	
	else if (d==0){  
	float x1=x2=-b/(2*a);
	    printf ("phuong trinh co nghiem kep %f %f:\n",x1=x2=-b/(2*a));
	
	} else {
	float x1=((-b+sqrt(d))/2*a,-(b-sqrt(d))/2*a);
		printf("phuong trinh co 2 nghiem phan biet %f:\n",x1=((-b+sqrt(d))/2*a,-(b-sqrt(d))/2*a));
	}
	}

