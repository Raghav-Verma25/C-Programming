/* 
Write a program to enter a string s1 and copy it to another string s2.*/

#include<stdio.h>
main()
{ 
char s1[100],s2[100];
int i , j;
printf("Enter any string s1 = ");
gets(s1);

for(i=0 ; s1[i]!='\0' ; i++)
  {
  s2[i]=s1[i];
  }
  
  s2[i]!='\0';
printf("the copy of another string as s2 is = %s " ,s2);


}
