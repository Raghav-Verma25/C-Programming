//program to delection given array.

#include <stdio.h>
int main()
{
    int i, a[100],j,n,key,pos,index;

    printf("enter a number of element ");
    scanf("%d",&n);
    printf("enter %d number of your choice",n);

    for(i=0; i<n-1; i++)
    {   scanf("%d",&a[i]) ;
    }
    printf("-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-");

    printf("\nEnter a value to delete or remove in array :");
    scanf("%d",&key);
    
    index=n-1;
    for(i=0; i<index; i++)
    {
        if(a[i]==key)
        {
            for(j=i+1; j<=index; j++)
            {
                a[j-1]=a[j];

            }
            i--;
            index--;
        }


    }


    printf("Now the new array is");

    for(i=0; i<index; i++)
        printf("\n%d",a[i]);




    return 0;
}
