#include <stdio.h>
#include<math.h>
int main()
{
     int a,b,c,i,lcm;
    scanf("%d %d",&a,&b);
    for(i=1;1<=a && i<=b;++i)
    {
        if((a%i==0)&&(b%i==0))
            c=i;
    }
    lcm=(a*b)/c;
    printf("LCM is %d",lcm);
    return 0;
}
