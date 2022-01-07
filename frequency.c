//program to count frequency of given array.

#include <stdio.h>
int main()
{
int i, a[100],n,key,flag=0,fre=0;

printf("enter a number of element ");
scanf("%d",&n);
printf("enter %d number of your choice",n);

for(i=0;i<n;i++)
{ scanf("%d",&a[i]) ;
}
printf("-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-");
printf("\n\nTo search a frequency , enter a number  :");
scanf("%d",&key);

for(i=0;i<n;i++)
{
if(a[i]==key)
{ 
fre=fre+1;
flag=1;
}
}
if(flag==1)
{ 
printf("%d come in array at %d time",key,fre);
}
else
printf("search not found");


return 0;
}
