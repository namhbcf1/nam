#include <stdio.h>

int len(char* pA)
{
    int i;
    while (pA[i] != '\n')
    {
      i++;
    }
    return i;
}
int main()
{
    char A[100];
    printf("nhap : ");
    fgets(A, sizeof A, stdin);
    int str = len(A);
    printf("do dai : %d",str );
    return 0;
}