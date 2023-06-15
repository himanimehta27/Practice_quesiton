#include<stdio.h>
int Bigger(int a ,int b)
{int larger;
larger = a>b?a:b; 
return larger;}
int main()
{
  // Variable declaration
   int a,b,larg;  
   printf("Enter two number\n");
   scanf("%d %d",&a,&b);
   larg=Bigger(a,b);
   printf("largest number is : %d",larg);  
  return 0;
}
