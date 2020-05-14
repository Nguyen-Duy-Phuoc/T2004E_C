#include <stdio.h>

int main(){
	int n;
	printf("Nhap n=\n");
	scanf("%d",&n);
	int n2 = 0;
	for( ; n!=0 ; n/=10 ) {
		n2 = n2*10 + n%10;
	}
	printf("nghich dao: %d",n2);
	}
