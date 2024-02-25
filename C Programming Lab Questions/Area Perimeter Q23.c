//Wap to calculate the area and perimeter of a rectangle using user input for length and width.
#include <stdio.h>

int main() {
   float length, width, area;

   printf("Enter the length of the rectangle:- ");
   scanf("%f", &length);

   printf("Enter the width of the rectangle:- ");
   scanf("%f", &width);

   area = length * width;

   printf("The area of the rectangle is:- %f\n", area);

   return 0;
}


//Predefined 
#include <stdio.h>
 

int main()
{
 

    int l = 10, b = 10;

    int A, P;

    A = l * b;

    P = 2 * (l + b);

    printf("Area of rectangle is : %d", A);

    printf("\nPerimeter of rectangle is : %d", P);

    return 0;
}
