#include<stdio.h>
int main()
{
        int n,a,r,s=0;
        printf("Enter any number:- ");
        scanf("%d",&n);
        
        a=n;
        while(n>0)
        {
            r=n%10;
            s=(r*r*r)+s;
            n=n/10;
        }
        if(a==s)
        {
            printf("Armstrong Number");
        }
        
        else
       {
             printf("Not Armstrong Number");
       }

    return 0;
}