/* Write a program in C to remove characters in String Except Alphabets. Go to the editor

Test Data :
Input the string : w3resource.com

Expected Output :

After removing the Output String : wresourcecom */

#include<stdio.h>
#include<string.h>
main()
{
    char a[50];
    int i,j,k;
    printf("enter a string- ");
    scanf("%s",a);

    printf("\nremove characters in String Except Alphabets\n");
    printf("After removing the Output String :");

    for(i=0 ; a[i]!='\0'; i++)
    {
        if( (a[i]>=65 && a[i]<=90) || (a[i]>=97 && a[i]<=122) )
        {
            printf("%c",a[i]);
        }


    }
}
