/* Write a program in C to extract a substring from a given string. 

Test Data :
Input the string : this is test string
Input the position to start extraction :9
Input the length of substring :4

Expected Output :

The substring retrieve from the string is : " test " */

#include<stdio.h>
#include<string.h>
main()


{ 
char a[50];
int i,j,n,x,y;
printf("\n enter a string -");
gets(a);

printf("\nInput the position to start extraction :");
scanf("%d",&x);
printf("\nInput the last of substring : ");
scanf("%d",&y);

printf("\nThe substring retrieve from the string is :");

for( i=x ;i<=y ; i++)  
    { 
         
printf("%c",a[i]);
    }

printf("\nwant to check more z for yes and n for no\n\n");
scanf("%c",&choice);

}
