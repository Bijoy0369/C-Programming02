//C Program To Swap Two Numbers Using Third Variable 

#include <stdio.h>
int main()
{
int v1, v2, temp;
printf("Enter two Number");
scanf("%d%d", &v1, &v2);
printf("Before Swapping \n First variable = %d \n Second variable = %d \n", v1, v2);
temp = v1;
v1 = v2;
v2 = temp;
printf("After Swapping \n First variable = %d \n Second variable = %d \n", v1, v2);
return 0;
}