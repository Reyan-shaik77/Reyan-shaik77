#include <stdio.h>
#include <string.h>
void main() 
{
    char a[2]="54";
    int b=0;
    for(int i=0;i<2;i++)
    {
        b=(b*10)+(a[i]-'0');
        
    }
    printf("%d",b);
}