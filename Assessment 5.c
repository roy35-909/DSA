#include<stdio.h>
// Delete Function :)  //
void del(char *arr,int p,int *s)
    {
        for(int i=p;i<*s-1;i++)
        {
           arr[i] = arr[i+1];

        }
        *s-=1;
    }

// Printing Function :) //
void print(char *arr,int s)
    {
        printf("\nNow we are Printing The array\n");
        for(int i=0;i<s;i++)
            printf("[%d]  =  %c\n",i,arr[i]);
    }


// Insert Function :) //
void insert (char *arr, int p , char data, int *s,int total)
    {

    *s+=1;
    if(*s>total)
    {

        printf("Out of space\n");

    }
    for(int i=p;i<*s;i++)
    {
        char temp = arr[i];
        arr[i] = data;
        data = temp;
    }
    }
int main()
{
    char arr[5] = {'a','b','c'}; // ognam
    int s=3;
    print(arr,s);
    del(arr,0,&s);//bc
    print(arr,s);
    insert(arr,0,'o',&s,5);//obc
    print(arr,s);
    insert(arr,1,'g',&s,5);//ogbc
    print(arr,s);
    del(arr,2,&s);//ogc
    print(arr,s);
    insert(arr,2,'n',&s,5);//ognc
    print(arr,s);
    insert(arr,3,'a',&s,5);//ognac
    print(arr,s);
    del(arr,4,&s);//ogna
    print(arr,s);
    insert(arr,4,'m',&s,5);//ognam
    print(arr,s);

printf("\n\n\n     ") ;
    for(int i=s-1;i>=0;i--)
        printf("%c",arr[i]);

printf("\n\n\n");
    return 0;
}
