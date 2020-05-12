#include <stdio.h>
#include <math.h>
int main(){
	int a;
	printf("Nhap so can tim:\n");
	scanf("%d",&a);
	if (a < 0 || a > 10000) {
	printf("Khong phai so de bai yeu cau\n");
	} else if (a>=1 && a<10){
		printf("So dao nguoc la:%d",a);
		}else if (a>=10 && a<100){
	printf("So dao nguoc la:%d",((a%10)*10 + a/10));
			}else if (a>=100 && a<1000){
			printf("So dao nguoc la:%d",((a%10)*10*10+((a/10)%10)*10+(a/10)/10));
				}else if (a>=1000 && a<10000){
				printf("So dao nguoc la:%d",((a%10)*10*10*10+((a/10)%10)*10*10+((a/100)%10)*10+(a/100)/10));		
				}
				
}
