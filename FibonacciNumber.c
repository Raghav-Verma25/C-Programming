/*write a  a fibonacci number with the help of function*/

#include<stdio.h>
main()
{
    int n,i,next,first=0,second=1;

    printf("enter a number for term ");
    scanf("%d",&n);
    
    printf("Fibonacci series of %d is \n", n);
    for(i=0; i<n; i++)
    {
        if(i<=1)
        {   next=i;
 printf(" %d\n",next);
        }

        else
        {   next=first+second;
            first=second;
            second=next;
        }
        printf(" %d\n",next);
    }

}
