/* Write a program in C to add two numbers using pointers*/
#include<stdio.h>
main()
{
    int n1,n2,c;
    int *p1,*p2;

    printf("enter 2 numberfor addition= ");
    scanf("%d %d",&n1,&n2);

    p1=&n1;
    p2=&n2;
//c=*p1 + *p2
    
    printf("the sum of two number is i.e %d and %d is %d",*p1,*p2,*p1+*p2);


return 0;
}
