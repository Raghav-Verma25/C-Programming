
#include<stdio.h>
int main()
{
    int a[10][10];
    int i,j,n,key;

    printf("Enter the value 2-d array  \n\n");

    printf("------------------------------------------------------------------");

    for(i=0 ; i<3 ; i++)
    {
        for(j=0 ; j<3 ; j++)
        {
            printf("\nEnter the value of row[%d] and column[%d]-",i,j);
            scanf( "%d", &a[i][j] );
        }
    }
    printf("\n2-D element are ");

    for( i=0 ; i<3 ; i++)
    {
        printf("\n");

        for(j=0 ; j<3 ; j++)
            printf("%d\t",a[i][j]);

    }
    
    printf("\n\nenter a element to search in array");
    scanf("%d",&key);
    
    for(i=0 ; i<3 ; i++)
    {
        for(j=0 ; j<3 ; j++)
        {
          if(a[i][j]==key)   
        {
        printf("search found");
        return (0);
        } 
               
        }
    }
   

    printf("not found");
    return (0);
}
