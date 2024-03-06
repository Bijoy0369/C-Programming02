#include<stdio.h>
int main(){
    int n,a,r,s=0;
    printf("Enter any number:- ");
    scanf("%d",&n);
    a=n;
    while(n>0)
    {
        r=n%10;
        s=(s*10)+r;
        n=n/10;

    }
      if(a==s)
         {
            printf("Palindrome Number");
         }
         
         else
         {
            printf("Not Palindrome Number");
         }
         

    return 0;
}