#include <stdio.h>          //Tính tong S = 1+2+3+4+5+...+1000
int main(){
	int i;
	int sum= 0;
	for ( i=0 ; i<= 1000 ; i++){
	sum += i;
	}
	printf("Sum= %d\n",sum);
}
