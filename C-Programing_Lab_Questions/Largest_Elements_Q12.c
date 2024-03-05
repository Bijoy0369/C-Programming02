//Implement a C program to find the largest element in an array.
#include<stdio.h>
#include<conio.h>
int main()
{
    int arr[10], i, large;
    printf("Enter 10 Array Elements: ");
    for(i=0; i<10; i++)
        scanf("%d", &arr[i]);
    i=0;
    large = arr[i];
    while(i<10)
    {
        if(large<arr[i])
            large = arr[i];
        i++;
    }
    printf("\nLargest Number = %d", large);
    getch();
    return 0;
}
//2nd method 
/*#include <stdio.h>
int main() {
  int n;
  int arr[100];
  printf("Enter the number of elements (1 to 100): ");
  scanf("%d", &n);

  for (int i = 0; i < n; ++i) {
    printf("Enter number%d: ", i + 1);
    scanf("%d", &arr[i]);
  }

  
  for (int i = 1; i < n; i++) {
    if (arr[0] < arr[i]) {
      arr[0] = arr[i];
    }
  }

  printf("Largest element = %d", arr[0]);

  return 0;
  }
*/