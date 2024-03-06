#include<stdio.h>
int main()
{   
   
    int cont=1;
    for(int r=0;r<6;r++)
    {
        for(int c=0;c<=r;c++)
        {
            printf("%d ",cont++);
        }    
        printf("\n");
        
    }

    return 0;
}