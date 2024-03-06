#include<stdio.h>
int main()
{   
    
    for(int r=0;r<6;r++)  //r=rows
    {
        for(int c=0;c<=r;c++)  //c=colume
        {
            printf("* ");
        }    
        printf("\n");
        
    }

    return 0;
}