/*☺ Write a program in C to find the square of any number using the function*/

#include<stdio.h>
int square(int a);

main()
{
    int a,c;
    printf("Enter a number for square");
    scanf("%d",&a);
    c=square(a);
    printf("the square is %d",c);
}
int square(int a)
{
    int y,x;
    y=a*a;
    return y;

}
