#include <stdio.h>
void circle();
void rect(int);
void triangle(int,int,int);
void circle()
{
    int r;
    printf("Enter radius:");
    scanf("%d",&r);
    float res=3.14*r*r;
    printf("area of circle is %f",res);
}
void rect(int length)
{
    int breath;
    printf("enter breath");
    scanf("%d",&breath);
    printf("the area of rectangle is %d",length+breath);
}
void triangle(int a,int b,int c)
{
    printf("the perimeter of triangle is",a+b+c);
}
void main()
{
    int a;
    printf("\n1.CIRCLE");
    printf("\n2.RECTANGLE");
    printf("\n3.TRIANGLE");
    printf("enter your choice:");
    scanf("%d",&a);
   switch(a)
   {
       case 1:circle();
       break;
       case 2:rect(5);
       break;
       case 3:triangle(10,20,30);
       break;
       default: printf("invalid choice:");
   }

}