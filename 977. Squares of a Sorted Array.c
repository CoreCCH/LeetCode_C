

/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* sortedSquares(int* nums, int numsSize, int* returnSize){
    for(int i = 0; i<numsSize;i++){
        *(nums+i) = *(nums+i)**(nums+i);
        //printf("%d\r",*(nums+i));
    }
    quickSort(nums, 0, numsSize-1);
    for(int i = 0; i<numsSize;i++){
        //printf("%d\r",*(nums+i));
    }
    *returnSize = numsSize;
    return nums;
}

void quickSort(int* data, int left, int right){
    if(left >= right){
        return;
    }
    int i = left;
    int j = right;
    int key = *(data+left); // pivot key
    
    while(i != j){
        while(*(data+j)>key && j>i){ //右到左搜尋
            j = j - 1;
        }
        while(*(data+i)<=key && j>i){ //左到右搜尋
            i = i + 1;
        }
        if(j>i){ //交換值
            int buff = *(data+j);
            *(data+j) = *(data+i);
            *(data+i) = buff;
        }
    }
    
    //交換機準點與左右相遇點
    int buff = *(data+left);
    *(data+left) = *(data+i);
    *(data+i) = buff;
    
    
    quickSort(data, left, i-1);
    quickSort(data, i+1, right);
}