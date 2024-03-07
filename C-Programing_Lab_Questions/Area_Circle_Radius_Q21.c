//Write a program to calculate the area of a circle using using user input for the radius.

#include <stdio.h>  
  
int main()   
{   
 float Pi= 3.14, radius,area;
  
  
printf("Enter the radius of the circle: ");  
scanf("%f", &radius);  
  
area = Pi * radius * radius;  
  
printf("The area of the circle is: %f", area);  
  
return 0;  
}  
