#include<stdio.h>

void print(char *arr,int size)
{
    printf("\n");
    for(int i=0;i<size;i++)
    {
        printf("%c ",*arr);
        arr++;
    }
}
int main()
{
// Array Declaration
    int size ;
    printf("Enter Size : ");
    scanf("%d",&size);
    char arr[size];

// value insertion
    for(int i=0;i<size;i++)
    {
        printf("\nEnter [%d] index value : ",i);
        fflush(stdin);
        scanf("%c",&arr[i]);
    }
// Printing Previous Array
    print(arr,size);

//Deletion code Start
    int index;
    printf("Inter a index for delete 2 Char : ");
    scanf("%d",&index);
    char temp;
    for(int i=index;i<size-2;i++)
    {
    arr[i]=arr[i+2];
    }
print(arr,size-2);
}
