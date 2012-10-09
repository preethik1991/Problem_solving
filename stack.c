/*Program to implement stack
Input  :A stack
Output :Push,pop,display of stack
Date :4/9/12
 */

#include<stdio.h>

void main() {

    int item,top=-1,stack[25],choice,max,x;

    printf("Enter stack size\t");
    scanf("%d",&max);
    do
    {
        printf("\n\n Enter choice \n 1:Push\n 2:Pop\n 3:Display stack\n\n");
        scanf("%d",&choice);

        switch(choice)
        {
            case 1:printf("\n\nPush\n");

                   printf("\nenter the element\t");
                   scanf("%d",&item);

                   if(top==max-1) {   
                       printf("Stack overflow\n");
                   }

                   else {
                       top=top+1;
                       stack[top]=item;
                   }
                   
                   printf("\n\n");
                   break;

            case 2:printf("Pop\n\n");

                   item=stack[top];
                   top=top-1;
                   
                   if(top<=-1) {
                       printf("Stack is empty\n");
                   }

                   else {
                       printf("Top element popped");
                   }

                   printf("\n\n");
                   
                   break;

            case 3:printf("The stack is: \n");
                   
                   int index;
                   if(top<=-1) {
                       printf("Sorry!!!No element found  in the stack");
                   }

                   else {
                     for(index=0;index<=top;index++) {
                       printf("%d\t",stack[index]);
                   }
                   
                   }

                   printf("\n");
                   break;
            
            default:printf("invalid choice\n");

        }
    } while(choice==1||choice==2||choice==3);

}


