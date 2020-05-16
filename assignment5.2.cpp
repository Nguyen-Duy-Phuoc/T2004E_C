#include <stdio.h>
int main(){
	int n;
	printf("Nhap n:\n");
	scanf("%d",&n);
	int i=0;
	while(n>0){
		n/=10;
		++i;
		}
	printf("So chu so n:%d\n",i);
	}
