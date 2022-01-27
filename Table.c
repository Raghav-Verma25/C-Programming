/*Write a program in C to display the multiplication table of a given integer*/

#include<stdio.h>
main()
{ 
int i,j,n;

scanf("%d",&n);

printf("the multiplication table 1 to %d is \n",n);


for(i=1;i<=n;++i)
 {
      for(j=1;j<=10;j++)
      printf("%d* %d = %d\n",i,j,i*j);

printf("this above table is table of %d \n\n   ",i);
 

}






}
