#include <stdio.h>
#include <stdint.h>

void moveZeroes(int* nums, int numsSize) {
    int index = 0;
    int numberOfZeros = 0;
    for (int i = 0; i < numsSize; i++){
        if (nums[i] != 0){
            nums[index] = nums[i];
            index ++;
        }
        else {
            numberOfZeros ++;
        }
    }
    for(int i = (numsSize - numberOfZeros); i < numsSize; i++){
        nums[i] = 0;
    }
}

int main() {
    int nums[] = {0,1,0,3,12,0,2,4,12,0,23,2,1,0,5,0;
    int numsSize = sizeof(nums) / sizeof(nums[0]);
    moveZeroes(nums, numsSize);
    printf("Output: [");
    for (int i = 0; i < numsSize; i++) {
        printf("%d", nums[i]);
        if (i < numsSize - 1) {
            printf(", ");
        }
    }
    printf("]\n");

    return 0;
}