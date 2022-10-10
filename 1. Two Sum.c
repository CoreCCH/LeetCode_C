/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* twoSum(int* nums, int numsSize, int target, int* returnSize){
    int min=nums[0];
    for(int i=1;i<numsSize;i++){
        min=min<nums[i]?min:nums[i];
    }
    int *HT = calloc(target-min+1, sizeof(int*));

    HT[nums[0]] = -1;

    for(int i = 1; i < numsSize; i++){
        if (target-nums[i] >= 0)
        {
            if(nums[i] < 0){
                HT[target-nums[i]] = i;
            }
            else{
                HT[nums[i]]= i;
            }
        }
    }
    
    *returnSize=2;
    int *ret = malloc(sizeof(int) * 2);

    for(int j= 0;j<numsSize;j++){
        ret[0] = j;
        if (HT[target-nums[j]]!=0){
            if (HT[target-nums[j]] == -1) {
                HT[target-nums[j]] = 0;
            }
            ret[1] = HT[target-nums[j]];
            if (ret[0] != ret[1])
            {
                free(HT);
                return ret;
            }
        }
    }
    return 0;
}