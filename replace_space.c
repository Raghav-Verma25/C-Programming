

#include<stdio.h>
#include<string.h>
main()
{
    char a[50];
    int i,j;
    printf("enter a string- ");
    gets(a);
 
   printf("\n replace the spaces of a string with a specific character : ");

  for(i=0  ;  a[i]!='\0' ; i++)
   { 
   if(a[i]==' ')
         {  
           a[i]='*';
         }

    }

puts(a);

}
