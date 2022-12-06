/*
        Author : Simanta Kumar Roy
        Daffodil International University
        221-35-909
        roy35-909@diu.edu.bd
*/


#include<stdio.h>

void print(int *arr,int top)
    {
        if(top <0)
            printf(" \nArray Is Emty\n");
        else{
            printf("\nNow we are Printing The Array \n");
        for(int i=0;i<top+1;i++)
        {
            printf("[%d]  =  %d\n",i,arr[i]);
        }

        }

    }

void pop(int *top)
    {
        if(*top<0)
            printf("\nUnderflow!!!!!!!!!!!!!\n"); // If top < 0 that means , Array is empty and we cant delete anything.
        else{
            *top-=1; // if we successfully delete then we need to decrease top value to 1 ;
        }
    }
void push(int *arr,int *top,int data)
    {
        arr[*top+1] = data; // Here *top means The position of last element , If empty then it -1;
        *top+=1; // After pushing we need to increase top value to 1;
    }


int main()
{
    int s =5;
    int arr[s];
    int top = -1;// If Array Is Empty then Top = -1;




   int choice;
   while(1)
   {
       printf("\n 1) PUSH \n 2) POP \n 3) Print \n 4) Top \n Any Char For exit..\n");
       if(!scanf("%d",&choice))
            break;

//Switch Case :
   switch(choice){
   case 1:
    {

        if(top+1>=s)
            printf("\nOverflow ! You can't insert any data .\n");
        else
        {
        printf("\nEnter Your Data :");
        int data;
        scanf("%d",&data);
        push(arr,&top,data);
        }

        break;
    }
   case 2:
       {
          pop(&top);
          break;
       }
   case 3:
    {
        print(arr,top);
        break;
    }
   case 4:
    {
        printf("\nTop value is : %d\n",top);
    }




    }

   }
}
