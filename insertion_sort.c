/*Program to implement insertion sort
Input : Numbers
Output: Sorted list of numbers
Date : 05/10/12
 */

#include<stdio.h>

void main() {

    int num,array[20],index1,index2,key;

    printf("Enter the no. of elements to be sorted\n");
    scanf("%d",&num);

    printf("\nEnter the elements to be sorted\n");
    for(index1=0;index1<num;index1++)
    {
        scanf("%d",&array[index1]);
    }
    
    printf("The numbers to be sorted are: ");
    for(index1=0;index1<num;index1++)
    {
        printf("%d\t\n",array[index1]);
    }



    for(index1=1;index1<num;index1++)
    {
        key=array[index1];
        index2=index1-1;
        while(key<array[index2] && index2>=0)
        {
            array[index2+1] = array[index2];
            index2 = index2-1;
        }
        array[index2+1]=key;
    }

    printf("The sorted list is: ");
    for(index1=0;index1<num;index1++) {
        printf("%d\t",array[index1]);
    }
    
}

