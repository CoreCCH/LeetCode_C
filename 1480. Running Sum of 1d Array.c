/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* runningSum(int* nums, int numsSize, int* returnSize){
    int size = 0;
    int buff = 0;
    int *ret = calloc(numsSize,sizeof(int));
    for(int i=0; i<numsSize;i++){
        ret[i] = *nums+buff;
        //printf("%d\r",ret[i]);
        //printf("%d\n",buff);
        buff = ret[i];
        nums = nums + 1;   
    }
    //free(ret);
    *returnSize = numsSize;
    return ret;
}