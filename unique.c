#include<stdio.h>

int main()
{
    int a[5] = {1, 2, 3, 1, 3};

    int i, j, flag, uniq;


    for(i = 0;i < 5;i++)
    {
        for(j = i+1;j < 5; j++)
        {
            if(a[i] == a[j])
            {
                flag = 0;
                break;
            }
            else
            {
                flag = 1;
                uniq = a[i];
                printf("%d\n",uniq);
	    }
        }
     }
     if(flag == 1)
     {
         printf("%d",uniq);
     }
}
