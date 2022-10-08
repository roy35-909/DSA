/*
    Simanta Kumar Roy
    Daffodil International University
    roy35-909@diu.edu.bd
    221-35-909
*/
#include<stdio.h>

//Function For Printing Array;
void print(char *arr,int size)
{
    printf("\n");
    for(int i=0;i<size;i++)
    {
        printf("%c ",*arr);
        arr++;
    }

}

//Main Function Start
int main()
{
    //Array Declaration
    int size;
    printf("Enter Array Size : ");
    scanf("%d",&size);
    char arr[size+2];

    //Store Value in Array
    for(int i=0;i<size;i++)
    {
        fflush(stdin);// Flash memory
        printf("\nEnter [%d] Index Value : ",i);
        scanf("%c",&arr[i]);

    }
    //print before insertion array
    print(&arr,size);
    // Insertion Code Start

    int index;char value;char temp;
    printf("\nEnter [index value] : ");
    scanf("%d %c",&index,&value);
    for(int i=index;i<size+1;i++)
    {
        temp = arr[i];
        arr[i] = value;
        value=temp;
    }

    // After Insertion Array size increase;
    size++;

    //Print Full Array
    print(&arr,size);

}
