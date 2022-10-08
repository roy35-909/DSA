/*
    Simanta Kumar Roy
    Daffodil International University
    roy35-909@diu.edu.bd
    221-35-909
*/

#include<stdio.h>
int main()
{
    int A[5];
    printf("Enter 5 Integer Value ...\n");
    for(int i=0;i<5;i++)
    {
        printf("\nEnter [%d] Index Value : ",i);
        scanf("%d",&A[i]);
    }
    printf("\nPrinting The Array..........\n");
    printf("\n.....Visiting Every Element once and do some work like Printing every Element . Its called Traversing.....\n");
    for(int i=0;i<5;i++)
    {
        printf("\nIndex[%d] == %d",i,A[i]);
    }
    printf("\n\n");
    return 0;

}
