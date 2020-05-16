#include <stdio.h>
int main(){
	int n,S;
	printf("Nhap n:\n");
	scanf("%d",&n);
	S=0;
	int i=0;
	while(n!=0){
		++i;
		i=n%10;
		n/=10;
		S+=i;
		}
	printf("Tong so chu so n:%d\n",S);
	}
