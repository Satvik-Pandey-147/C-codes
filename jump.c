#include <stdio.h>

int jump(int* nums, int numsSize) {
    int j=0, count=0, max=0;
    while(j != (numsSize)) {
        j = j + *(nums+max);
        for(int i = 1; i <= j ; i++) {
            if(*(nums + i) > *(nums + i + 1))
                max = *(nums + i);
            else
                max = *(nums + i + 1);
        }
        count++;
    }
    return count;
}

int main() {
    int n;

    // Input: size of the array
    printf("Enter the size of the array: ");
    scanf("%d", &n);

    int nums[n];

    // Input: array elements
    printf("Enter the elements of the array: ");
    for(int i = 0; i < n; i++) {
        scanf("%d", &nums[i]);
    }

    // Call the jump function
    int result = jump(nums, n);

    // Output the result
    printf("Minimum number of jumps to reach the end: %d\n", result);

    return 0;
}
