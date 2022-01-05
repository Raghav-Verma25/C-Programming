
/*A three digit number is called Armstrong number if sum of cube of its digit is equal to number itself.
E.g.- 153 is an Armstrong number because (13)+(53)+(33) = 153.
Write all Armstrong numbers between 100 to 500.*/

#include<stdio.h>
int main(void)
{
int sum=0,a,num,dg;                 //dg=digit 
printf("\n enter a no.");
scanf("%d",&num);
a=num;

while(num>0)
{  
dg=num%10;
sum=dg*dg*dg;
num=num/10;
}
 if(a==sum)
printf("no. is armstrong");

else
printf("no. is not armstrong");
    
}
