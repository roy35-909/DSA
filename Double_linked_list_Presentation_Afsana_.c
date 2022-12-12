/*
    Simanta Kumar Roy
    Daffodil International University
    roy35-909@diu.edu.bd
    221-35-909



    Ques:  Create a Doubly linked list which can take character as input,
    after creation write a code which can delete the second element form
    that linked list. Finally print all elements. To create the Linked
    list, using a loop is mandatory.

*/

#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>
int main()
{
    struct Node {
        char data;
        int pos;
        int *pre;
        int *next;
    };

    typedef struct Node node;
    node *NODE,*first,*temp = 0;


    char choice = 'O';
    first = 0;
    printf("Type 0 For Exit . Else Keep Adding number :) :) \n\n");
    int count = 0;


    while(1)
    {
        NODE = (node *)malloc(sizeof(node));
        printf("Insert %d Index Data : ",count);
        scanf("%c",&NODE->data);
        NODE->pos = count;
        if(NODE->data=='0')
            break;




        if(first==0)
        {
            NODE -> pre = 0;
            first = temp = NODE;
        }
        else{
            temp->next = NODE;
            NODE -> pre = temp;
            temp = NODE;
        }
        fflush(stdin);
    count++;

    }

    temp->next = 0;
    temp = first;



    //Printing List :
    printf("\n Printing The linked List.\n\n");
    while(temp!=0)
    {
        printf("| [Index : %d]    Previous = %d    Data = %c    Next = %d   |\n\n",temp->pos,temp->pre,temp->data,temp->next);
        temp = temp->next;
    }


    temp = first;
    node *temp2;
    temp2 = first;
    int n = 1; // Which Element You want to delete
    while(temp!=0)
    {
        if(temp->pos==n){
            temp2 ->next = temp->next;
            node *temp3;
            temp3 = temp->next;
            temp3->pre = temp2;
            break;
        }
       temp2 = temp;
       temp = temp->next;

    }

    //Printing List :
    printf("\n Printing The linked List After Deleting 2nd Element.\n\n");
    temp = first;
    while(temp!=0)
    {
        printf("| Previous = %d    Data = %c    Next = %d   |\n\n",temp->pre,temp->data,temp->next);
        temp = temp->next;
    }



}
