#include <stdio.h>
#include<string.h>
int main()
{
    char a[25];
    int i=0,b=0,n=0,s=0;
    scanf("%s",a);
    while(a[i]!='\0')
    {
        if((a[i]>='A' && a[i]<='Z')||(a[i]>='a' && a[i]<='z'))
        {
            b++;
        }
        else if(a[i]>='0' && a[i]<='9')
        {
            n++;
        }
        else
        {
            s++;
        }
        i++;
    }
    printf("\nalphabet = %d",b);
    printf("\nnumbers = %d",n);
    printf("\nspecial = %d",s);
        
    return 0;
} 
