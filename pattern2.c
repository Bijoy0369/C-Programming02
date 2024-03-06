#include<stdio.h>
#include<string.h>

 int main()
{   
    char str[]="TECHNO";
    int len;
    len=strlen(str);

    for(int r=0;r<len;r++)  //rows
    {
        for(int c=0;c<=r;c++) //colume
        {
            printf("%c ",str[c]);
        }    
        printf("\n");
        
    }

    return 0;
}