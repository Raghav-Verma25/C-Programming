/*Write a function to calculate power of a number raised to other. E.g.- a to the power b.*/

 #include<stdio.h>
int power(int a, int b);
main()
{ 
int a,b,p;
printf("enter a=");
scanf("%d",&a);
printf("enter b=");
scanf("%d",&b);

p=power(a,b);
printf("the %d to the power %d is %d",a,b,p);

} 
    int power(int a, int b)
  { 
     int r=1,i;       
for(i=1;i<=b;i++)
{
r=r*a;
}
return r;
         }       
