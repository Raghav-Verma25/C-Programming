

#include<stdio.h>
main()
{ 
int i,n,sum=0;

printf("Test Data : ");
scanf("%d",&n);
printf("The first %d natural number is :\n",n);

for(i=1; i<=n; i++)

{
printf("%d\n",i);

sum=sum+i;
}
printf("The SUM of natural number upto %d term is %d",n,sum);





}
