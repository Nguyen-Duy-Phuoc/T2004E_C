#include <stdio.h>
int main()
{
    float a;
    int n, i;
    printf("Nhap so tien gui tiet kiem: ");
    scanf("%f", &a);
    printf("Nhap so nam gui tiet kiem: ");
    scanf("%d", &n);
    for(i = 0; i <= n; i++) 
    {
        a = a + a * 8 / 100;
    }
    printf("So tien gui sau %d nam la %.5f\n", n, a);
    return 0;
}
