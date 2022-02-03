/*
Write a program in C to store n elements in an array and print the elements using pointer. Go to the editor
Test Data :
Input the number of elements to store in the array :5
Input 5 number of elements in the array :
element - 0 : 5
element - 1 : 7
element - 2 : 2
element - 3 : 9
element - 4 : 8
Expected Output :

 The elements you entered are :                                                                               
 element - 0 : 5                                                                                              
 element - 1 : 7                                                                                              
 element - 2 : 2                                                                                              
 element - 3 : 9     
element - 4 : 8   
*/
#include<stdio.h>
main()
{ 
char a[50];
int i,j,k,n;
printf("Input the number of elements to store in the array : ");
scanf("%d",&n);


for(i=0 ; i<n; i++)
  {
printf("element - %d : ",i);
 scanf("%d",&a[i]);

  }
printf("\nThe elements you entered are :");
for(i=0 ; i<n; i++)
  {
printf("\nelement - %d : %d",i,a[i]);


  }


}

