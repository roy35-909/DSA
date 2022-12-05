/*
        Author : Simanta Kumar Roy
        Daffodil International University
        221-35-909
        roy35-909@diu.edu.bd
*/

#include<stdio.h>


void print_array(int *arr,int len)
{

    for(int i=0;i<len;i++)
    {
        printf("[%d]   =   %d\n",i,arr[i]);
        //arr++;

    }

};


int main()
{

    int n,l,h,src,found_pos;
    printf("Enter Array Size : ");
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++)
    {
        printf("\nEnter Data For index [%d] : ",i);
        scanf("%d",&arr[i]);
    }

    print_array(arr,n);

    printf("\n\n####### Binary Src ########");
    printf("\n\nEnter a Interger For src And Delete , Don,t  Worry All Element Will be Sorted : ");
    scanf("%d",&src);

      //Sorting Algorithm//

      for (int c = 0 ; c < n - 1; c++)
        {
    for (int d = 0 ; d < n - c - 1; d++)
    {
      if (arr[d] > arr[d+1])
      {
        int swap       = arr[d];
        arr[d]   = arr[d+1];
        arr[d+1] = swap;
      }
    }
  }

  //Printing Sorted Array//
  printf("\n\nThe Sorted Array Is ....\n\n");
  print_array(arr,n);




    l = 0;
    h = n-1;
    while(1)
    {
        int mid = (l+h)/2;
        if(arr[mid]==src)
        {
        printf("\n\nFound on index %d\n\n",mid);
        found_pos = mid;
        break;
        }
        else if(l>=h)
        {
            printf("\n\nNot Found !\n");
            found_pos = -1;
            break;
        }
        else if(arr[mid]>src)
            h = mid-1;

        else if(arr[mid]<src)
            l = mid+1;

    }

    if(found_pos >=0)
    {
        printf("\n\nWe are deleting Element %d !!!  \n\n",src);

        for(int i=found_pos;i<n-1;i++)
        {
            arr[i]=arr[i+1];
        }
        n--;
        printf("\nAfter Deleting,  The array Is ......\n\n");

    }
    else
    {
        printf("\nWe are Not Found %d So , We can't Dlt it\n\n",src);
        printf("\n\nSo, The Original Array Is.....\n\n");
    }

    print_array(arr,n);



}
