
int binarySearch(int* nums, int left, int right, int target)
{
    if (right < left) return -1;

    int middle = left + (right - left) / 2;

    //Make sure we return the first element of the sequence
    if (nums[middle] == target) {
        for (int i = middle - 1; i >= 0 ; i--) {
            if (nums[i] == target) middle = i;
            else break;
        }
        return middle;
    }
    
    //If the middle is greater than the target discard right side
    if (nums[middle] > target) return binarySearch(nums, left, middle - 1, target);
    //If the middle is lower than the target discard left side
    return binarySearch(nums, middle + 1, right, target);
    

}


/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* searchRange(int* nums, int numsSize, int target, int* returnSize){

    int* answer = (int*)malloc( sizeof(int) * 2);
    (* returnSize) = 2;


    int first = binarySearch(nums,0, numsSize - 1, target);
    int second = first; 

    //Find the latest ocurrency of the target value
    for (int j = first + 1; j < numsSize; j ++) {
        if (nums[j] == target) second = j; 
        else break; 
    }
    
    answer[0] = first;
    answer[1] = second;
    


    return answer;

}
