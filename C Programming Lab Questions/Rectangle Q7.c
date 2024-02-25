//Write a C program to calculate the area of a rectangle using user input.
#include <stdio.h>  
int main()  
{  
    int width, height,area;
    printf("Enter a width and height :- ");
    scanf("%d\n%d",& width,& height);
    
    int area=width*height;  
    printf("Area of the rectangle=%d",area);  

  return 0;
}  
