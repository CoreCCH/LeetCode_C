// 1. i = 0, if (left sum == right sum){return i}
// 2. i = i + 1, if (i > numSize) {return -1} else {do 1.}

int pivotIndex(int* nums, int numsSize){
    int *buff = nums;
    int output = 0;
    int left_sum = 0;
    int right_sum = 0;
    while(output < numsSize){
        left_sum = 0;
        right_sum = 0;
        buff = nums;
        //printf("left sum: ");
        for(int i = 0; i < output; i++)
        {
            //printf("+%d",*buff);
            left_sum = left_sum + *buff;
            buff = buff + 1;     
        }
        //printf("= %d  ",left_sum);
        buff = nums+output+1;
        //printf("right sum: ");
        for(int i = output; i < numsSize-1; i++)
        {
            //printf("+%d",*buff);
            right_sum = right_sum + *buff;
            buff = buff + 1;
        }
        //printf("= %d\n",right_sum);
        if (left_sum == right_sum){
            return output;
        }
        output = output+1;
    }
    return -1;
}