#include <stdio.h>    //Nhap v�o 1 so tu nhi�n n, t�m c�c so < n chia het cho 3
int main(){
	int num,i;
	num = 0;
	printf("Cac so chia het cho 3 va nho hon num la: \n");
	for( i= 0  ; i<=num ; i++ ){
		if (i%3==0) {
	    printf("%d ", i);
	    }
	}
}
