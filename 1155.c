#include<stdio.h>
int main()
{
    double i,s=0.00;
    for(i=1;i<=100;i++)
    {
        s=s+(1/i);
    }
    printf("%0.2lf\n",s);
    return 0;
}
