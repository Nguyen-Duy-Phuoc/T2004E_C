#include<stdio.h>
#include<stdlib.h>
int main(){
	int n;
	do{
		printf("Nhap vao so luong o nho khoi tao ");
		scanf("%d",&n);
	} while(n<0);
    int *p;
    p=(int *)malloc(n*sizeof(int));
    for(int i=0;i<n;i++){
    	printf("Nhap ptu thu %d ",i);
    	scanf("%d",(p+i));
	}
    int tong=0;
    int tongmax=-1;
	int count=0;
	int count1=0;
	for(int i=0;i<n;i++){
	    if(*(p+i)>0){
		    count++; 
			tong+=*(p+i); 
			if(tong>tongmax){
			   tongmax=tong;
			   count1=count;
			}  
		}	
		else{
			count=0;  
			tong=0;
		}
	}
	printf("Tong cac phan tu duong lien tiep lon nhat la %d",tongmax);
}
