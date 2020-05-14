#include <stdio.h>
int main()
{
	int m = 4000;
    int year;
    
    for(year=0;m<1000000;year++){
    	m += (m*8/100);
    	}
    	printf("sau %d nam se duoc 1M$",year);
    }
