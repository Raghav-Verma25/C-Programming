/* Write a program in C to display the pattern like a diamond.

    *
   *** 
  *****
 *******
********* 
 *******
  *****
   ***
    * */

#include <stdio.h>

void main()
{
   int r,p,sp,no,n;
printf("Enter a number of row");
scanf("%d",&no);                 // no-no. of row
n=no;

for(r=0;r<=no;r++ )
{ 
   for(sp=1;sp<=n; sp++)
        {printf("  "); 
        }
         n--;
        
        for(p=1; p<=2*r-1; p++)
        { printf("* a");
        }
                 printf("\n");
}

 
for(r=no-1;r>=1; --r)
{  
    for(sp=1; sp<=no-r; sp++ ) 
        { printf("  ");
        }
         n--;
        
        for(p=1;p<=2*r-1;p++)
          { printf("* ");
        }
        printf("\n");
}
   }

