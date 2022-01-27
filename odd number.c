/* Write a program in C to display the n terms of odd natural number and their sum . 

Input number of terms : 10
Expected Output :
The odd numbers are :1 3 5 7 9 11 13 15 17 19
The Sum of odd Natural Number upto 10 terms : 100*/

#include<stdio.h>
main()
{ 
int a,i,c,sum=0;
printf("Input number of terms :");
scanf("%d",&a);
printf("Odd numbers are :");

for( i=1; i<=a ; i++ )
{ 
c=2*i-1;
printf("%d\n",c);
sum=sum+c;
}
printf("The addition of odd number is %d",sum);
}
