/*
        Author : Simanta Kumar Roy
        Daffodil International University
        221-35-909
        roy35-909@diu.edu.bd
*/

#include<stdio.h>
int main()
{
int filup = 4;
int arr[7] = {1,2,3,4};
int s = sizeof(arr)/sizeof(arr[0]);
printf("the Total array size is : %d\n",s);
printf("Avalable space : %d",s-filup);
while(filup<=7)
{
    printf("The Array Is ..\n");
    for(int i=0;i<filup;i++)
        printf("[%d]  =  %d\n",i,arr[i]);

    printf("Insert A element Type [pos data]\n");
    int pos,data;
    scanf("%d %d",&pos,&data);
    filup ++;
    if(filup>s)
    {

        printf("Out of space\n");
        break;
    }

    for(int i=pos;i<filup;i++)
    {
        int temp = arr[i];
        arr[i] = data;
        data = temp;
    }

}


}
