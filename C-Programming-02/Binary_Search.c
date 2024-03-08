#include <stdio.h>

int binarySearch(int nums[], int n, int target)
{
 
    int low = 0, high = n - 1;
 
 
    while (low <= high)
    {
        
 
        int mid = (low + high)/2;
 
        
        if (target == nums[mid]) {
            return mid;
        }
 
        
        else if (target < nums[mid]) {
            high = mid - 1;
        }
 
        
        else {
            low = mid + 1;
        }
    }
 
    
    return -1;
}
 
int main(void)
{
    int nums[] = { 2, 5, 6, 8, 9, 10 };
    int target = 5;
 
    int n = sizeof(nums)/sizeof(nums[0]);
    int index = binarySearch(nums, n, target);
 
    if (index != -1) {
        printf("Element found at index %d", index);
    }
    else {
        printf("Element not found in the array");
    }
 
    return 0;
}