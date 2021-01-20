#include <stdio.h>
void nhap(int *pA, int n)
{
    for(int i = 0; i < n; i++)
    {
        printf("mang %d :",i+1);
        scanf("%d",&pA[i]);
    }
}

void xuat(int *pA, int n)
{
    for(int i = 0; i < n; i++)
    {
        printf("so mang la %d va mang la %d \n",i,pA[i]);
    }
}
int main()
{
    int a[100],n;
    printf("nhap so mang : ");
    scanf("%d",&n);
    nhap(a,n);
    xuat(a,n);
    return 0;
}