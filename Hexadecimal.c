/*Write a program in C to check whether a character is Hexadecimal Digit or not.*/

#include<stdio.h>
#include<string.h>
main()
{
    char a[50];
    int i,j;
    printf("enter a string- ");
  //  gets(a);
 scanf("%c",&a);
   printf("\n check whether a character is Hexadecimal Digit or not : ");

if((a[i]>=48 && a[i]<=57 ) || (a[i]>=65 && a[i]<=70))
    {
    printf("hexadecimal ");   
}
else
printf("-----not hexadecimal");
}
