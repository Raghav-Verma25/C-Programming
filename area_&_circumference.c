/*Write a function to calculate area and circumference of a circle.*/

#include<stdio.h>

float area(float r);
float circum(float r);
main()
{
float r,x,q;
printf("enter the radius of circle=");
scanf("%f",&r);
x=area(r);
q=circum(r);

printf("\n\n\nthe area of circle is = %f",x);
printf("\n\n\n\n\n\nthe circumference is = %f",q);
 
return 0;
}

float area(float r)
    { 
float y;
y=3.14*r*r;
return y;
    }

float circum(float r)
{
float p;
float pi=3.14;
p=2*pi*r;
return p;
}
    
