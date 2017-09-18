#include<stdio.h>
#include<stdlib.h>

struct Student{
    char* name;
    int age;
    float cgpa;
    int id;
};

typedef struct Student student;

int less(void *x, void* y)
{
    if(x < y) return -1;
    if(x > y) return 1;
    return 0;
}

void exch(int a[], int x, int y)
{
    int temp = a[x];
    a[x] = a[y];
    a[y] = temp;
}

void quickSort(void *a[], int left, int right, int (*) less(void*, void*), int (*) exch(int, int))
{
    if(left >= right)
        return;
    int i;
    int last = left;
    
    for(i = left+1; i <= right; i++)
    {
        if(*less(i, left) < 0)
            *exch(++last, i);
    }
    *exch(left, last);
    quickSort(a, left, last-1, less, exch);
    quickSort(a, last+1, right, less, exch);    
}

void main()
{
    int i;
    student a[5];
    for(i = 0; i < 5; i++)
    {
        printf("Enter data of student number %d",i);
        scanf("%s %d %f %d",&a->name,&a->age,&a->cgpa,&a->id);
    }
}
