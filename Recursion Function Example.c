#include<stdio.h>


int fact(int val)
{
    if(val==1)
        return 1;
    return val*fact(val-1);
}
int main()
{
    int val = 5;
    printf("%d",fact(val));
}
