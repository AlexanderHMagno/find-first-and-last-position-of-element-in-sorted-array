int maxProduct(int* nums, int numsSize){

    // Naive approach 2 inner loops
    int max = nums[0];

    for (int i = 0; i < numsSize; i++) {
        int current = nums[i];
        
        for(int j = i + 1; j < numsSize; j++) {
            current *= nums[j];
            if (current > max) {
                max = current; 
            }
        }

        if (nums[i] > max) {
            max = nums[i];
        }
        if (current > max) {
            max = current;
        }
    }
    
    return max;
}