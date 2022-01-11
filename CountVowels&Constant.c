/* Write a program in C to count total number of vowel or consonant in a string. */

#include<stdio.h>
#include<string.h>
main()
{
char a[100];
int i,j,total=0,con=0;

printf("Enter a statement to count total number of vowels and constant in  a string -");
gets(a);

for(i=0 ; a[i]!='\0' ; i++)
   { 
      if( a[i]=='a' || a[i]=='e' || a[i]=='i' || a[i]=='o' || a[i]=='u' ||a[i]=='A' || a[i]=='E' || a[i]=='I' || a[i]=='O' || a[i]=='U' )
         { 
          total=total+1; 
        }
      
   else if( (a[i]>'a' && a[i]<='z') || (a[i]>'A' && a[i]<='Z') ) 
   
       { 
    con=con+1;
        } 
       
   }
printf("the total number of vowel are = %d",total);
        printf("\n\nthe total number of constant are = %d",con);






}
