#include<stdio.h>

int main()
{
    int a[5] = {1,2,1,3,2};

    int i,x;

    for(i=0;i<5;i++)
    {
        x^=a[i];
    }
    printf("%d",x);
}
