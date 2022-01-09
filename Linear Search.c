//Linear Search / Sequential Search in C

#include <stdio.h>
int main()
{
int i, a[100],n,key,flag=0,pos;

printf("enter a number of element ");
scanf("%d",&n);
printf("enter %d number of your choice",n);

for(i=0;i<n;i++)
{ scanf("%d",&a[i]) ;
}
printf("-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-");
printf("\n\nEnter a number for search :");
scanf("%d",&key);

for(i=0;i<n;i++)
{
 if(a[i]==key)
   { 
pos=i+1;
flag=1;             
   }
}
if(flag==1)
printf("\nsearch or %d is found at position at %d",key,pos);

else
printf("%d or search not found",key);




return 0;
}
