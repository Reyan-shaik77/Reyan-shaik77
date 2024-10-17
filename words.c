#include<stdio.h>
#include<string.h>
void main()
{
 char a[200];
 printf("Enter a sentence ");
  gets(a);
 intlen=strlen(a);
 int count=0;
 for(i=0;i<len;i++)
 {
   if(a[i]==" ")
   count=count+i;
 }
 printf("the no of words is %d",count+j);
}