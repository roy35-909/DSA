/*
    Simanta Kumar Roy
    Daffodil International University
    roy35-909@diu.edu.bd
    221-35-909
*/

#include<stdio.h>
int fact(int val)
{
    if(val==1)
        return 1;
    return val*fact(val-1);
}
int main()
{
    int val;
    printf("Enter a Value : ");
    scanf("%d",&val);

    printf("\n\nFactorial of %d is %d \n\n",val,fact(val));
    return 0;
}
