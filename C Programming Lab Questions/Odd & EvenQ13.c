//Develop a program to check whether a number is even or odd
#include <stdio.h>  
  
int main() {  
int number;  
  
printf("Enter a number:- ");  
scanf("%d", &number);  
  
    if (number % 2 == 0) {  
printf("%d is an even number:-\n", number);  
    } else {  
printf("%d is an odd number:-\n", number);  
    }  
  
    return 0;  
}  
