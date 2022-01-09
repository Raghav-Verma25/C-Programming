/* Write a program in C to read a sentence and replace lowercase characters
 by uppercase and vice-versa.

Test Data :
Input the string : This Is A Test String.

Expected Output :

The given sentence is   : This Is A Test String.
After Case changed the string  is: tHIS iS a tEST sTRING.
*/
#include<stdio.h>
main()
{
    char a[50];
    int i,j,k;

    printf("input a string- ");
    gets(a);
    printf("\n given string will convert  lowercase into uperrcase and vice versa");
    printf("\nthe given sentence is :");

    for(i=0 ; a[i]!=0 ; i++)
    {
        if(a[i]>=65 && a[i]<=90)
        {
            a[i]=a[i]+32;
        }
        else if(a[i]>=97 && a[i]<=122)
        {
            a[i]=a[i]-32;
        }
    }
    puts(a);
}
