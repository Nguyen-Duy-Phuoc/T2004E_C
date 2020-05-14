#include <stdio.h>
int main(){
	int n;
	printf("nhap so can tinh:");
	scanf("%d",&n);
	int n1=n , n2=0;
    for (n1;n1/=10){
    	n2 = n2*10 + n1%10;
    	n1 /= 10;
    	printf("so dao nguoc la:%d",n2);
    	}
}
