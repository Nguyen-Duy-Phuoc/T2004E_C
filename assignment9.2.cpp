#include <stdio.h>
#include <conio.h>
#include <string.h>
void main()
{ clrscr();
char s1[10],s2[10];
int n;

printf("nhap xau thu 1:");
gets(s1);
printf("nhap xau thu 2:");
gets(s2);
/* Kiem tra xem xau 1 co nam trong xau 2 */
if(*strstr(s2,s1)==s1[0])
printf("xau thu 1 nam trong xau thu 2:");
else
printf("xau thu 1 ko nam trong xau thu 2:");
getch();
}
