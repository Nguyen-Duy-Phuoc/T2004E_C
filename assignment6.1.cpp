#include <stdio.h>
int main(){
	int n;
	printf("Nhap n=\n");
	scanf("%d",&n);
	int ary[n];
	for(int i=0;i<n;i++){
		printf("Nhap so thu %d:\n",i);
		scanf("%d",&ary[i]);
	}

	for(int i=n;i>=0;i--){
	if(ary[i]%2 != 0 && i%2==0){
		}
	} printf("so le cuoi cung cua mang la:%d",ary[n]);
}
