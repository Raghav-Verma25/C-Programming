#include<stdio.h>
void printpattern(int n);    // function declaration


int main()
{                        // function call
int n=9;
printpattern(n);
return 0;
}


void printpattern(int n)            // function definition 
{                                
if(n==1){                          // n=1 means line no. 1
printf("*\n");
return;
}

printpattern(n-1);                 //n= number of line
for(int i=0;i<(2*n-1);i++)
{ printf("*");
}
printf("\n");
}

 
