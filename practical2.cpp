#include<stdio.h>
#include<string.h>
void NhapChuoi(char str[20]){
	printf("Nhap chuoi ");
	scanf("%s",str);
	}
int main(){
	char str[20];
	NhapChuoi(str);
	int dem1=0,dem2=0,dem3=0,dem4=0,dem5=0;
	char a,e,i,o,u;
	int n=strlen(str);
	for(int i=0;i<=n;i++){
		if(str[i]=='a'){
			dem1++;
			}
		}	
	for(int i=0;i<=n;i++){		
		if(str[i]=='e'){
			dem2++;
			}
		}
	for(int i=0;i<=n;i++){		
		if(str[i]=='i'){
			dem3++;
			}
		}
	for(int i=0;i<=n;i++){		
		if(str[i]=='o'){
			dem4++;
		}
	}
	for(int i=0;i<=n;i++){		
		if(str[i]=='u'){
			dem5++;
		}
	}				
	printf("a: %d\n",dem1);
	printf("e: %d\n",dem2);
	printf("i: %d\n",dem3);
	printf("o: %d\n",dem4);
	printf("u: %d\n",dem5);
	printf("rest: %d\n",strlen(str)-dem1-dem2-dem3-dem4-dem5);
	printf("a: %f\n",(float)dem1*100/n);
	printf("e: %f\n",(float)dem2*100/n);
	printf("i: %f\n",(float)dem3*100/n);
	printf("o: %f\n",(float)dem4*100/n);
	printf("u: %f\n",(float)dem5*100/n);
	printf("rest: %f\n",(float)(strlen(str)-dem1-dem2-dem3-dem4-dem5)*100/n);
	}
