// Convert vowels into upper case character in a given string.

#include<stdio.h>
main()
{ 
 char stng[100];
int i,j;
printf("Enter a string = ");
gets(stng);

i=0;

while( stng[i]!='\0')
{
if(stng[i]=='a' || stng[i]=='e' || stng[i]=='i' || stng[i]=='o' || stng[i]=='u')
   {  
    stng[i]=stng[i]-32;
    }
i++;
}

printf("Convert vowels into upper case character in a given string is = ");
puts(stng);

}
