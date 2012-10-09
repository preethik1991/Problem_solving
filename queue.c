/*Program to implement a queue
Date  : 06/10/12
 */

#include<stdio.h>

void main() {

    int i,rear=-1,front=-1,item,choice,queue[20],size;

    printf("Enter the queue size\n");
    scanf("%d",&size);
    do
    {
        printf("Enter choice\n 1.Enqueue \n 2.Dequeue \n 3.Display Queue\n");
        scanf("%d",&choice);


        switch(choice)
        {

            case 1:printf("\n\nEnqueue\n");

                   printf("\nenter the element\t");
                   scanf("%d",&item);

                   if(rear>=size-1) {
                       printf("Queue full\n");
                   }

                   else {
                       rear=rear+1;
                       queue[rear]=item;
                   }

                   printf("\n\n");
                   break;

            case 2:printf("Dequeue\n\n");


                   front=front+1;
                   item=queue[front];

                   if(front>=size) {
                       printf("Queue is empty\n");
                   }

                   else {
                       printf("\nelement removed\n");
                   }

                   printf("\n\n");
                   break;

            case 3:printf("Queue is :\n");

                   if(front>=size) {
                       printf("Sorry!!! The queue is empty");
                   } 

                   else {
                       for(i=front+1;i<size;i++) {
                           printf("%d\n",queue[i]); 
                       }     
                   } 
                   break;
            default:printf("\n\ninvalid choice\n\n");

        }

    } while(choice==1||choice==2||choice==3);
}
