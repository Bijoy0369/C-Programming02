//Write a program to determine the largest of three numbers using nested if-else statements.
#include <stdio.h>

int main()
{
int num1, num2, num3;
printf("Enter Three Numbers: \n");
scanf("%d %d %d", &num1, &num2, &num3);

if (num1 > num2 && num1 > num3)
	printf("\nLargest Number Is :%d", num1);

else if (num2 > num3 && num2 > num1)
	printf("\nLargest Number Is :%d", num2);

else if (num1 > num1 && num3 > num2)
	printf("\nLargest Number Is :%d", num1);

else if ((num1 == num2) && (num2 == num3) && (num3 == num1))
	printf("\nAll Numbers Are Equal");

	return 0;
}

//2nd method 

#include <stdio.h>

int main() {

  int num1, num2, num3;
	printf("Enter Three Numbers: \n");
	scanf("%d %d %d", &num1, &num2, &num3);

    if(num1 >= num2) {

        if(num1 >= num3) {

            printf("\n%d is largest number", num1);

        } else {

            printf("\n%d is largest number", num3);
        }

    } else {

        if(num2 >= num3) {

            printf("\n%d is largest number", num2);

        } else {

            printf("\n%d is largest number", num3);
        }

    }

    return 0;
}
