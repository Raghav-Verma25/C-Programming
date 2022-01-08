/* display matrix 
and display left and right diagonal of matrix*/

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
            printf("\nEnter the value of row[%d] and column[%d]-",i+1,j+1);
            scanf( "%d", &a[i][j] );
        }
    }
    printf("\n2-D element are ");

    for( i=0 ; i<3  ; i++)
    {
    
        printf("\n");

        for(j=0 ; j<3  ; j++)
            printf("%d\t",a[i][j]);

    }
   
    printf("\n the left diagonal is = ");
    
   for(i=0 ; i<3 ; i++)
    {
        for(j=0 ; j<3 ; j++)
        {
          if(i==j)   
        {
        printf("%d\t",a[i][j]);
        } 
               
        }
    }
   
printf("\nTHE right diagonal is = ");
   for(i=0 ; i<3 ; i++)
    {
        for(j=0 ; j<3 ; j++)
        {
          if(i+j==2)   
        {
        printf("%d\t",a[i][j]);
        } 
               
        }
    }
   


    return (0);
}
