#include<stdio.h>
int* return_array(int l);

void main()
{
    int i = 5;
    int len = 9;
    int *p1;
    int a[5];

    p1 =&i;

    printf("The value of i is %d\n", *p1);

    p1 = a;

    for(i=0;i<5;i++)
    {
        a[i] = i;
        printf("a[%d] = pointer %d arrayy %d\n",i,*p1,a[i]);        
        p1++;
    }

    p1 = return_array(len);

    for(i=0;i<len;i++)
    {
        printf("b[%d] = pointer %d\n",i,*p1);
        p1++;
    }

    printf("DONE JIMMY\n");
}

int* return_array(int l)
{
    int i = 0;
    static int b[100];

    while (i<l)
    {
        b[i]=i + 10;
        i++;
    }
    return b;
}